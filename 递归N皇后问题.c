////N�ʺ�����
////����һ��N*N�����̣�Ҫ�������ϰڷ�N���ʺ�
////��������N���ʺ������������ʺ󶼲�����ͬһ�У�ͬһ�У�ͬһб����
//
//#include<stdio.h>
//#include<stdlib.h>
//#include<stdbool.h>
//
//#define N 4
//int answer = 0;
//int Q[N + 1]; //�����洢�ʺ�λ�õ�����
//
//int isLegal(int j) // �жϵ�ǰ�ʺ�ͬһ�к�ͬһб��λ���Ƿ�Ϸ�
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
//		Q[j] = i;//��ʼ��
//	
//
//	if (isLegal(j))//���ݷ�λ�úϷ�ʱ
//	{
//		if (j == N) //�ҵ���һ���
//		{
//			answer++;
//			printf("����%d: ", answer);
//			for (int i = 1; i <= N; i++)
//			{
//				printf("%d ", Q[i]);
//			}
//			printf("\n");
//		}
//		else
//			Queen(j + 1);//�ݹ�ڷ���һ���ʺ��λ��
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