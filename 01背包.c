//#include<stdio.h>
//
//#define N 4//背包数量
//#define W 5//背包容量
//
//int max(int a, int b)
//{
//	return a > b ? a : b;
//}
//
//int main()
//{
//	int v[] = { 0,2,4,5,6 };//物品价值的数组
//	int w[] = { 0,1,2,3,4 };//物品重量的数组
//
//	int f[N + 1][W + 1] = {NULL};//子问题数组:先设置为空
//
//	int i, j;
//	for ( i = 1; i <= N; i++)
//	{
//		for (j = 1; j <= W; j++)
//		{
//			if (j >= w[i])//选第i个物品的前提条件
//			{
//				//选第i个物品和不选第i个物品的较大值
//				f[i][j] = max(f[i-1][j], f[i - 1][j - w[i]] + v[i]);
//			}
//			else
//			{
//				f[i][j] = f[i - 1][j];//不选第i个物品--》等于从前i-1个物品中选，背包容量为j的最大价值
//			}
//		}
//	}
//	printf("%d\n", f[N][W]);
//
//
//	//打印出选择子问题的表
//	for (i = 0; i <= N; i++)
//	{
//		for (j = 0; j <= W; j++)
//		{
//			printf("%d   ", f[i][j]);
//		}printf("\n");
//	}
//
//	return 0;
//	system("pause");
//}