////N�ʺ�����
////����һ��N*N�����̣�Ҫ�������ϰڷ�N���ʺ�
////��������N���ʺ������������ʺ󶼲�����ͬһ�У�ͬһ�У�ͬһб����
//
//#include<stdio.h>
//#include<stdlib.h>
//#include<stdbool.h>
//
//#define N 4
//
//int Q[N + 1]; //�����洢�ʺ�λ�õ�����
//
//int isLegal(int j) // �жϵ�ǰ�ʺ�ͬһ�к�ͬһб��λ���Ƿ�Ϸ�
//{
//	for (int i = 1; i <j; i++)
//	{
//		if (Q[i] == Q[j] || abs(i - j) == abs(Q[i] - Q[j]))
//			return 0;
//	}
//	return 1;
//
//}
//
//void Queen()
//{
//	
//	int j = 1;
//	int answer = 0;
//	
//	for (int i = 1; i <= N; i++)
//	{
//		Q[i] = 0;//��ʼ��
//	}
//
//	while (j >= 1)
//	{
//		Q[j]++; // �����j���ʺ���λ�ú���
//		
//		while (Q[j] <= N && !isLegal(j))//����j��λ���Ƿ�Ϸ������Ϸ��ͺ��ƶ�
//		{
//			Q[j]++;
//		}
//
//		if (Q[j] <= N) // ˵���ҵ��˺Ϸ���λ��
//		{
//			if (j == N) //�ҵ���һ���
//			{
//				answer++;
//				printf("����%d: ", answer);
//				for (int i = 1; i <= N; i++)
//				{
//					printf("%d ", Q[i]);
//				}
//				printf("\n");
//			}
//			else
//				j = j + 1;
//		}
//		else//��ʾ��j���ʺ��Ҳ����Ϸ�λ�ã���Ҫ���ϻ���
//		{
//			//���ݵ���ʼֵ
//			Q[j] = 0;
//			j = j - 1;
//		}
//	}
//
//}
//
//int main()
//{
//	Queen();
//	system("pause");
//}