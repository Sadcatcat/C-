#include<iostream>
using namespace std;

void show_num(int num[], int lenth)
{
	for (int i = 0; i < lenth; i++)
		cout << num[i] << "\t";
	cout << endl;
}


////ð������
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


////��������:Ԫ�ػ�������ʱ������Ч�����
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


////�鲢������,��
////�ڴκ����е�ǰ�����������������
//void merge(int arr[], int left, int mid, int right, int* temp)
//{
//	int i = left;//��ʼ��ǰ�������ʼΪ���������±�
//	int j = mid + 1;//��ʼ����������ʼΪ�������м��±�ĺ�һ��
//	int k = left;//��ʼ��temp�����±�Ϊ���������±�
//	//���ڻ��ֵ�ǰ���������飬����������ķ���temp������
//	while (i <= mid && j <= right) temp[k++] = arr[i] < arr[j] ? arr[i++] : arr[j++];
//	//���ڳ��Ȳ�һ�µ�ǰ�����鵥����ӵ�temp������
//	while (i <= mid) temp[k++] = arr[i++];
//	while (j <= right) temp[k++] = arr[j++];
//	//��temp����õ����ݸ���������
//	for (i = left; i <= right; i++)
//		arr[i] = temp[i];
//}
//
////�鲢���򣺷�
//void merge_sort(int arr[], int left, int right, int* temp)
//{
//	if (left >= right) return;
//	//��ֹ�����±�Խ���д����>>����λ��������˼���ڶ���������£������ƶ�һλ��������ı�ֱ�ӳ�2��
//	int mid = left + ((right - left) >> 1);
//	merge_sort(arr, left, mid, temp);//�����黮��Ϊǰ���
//	merge_sort(arr, mid + 1, right, temp);//�����黮��Ϊ����
//	merge(arr, left, mid, right, temp);//��ǰ��������ͺ�����������бȽ�����
//}
//
////�鲢���򣺴���temp�����������
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