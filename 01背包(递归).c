//#include<stdio.h>
//#include<stdlib.h>
//
//#define N 6
//#define maxT 1000
//
//int c[N][maxT] = { NULL };
//int Calculate_Max_Value(int v[N], int w[N], int i, int j);
//int Memoized_Knapsack(int v[N], int w[N], int T)
//{
//	int i, j;
//	for (i = 0; i < N; i++)
//	{
//		for (j = 0; j <= T; j++)
//			c[i][j] = -1;
//	}
//	return Calculate_Max_Value(v, w, N - 1, T);
//}
//
//int Calculate_Max_Value(int v[N], int w[N], int i, int j)
//{
//	int temp = 0;
//	if (c[i][j] != -1)
//		return c[i][j];
//	if (i == 0 || j == 0) {
//		c[i][j] = 0;
//	}
//	else
//	{
//		c[i][j] = Calculate_Max_Value(v, w, i - 1, j);
//		if (j >=w[i])
//		{
//			temp = Calculate_Max_Value(v, w, i - 1, j - w[i]) + v[i];
//			if (c[i][j] < temp)
//				c[i][j] = temp;
//		}
//	}
//	return c[i][j];
//}
//
//
//int main()
//{
//	int v[] = { 0,1,6,18,22,28 };
//	int w[] = { 0,1,2,5,6,7 };
//	int T = 11;
//	int response = Memoized_Knapsack(v, w, T);
//	printf("%d\n", response);
//	system("pause");
//	return 0;
//}