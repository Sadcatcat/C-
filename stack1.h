#include "stdio.h"
#include "malloc.h"

class STACK     //定义顺序结构的堆栈
{
	int *stk;         //堆栈名称
	int *top,*base;   //栈顶、栈底指针
	int max;          //栈容量
public:
	STACK(int n);     //构造函数
	~STACK();         //析构函数
    int	push(int e);  //把元素e压入堆栈
	int pop(int &e);  //把栈顶元素弹出堆栈。引用类型参数e用来保存弹出的元素
	void print();     //从顶到底输出栈内元素
	int empty();      //判断堆栈是否为空
	int gettop();
};

STACK::STACK(int n)
{
	stk=(int *)malloc(n*sizeof(int));//分配栈空间，栈基地址为stk
	if(stk==0){printf("内存空间分配失败\n");return;}
	top=base=stk;//初始状态的栈，top和base指针都指向基地址单元
	max=n;       //栈容量由用户通过参数指定
}

STACK::~STACK()
{
	if(stk)  //为避免二次析构带来的严重后果，析构前检查stk是否为空（已经析构）
	{
		free(stk);
		stk=0;
	}
}

int	STACK::push(int e)
{
	if(top-base>=max){printf("堆栈已经满，不能插入\n");return 0;}
	*top=e;
	top++;
	return 1;
}

int	STACK::pop(int &e)
{
	if(top==base){printf("堆栈已空，不能删除\n");return 0;}
	top--;
	e=*top;  //引用类型参数e保存并带回被删除的栈顶元素
	return 1;
}

void STACK::print()
{
	int *p=top;
	if(top-base==0){printf("堆栈为空\n");return;}
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
