#include "stdio.h"
#include "malloc.h"

class STACK     //����˳��ṹ�Ķ�ջ
{
	int *stk;         //��ջ����
	int *top,*base;   //ջ����ջ��ָ��
	int max;          //ջ����
public:
	STACK(int n);     //���캯��
	~STACK();         //��������
    int	push(int e);  //��Ԫ��eѹ���ջ
	int pop(int &e);  //��ջ��Ԫ�ص�����ջ���������Ͳ���e�������浯����Ԫ��
	void print();     //�Ӷ��������ջ��Ԫ��
	int empty();      //�ж϶�ջ�Ƿ�Ϊ��
	int gettop();
};

STACK::STACK(int n)
{
	stk=(int *)malloc(n*sizeof(int));//����ջ�ռ䣬ջ����ַΪstk
	if(stk==0){printf("�ڴ�ռ����ʧ��\n");return;}
	top=base=stk;//��ʼ״̬��ջ��top��baseָ�붼ָ�����ַ��Ԫ
	max=n;       //ջ�������û�ͨ������ָ��
}

STACK::~STACK()
{
	if(stk)  //Ϊ��������������������غ��������ǰ���stk�Ƿ�Ϊ�գ��Ѿ�������
	{
		free(stk);
		stk=0;
	}
}

int	STACK::push(int e)
{
	if(top-base>=max){printf("��ջ�Ѿ��������ܲ���\n");return 0;}
	*top=e;
	top++;
	return 1;
}

int	STACK::pop(int &e)
{
	if(top==base){printf("��ջ�ѿգ�����ɾ��\n");return 0;}
	top--;
	e=*top;  //�������Ͳ���e���沢���ر�ɾ����ջ��Ԫ��
	return 1;
}

void STACK::print()
{
	int *p=top;
	if(top-base==0){printf("��ջΪ��\n");return;}
	for(int i=0;i<top-base;i++)
	{
		p--;
		printf("%d\n",*p);
	}
	printf("\n\n");
}

int STACK::empty()
{
	if(top==base)return 1;
	else return 0;
}

int STACK::gettop()
{
	int *p=top;
	p--;
	return *p;
}
