////N皇后问题
////给定一个N*N的棋盘，要在棋盘上摆放N个皇后
////并且满足N个皇后中任意两个皇后都不处于同一行，同一列，同一斜线上
//
//#include<stdio.h>
//#include<stdlib.h>
//#include<stdbool.h>
//
//#define N 4
//
//int Q[N + 1]; //建立存储皇后位置的数组
//
//int isLegal(int j) // 判断当前皇后同一列和同一斜线位置是否合法
//{
//	for (int i = 1; i <j; i++)
//	{
//		if (Q[i] == Q[j] || abs(i - j) == abs(Q[i] - Q[j]))
//			return 0;
//	}
//	return 1;
//
//}
//
//void Queen()
//{
//	
//	int j = 1;
//	int answer = 0;
//	
//	for (int i = 1; i <= N; i++)
//	{
//		Q[i] = 0;//初始化
//	}
//
//	while (j >= 1)
//	{
//		Q[j]++; // 代表第j个皇后列位置后移
//		
//		while (Q[j] <= N && !isLegal(j))//看第j个位置是否合法，不合法就后移动
//		{
//			Q[j]++;
//		}
//
//		if (Q[j] <= N) // 说明找到了合法的位置
//		{
//			if (j == N) //找到了一组解
//			{
//				answer++;
//				printf("方案%d: ", answer);
//				for (int i = 1; i <= N; i++)
//				{
//					printf("%d ", Q[i]);
//				}
//				printf("\n");
//			}
//			else
//				j = j + 1;
//		}
//		else//表示第j个皇后找不到合法位置，需要向上回溯
//		{
//			//回溯到初始值
//			Q[j] = 0;
//			j = j - 1;
//		}
//	}
//
//}
//
//int main()
//{
//	Queen();
//	system("pause");
//}