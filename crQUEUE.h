#include "stdio.h"
#include "malloc.h"

class crQUEUE //ѭ������
{
	int *que;      //������
	int front,rear;//��ͷ����βָʾ��
	int max;       //��������
public:
	crQUEUE(int n);//����
	~crQUEUE();    //����
	int InQueue(int e); //�������
	int DeQueue(int &e);//�뿪����
	void print();       //�������Ԫ��
	int GetLength();    //��ȡ���г���
	int GetHead();      //��ȡ��ͷԪ��
	int GetTail();      //��ȡ��βԪ��
};

crQUEUE::crQUEUE(int n)
{
	que=(int *)malloc(n*sizeof(int));
	if(que==0){printf("�ռ����ʧ��\n");return;}
	front=rear=0;
	max=n;
}

crQUEUE::~crQUEUE()
{
	if(que)
	{
		free(que);
		que=0;
	}
}

int crQUEUE::InQueue(int e)
{
	if((rear+1)%max==front){printf("�����������޷��������\n");return 0;}
	que[rear]=e;
	rear=(rear+1)%max;
	return 1;
}

int crQUEUE::DeQueue(int &e)
{
	if(rear==front){printf("�ն��У���Ԫ�س�����\n");return 0;}
	e=que[front];
	front=(front+1)%max;
	return 1;
}

void crQUEUE::print()
{
	if(front==rear)
		printf("�ն���\n");
	else 
	{
		int i=front;
		while(i!=rear)
		{ 
		  printf("%d ",que[i]);
		  i=(i+1)%max;
		}
	}
	printf("\n");
}
/*
void crQUEUE::print()
{
	if(rear>front)
	{
	for(int i=front;i<rear;i++)
		printf("%d ",que[i]);
	}
	else
	{
		for(int i=front;i<max-fabs(rear-front);i++)
			printf("%d ",que[i]);
	}


	printf("\n");
}
*/

int crQUEUE::GetLength()
{
	return (rear-front+max)%max;
}

int crQUEUE::GetHead()
{
	return que[front];
}

int crQUEUE::GetTail()
{
	return que[(rear-1+max)%max];//return que[rear-1];
	
}
//
//void main()
//{   
//	
//	crQUEUE q(5);
//	int e;
//	
//	q.InQueue(10);
//	q.InQueue(20);
//	q.InQueue(30);
//	q.InQueue(40);
//
//	q.DeQueue(e);
//	printf("e=%d\n",e);
//	q.DeQueue(e);
//	printf("e=%d\n",e);
//	
//	q.print();
//	
//	q.InQueue(50);
//	q.InQueue(60);
//
//	printf("%d\n",q.GetTail());
//
//	
//	q.print();
//}
//

