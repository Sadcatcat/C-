//#include<iostream>
//using namespace std;
////ð�������һ�ֽ��:
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
//	cout << "ð�������һ�ֽ��:" << endl;
//	for (i = 0; i < S; i++)
//	{
//		cout << num[i] << '\t';
//	}
//	cout << endl;
//}
//
//
//
////���������һ�ֽ��:
//void QS_sort(int a[], int start, int end)
//{
//	int i = start, j = end;//�趨���������е���ֹ��
//	int povit;        //����
//	if (start < end)
//	{
//		povit = a[start];//�趨����Ϊ�����������е����
//		while (i != j)
//		{
//			while (j > i && a[j] >= povit)//������β����ʼ��������Ƚ�
//				j--;
//			a[i] = a[j];//�ѽϴ����ŵ�����ǰ��
//			while (i < j && a[i] <= povit)//ת������ͷ����������Ƚ�
//				i++;
//			a[j] = a[i];//�ѽ�С���ŵ����к��
//		}
//		a[i] = povit;//ȷ������λ��
//
//
//		//QS_sort(a, start, i - 1);//��������м�����������
//		//QS_sort(a, i + 1, end);//���Ҷ����м�����������
//		
//	}
//}
//
//
////ϣ�������һ�ֽ��:
//void XR_sort(int num[],int n)
//{
//int i, j, inc, key;
//
//for (inc = n /3; inc > 0; inc /= 2)//��С����
//{
//	
//	for (i = inc; i < n; i++)
//	{
//	
//		key = num[i];
//		for (j = i; j >= inc && key < num[j - inc]; j -= inc)
//		{
//			num[j] = num[j - inc];//�����ݺ��ƺ󣬽���j=j-inc��ʹ��j����λ�ÿճ�
//			
//		}
//		
//		num[j] = key;//����
//		
//	}
//	
//}
//
//cout << "ϣ�������һ�ֽ��:" << endl;
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
// cout << "���������һ�ֽ��:" << endl;
//		for (int i = 0; i < 10; i++)
//		{
//			cout << num[i] << '\t';
//		}
//		cout << endl;
//	XR_sort(num, 10);
//
//}