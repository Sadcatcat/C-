//#include<stdio.h>
//#include<stdlib.h>
//
////M���˷�N����,��һ����
//void YSF(int m,int n)
//{
//	int count=0;//��̭������
//	int end_count = 0;//����������
//	int* index = (int*)malloc(m * sizeof(int)+1);//����ÿ���˵ı�ǣ������Ƿ���̭
//	
//
//	for (int i = 1; i <= m; i++)//��ʼ��
//		*(index+i) = 0;//0Ϊ����̭״̬��1Ϊ��̭״̬
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
//		if (*(index+i) == 0) printf("�������������:%d��\n", i);
//	}
//
//}
//
//int main()
//{
//	YSF(10,3);//M���˷�N����
//	system("pause");
//	return 0;
//}