////N皇后问题
////给定一个N*N的棋盘，要在棋盘上摆放N个皇后
////并且满足N个皇后中任意两个皇后都不处于同一行，同一列，同一斜线上
//
//#include<stdio.h>
//#include<stdlib.h>
//#include<stdbool.h>
//
//#define N 4
//int answer = 0;
//int Q[N + 1]; //建立存储皇后位置的数组
//
//int isLegal(int j) // 判断当前皇后同一列和同一斜线位置是否合法
//{
//	for (int i = 1; i < j; i++)
//	{
//		if (Q[i] == Q[j] || abs(i - j) == abs(Q[i] - Q[j]))
//			return 0;
//	}
//	return 1;
//
//}
//
//void Queen(int j)
//{
//
//	
//
//	for (int i = 1; i <= N; i++)
//	{
//		Q[j] = i;//初始化
//	
//
//	if (isLegal(j))//当拜访位置合法时
//	{
//		if (j == N) //找到了一组解
//		{
//			answer++;
//			printf("方案%d: ", answer);
//			for (int i = 1; i <= N; i++)
//			{
//				printf("%d ", Q[i]);
//			}
//			printf("\n");
//		}
//		else
//			Queen(j + 1);//递归摆放下一个皇后的位置
//		}
//	
//	}
//
//}
//
//int main()
//{
//	Queen(1);
//	system("pause");
//}