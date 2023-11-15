#include<iostream>
using namespace std;

void show_num(int num[], int lenth)
{
	for (int i = 0; i < lenth; i++)
		cout << num[i] << "\t";
	cout << endl;
}


////冒泡排序
//void bubSort(int* num, int lenth)
//{
//	for (int i = 0; i < lenth; i++)
//	{
//		for (int j = i+1; j < lenth-1; j++)
//		{
//			if (num[i] > num[j])
//			{
//				int temp = num[i];
//				num[i] = num[j];
//				num[j] = temp;
//			}
//		}
//	}
//}


////插入排序:元素基本有序时，排序效率最高
//void insertSort(int *num, int lenth)
//{
//	for(int i=1;i<lenth;i++)
//		for (int j = i; j >= 1 && num[j] < num[j - 1]; j--)
//		{
//			int temp = num[j];
//			num[j] = num[j - 1];
//			num[j - 1] = temp;
//		}
//}
//


////归并排序：治,合
////在次函数中的前后子数组总是有序的
//void merge(int arr[], int left, int mid, int right, int* temp)
//{
//	int i = left;//初始化前数组的起始为子数组左下标
//	int j = mid + 1;//初始化后数组起始为子数组中间下标的后一个
//	int k = left;//初始化temp数组下标为子数组左下标
//	//对于划分的前后两个数组，先依次有序的放入temp数组中
//	while (i <= mid && j <= right) temp[k++] = arr[i] < arr[j] ? arr[i++] : arr[j++];
//	//对于长度不一致的前后数组单独添加到temp数组中
//	while (i <= mid) temp[k++] = arr[i++];
//	while (j <= right) temp[k++] = arr[j++];
//	//将temp整理好的数据覆盖子数组
//	for (i = left; i <= right; i++)
//		arr[i] = temp[i];
//}
//
////归并排序：分
//void merge_sort(int arr[], int left, int right, int* temp)
//{
//	if (left >= right) return;
//	//防止数组下标越界的写法，>>是移位操作，意思是在二进制情况下，向右移动一位，这样算的比直接除2快
//	int mid = left + ((right - left) >> 1);
//	merge_sort(arr, left, mid, temp);//将数组划分为前半段
//	merge_sort(arr, mid + 1, right, temp);//将数组划分为后半段
//	merge(arr, left, mid, right, temp);//将前有序数组和后有序数组进行比较排序
//}
//
////归并排序：创建temp数组进行排序
//void mergeSort(int arr[], int length)
//{
//	int* temp = new int[length];
//	merge_sort(arr, 0, length - 1, temp);
//	delete[] temp;
//}
//
//int main(void)
//{
//	int num[6] = { 5,6,9,8,7,10 };
//	//insertSort(num, 6);
//	//bubSort(num, 6);
//	//mergeSort(num, 6);
//	show_num(num, 6);
//	system("pause");
//	return 0;
//}