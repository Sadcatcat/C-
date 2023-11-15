//#include<iostream>
//#include<cmath>
//using namespace std;
//
////输入两个正整数m和n，分别计算m和n的最大公约数和最小公倍数并输出结果。（用至少两种方式计算）
////方法一
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
//	cout << "最大公约数:" << n << endl;
//	cout << "最小公倍数:" << C / n<< endl;
//}
//
////方法二
//void two_two(int m, int n)
//{
//	if (m < n) { int i = n; n = m; m = i; }
//	for (int i = n; i ; i--)
//	{
//		if (m % i == 0 && n % i == 0)
//		{
//			cout << "最大公约数是:" << i << endl;
//			cout << "最小公倍数:" << m*n / i << endl;
//			return;
//		}
//	}
//}
//
//
////给定一个正整数，编写程序计算有多少对质数的和等于输入的这个正整数，并输出结果。输入值小于1000。
////如：输入为10，程序应该输出结果为2。（共有两对质数的和为10，分别为（5, 5），（3, 7））
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
////通过编程计算输出所有的一位自幂数至七位自幂数。
////水仙花数只是自幂数的一种，自幂数是指一个 n 位数，它的每个位上的数字的 n 次幂之和等于它本身
//void seven() 
//{
//	int start = 10;
//	int end = 10;
//	for (int i = 1; i <= 7; i++)
//	{	
//		cout << i << "位自幂数:";
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
//  // 请在此输入您的代码
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
//    // 请在此输入您的代码
//    string str = "WHERETHEREISAWILLTHEREISAWAY";
//    multimap<char,int>M;
//    for (int i = 0; i < str.size(); i++)
//        M.insert(pair<char, int>(str[i], 0));
//    for (multimap<char, int>::iterator it = M.begin(); it != M.end(); it++)
//        cout << (*it).first;
//    return 0;
//}


