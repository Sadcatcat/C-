//#include<iostream>
//using namespace std;
////冒泡排序第一轮结果:
//void MP_sort(int num[], int S)
//{
//	int i, j,temp;
//	
//	for (i = 0; i < S; i++)
//	{
//		
//		for (j = 0; j < S-i-1; j++)
//		{
//			if (num[j] > num[j+1])
//			{
//				temp = num[j]; num[j] = num[j+1]; num[j+1] = temp;
//			}
//		}
//		break;
//	}
//
//
//	cout << "冒泡排序第一轮结果:" << endl;
//	for (i = 0; i < S; i++)
//	{
//		cout << num[i] << '\t';
//	}
//	cout << endl;
//}
//
//
//
////快速排序第一轮结果:
//void QS_sort(int a[], int start, int end)
//{
//	int i = start, j = end;//设定待排序数列的起止点
//	int povit;        //中轴
//	if (start < end)
//	{
//		povit = a[start];//设定中轴为定待排序数列的起点
//		while (i != j)
//		{
//			while (j > i && a[j] >= povit)//从数列尾部开始，和中轴比较
//				j--;
//			a[i] = a[j];//把较大数放到数列前段
//			while (i < j && a[i] <= povit)//转到数列头部，和中轴比较
//				i++;
//			a[j] = a[i];//把较小数放到数列后段
//		}
//		a[i] = povit;//确定中轴位置
//
//
//		//QS_sort(a, start, i - 1);//对左段数列继续快速排序
//		//QS_sort(a, i + 1, end);//对右段数列继续快速排序
//		
//	}
//}
//
//
////希尔排序第一轮结果:
//void XR_sort(int num[],int n)
//{
//int i, j, inc, key;
//
//for (inc = n /3; inc > 0; inc /= 2)//缩小增量
//{
//	
//	for (i = inc; i < n; i++)
//	{
//	
//		key = num[i];
//		for (j = i; j >= inc && key < num[j - inc]; j -= inc)
//		{
//			num[j] = num[j - inc];//在数据后移后，进行j=j-inc，使得j所在位置空出
//			
//		}
//		
//		num[j] = key;//插入
//		
//	}
//	
//}
//
//cout << "希尔排序第一轮结果:" << endl;
//for (i = 0; i < n; i++)
//{
//	cout << num[i] << '\t';
//}
//cout << endl;
//
//}
//
//
//int main()
//{
//	//int num[10] = { 45,50,43,56,88,36,60,120,32,40 };
//	int num[10] = { 15,20,13,26,58,6,30,90,2,10 };
//	//int num[10] = { 26,15,39,20,16,98,12,75,30,8 };
//	MP_sort(num, 10);
//	QS_sort(num, 0, 9);
// cout << "快速排序第一轮结果:" << endl;
//		for (int i = 0; i < 10; i++)
//		{
//			cout << num[i] << '\t';
//		}
//		cout << endl;
//	XR_sort(num, 10);
//
//}