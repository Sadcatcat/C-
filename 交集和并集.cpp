//#include<iostream>
//using namespace std;
//
////交集
//void join(int a[], int m, int b[], int n)
//{
//	int c[1000];
//	int i, j, k = 0,d;
//	for(i=0;i<m;i++)
//		for (j = 0; j < n; j++)
//		{
//			if (a[i] == b[j])
//			{
//				for (d = 0;d < k; d++)
//					if (a[i] == c[d])
//						break;
//				if (d == k)
//				{
//					c[k] = a[i];
//					k++;
//					break;
//				}
//			}
//			
//		}
//	for (i = 0; i < k; i++)
//		cout << c[i] << " ";
//	cout << endl;
//
//}
//
//
////并集
//void Ument(int a[], int m, int b[], int n)
//{
//	int c[1000];
//	int i, j, k;
//	for (i = 0; i < m; i++)
//	{
//		c[i] = a[i];
//	}
//	k = i;
//
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < m; j++)
//			if (b[i] == a[j])
//				break;
//	
//	if (j == m)
//	{
//		c[k] = b[i];
//		k++;
//	}
//
//	}
//
//	for (i = 0; i < k; i++)
//	{
//		cout << c[i] << " ";
//	}cout << endl;
//
//}
//
//int main()
//{
//
//	int a[4] = { 4,3,5,9 };
//	int b[4] = { 1,2,3,5, };
//
//	join(a, 4, b, 4);
//	Ument(a, 4, b, 4);
//	system("pause");
//	return 0;
//
//}