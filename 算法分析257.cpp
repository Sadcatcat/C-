//#include<iostream>
//#include<cmath>
//using namespace std;
//
////��������������m��n���ֱ����m��n�����Լ������С���������������������������ַ�ʽ���㣩
////����һ
//void two_one(int m,int n)
//{
//	if (m < n) { int i = n; n = m; m = i; }
//	int C = m * n;
//	int X = m % n;
//	while (X != 0)
//	{
//		m = n;
//		n = X;
//		X = m % n;
//	}
//	cout << "���Լ��:" << n << endl;
//	cout << "��С������:" << C / n<< endl;
//}
//
////������
//void two_two(int m, int n)
//{
//	if (m < n) { int i = n; n = m; m = i; }
//	for (int i = n; i ; i--)
//	{
//		if (m % i == 0 && n % i == 0)
//		{
//			cout << "���Լ����:" << i << endl;
//			cout << "��С������:" << m*n / i << endl;
//			return;
//		}
//	}
//}
//
//
////����һ������������д��������ж��ٶ������ĺ͵���������������������������������ֵС��1000��
////�磺����Ϊ10������Ӧ��������Ϊ2�����������������ĺ�Ϊ10���ֱ�Ϊ��5, 5������3, 7����
//bool is_num(int n)
//{
//	int i;
//	for (i = 2; i < n; i++)
//	{
//		if (n % i == 0) break;
//	}
//	if (i == n)
//		return true;
//	else
//		return false;
//}
//
//void five(int n)
//{
//	for (int i = 1; i <= n / 2; i++)
//	{
//		if (is_num(i) * is_num(n - i))
//			cout << "(" << i << "," << n - i << ")" << endl;
//	}
//}
//
////ͨ����̼���������е�һλ����������λ��������
////ˮ�ɻ���ֻ����������һ�֣���������ָһ�� n λ��������ÿ��λ�ϵ����ֵ� n ����֮�͵���������
//void seven() 
//{
//	int start = 10;
//	int end = 10;
//	for (int i = 1; i <= 7; i++)
//	{	
//		cout << i << "λ������:";
//		for (int j = pow(start, i - 1)-1; j < pow(end, i); j++)
//		{
//			int n = j;
//			int Sum = 0;
//			while (n != 0) 
//			{
//				Sum+=pow(n % 10,i);
//				n /= 10;
//			}
//			if (Sum == j)
//				cout << j << '\t';
//		}
//		cout << endl;
//	}
//    
//}
//
//int main() {
//	/*int m, n;
//	cin >> m >> n;
//	two_two(m, n);*/
//
//	/*five(30);*/
//
//	seven();
//	system("pause");
//	return 0;
//}


//#include <iostream>
//using namespace std;
//int main()
//{
//  // ���ڴ��������Ĵ���
//  int n=2019;
//  string S;
//  S.resize(10);
//  for(int i=0;n!=0;i++)
//  {
//    S[i]=64+n%26;
//    n = n/26;
//  }
// 
//  for(int i=S.size();i>=0;i--)
//  cout<<S[i];
//
//  return 0;
//}



//#include <iostream>
//#include<map>
//using namespace std;
//int main()
//{
//    // ���ڴ��������Ĵ���
//    string str = "WHERETHEREISAWILLTHEREISAWAY";
//    multimap<char,int>M;
//    for (int i = 0; i < str.size(); i++)
//        M.insert(pair<char, int>(str[i], 0));
//    for (multimap<char, int>::iterator it = M.begin(); it != M.end(); it++)
//        cout << (*it).first;
//    return 0;
//}


