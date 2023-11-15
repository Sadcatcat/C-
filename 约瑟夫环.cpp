//#include<stdio.h>
//#include<stdlib.h>
//
////M个人逢N报数,留一个人
//void YSF(int m,int n)
//{
//	int count=0;//淘汰计数器
//	int end_count = 0;//结束计数器
//	int* index = (int*)malloc(m * sizeof(int)+1);//创建每个人的标记，代表是否被淘汰
//	
//
//	for (int i = 1; i <= m; i++)//初始化
//		*(index+i) = 0;//0为非淘汰状态，1为淘汰状态
//
//	if(m>1){
//
//	for (int i = 1;m-end_count!=1; )
//	{
//		if (*(index+i) == 0)
//		{
//			count++;
//			if (count == n) { *(index + i) = 1; count = 0; end_count++;}
//			i++;
//		}
//		else
//			i++;
//
//
//		if (i > m)
//			i = 1;
//
//	}
//
//	}
//
//	for (int i = 1; i <= m; i++)
//	{
//		if (*(index+i) == 0) printf("最后留下来的是:%d号\n", i);
//	}
//
//}
//
//int main()
//{
//	YSF(10,3);//M个人逢N报数
//	system("pause");
//	return 0;
//}