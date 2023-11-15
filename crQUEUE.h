#include "stdio.h"
#include "malloc.h"

class crQUEUE //循环队列
{
	int *que;      //队列名
	int front,rear;//队头、队尾指示器
	int max;       //队列容量
public:
	crQUEUE(int n);//构造
	~crQUEUE();    //析构
	int InQueue(int e); //进入队列
	int DeQueue(int &e);//离开队列
	void print();       //输出队列元素
	int GetLength();    //获取队列长度
	int GetHead();      //获取队头元素
	int GetTail();      //获取队尾元素
};

crQUEUE::crQUEUE(int n)
{
	que=(int *)malloc(n*sizeof(int));
	if(que==0){printf("空间分配失败\n");return;}
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
	if((rear+1)%max==front){printf("队列已满，无法进入队列\n");return 0;}
	que[rear]=e;
	rear=(rear+1)%max;
	return 1;
}

int crQUEUE::DeQueue(int &e)
{
	if(rear==front){printf("空队列，无元素出队列\n");return 0;}
	e=que[front];
	front=(front+1)%max;
	return 1;
}

void crQUEUE::print()
{
	if(front==rear)
		printf("空队列\n");
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

