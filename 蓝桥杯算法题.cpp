//#include <iostream>
//#include<vector>
//using namespace std;
//int main()
//{
//    // 请在此输入您的代码
//    int n;
//    cin >> n;
//    int sum = 0;
//    vector<int>V(200000);
//
//    for (int i = 0; i < n; i++)
//        cin >> V[i];
//
//    vector<int>S;
//    for (int i = 0; i < n; i++)
//    {
//        for (int j = i + 1; j < n; j++)
//            S.push_back(V[i] * V[j]);
//    }
//
//    for (vector<int>::iterator it = S.begin(); it != S.end(); it++)
//        sum += *it;
//
//    cout << sum << endl;
//    return 0;
//}

//#include <iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//int gcd(int a, int b) {
//	while (b != 0) {
//		int temp = b;
//		b = a % b;
//		a = temp;
//	}
//	return a;
//}
//
//int vectorGCD(const std::vector<int>& vec) {
//	if (vec.empty()) {
//		return 0;
//	}
//	int result = vec[0];
//	for (size_t i = 1; i < vec.size(); i++) {
//		result = gcd(result, vec[i]);
//		if (result == 1) {
//			// 如果已经计算出最大公约数为1，则不需要再继续计算
//			return 1;
//		}
//	}
//	return result;
//}
//
//int main()
//{
//	// 请在此输入您的代码
//	vector<int>V;
//	int n;
//	cin >> n;
//	V.resize(n);
//	for (int i = 0; i < n; i++)
//		cin >> V[i];
//	
//	sort(V.begin(), V.end());
//
//	int begin_num = V[0];
//	int end_num = V[n-1];
//	//如果公差为0
//	if (end_num == begin_num)
//		cout << n << endl;
//	else 
//	{
//		int d = vectorGCD(V);
//		cout << ((end_num - begin_num) / d) + 1 << endl;
//	}
//	return 0;
//}

//#include<iostream>
//#include<iomanip>
//using namespace std;
//int Fb(int n)
//{
//	if (n == 1 || n == 0)
//		return 1;
//	else
//		return Fb(n - 1) + Fb(n - 2);
//}
//
//int main()
//{
//	int n;
//	cin >> n;
//	cout << fixed << setprecision(8) << Fb(n) * 1.0 / Fb(n + 1) << endl;
//	system("pause");
//	return 0;
//}


//#include<iostream>
//using namespace std;
//int Fb(int n)
//{
//	if (n == 1 || n == 0)
//		return 1;
//	else
//		return Fb(n - 1) + Fb(n - 2);
//}
//
//int main()
//{
//	int n;
//	cin >> n;
//	cout << Fb(n) << endl;
//	system("pause");
//	return 0;
//}


//#include <iostream>
//using namespace std;
//int main()
//{
//    // 请在此输入您的代码
//    int year, day;
//    for (year = 2012-100; year <= 2012; year++)
//    {
//        for (day = 1; day <= 30; day++)
//        {
//            int m = (year * 100 + 6) * 100 + day;
//            if (m%2012 == 0&&m%3==0&&m%12==0)
//                cout << year << 06 << day << endl;
//        }
//    }
//    return 0;
//}



//#include <iostream>
//using namespace std;
//int main()
//{
//    int n;
//    cin >> n;
//
//    for (int i = 1; i <= n; i++)
//    {
//        cout << max(i - 1, n - i) * 2 << endl;
//    }
//
//    // 请在此输入您的代码
//    return 0;
//}

//#include <iostream>
//using namespace std;
//int main()
//{
//    // 请在此输入您的代码
//    int month, day, count = 0,days=31;
//    for (month = 1; month <= 12; month++)
//        for (day = 1; day <= days; day++)
//        {
//            if (month == 4 || month == 6 || month == 9 || month == 11) days = 30;
//            else if (month == 2) days = 27;
//            else days = 31;
//            int sum = month * 100 + day;
//            int a, b, c, d;
//            a = sum / 1000;
//            b = sum / 100 % 10;
//            c = sum / 10 % 10;
//            d = sum % 10;
//            if ((a < b && b < c)&&(b-a==1&&c-b==1) || (b < c && c < d) && (c - b == 1 && d - c == 1))
//            {
//                count++;
//            }
//        }
//    cout << count << endl;
//    return 0;
//}


//#include<iostream>
//using namespace std;
//const int N = 100000;
//int ff[N];
//
//int f(int n)
//{
//    int sum = 1;
//    if (n < N && ff[n] != 0) return ff[n];
//    for (int i = 2; i <= sqrt(n); i++)
//    {
//        if (n % i == 0)
//        {
//            if (i * i == n)
//                sum += f(i);
//            else
//                sum += f(i) + f(n / i);
//        }
//    }
//    if (n < N) ff[n] = sum;
//    return sum;
//}
//int main()
//{
//    int n;
//    cin >> n;
//    memset(ff, 0, sizeof(ff));
//    printf("%d", f(n));
//    return 0;
//}


//#include <iostream>
//#include <vector>
//
//using namespace std;
//int main()
//{
//    int n, m;
//    cin >> n >> m;
//
//    vector<int> dp(m + 1, 0);
//    dp[0] = 1;
//    for (int i = 1; i <= n; i++) 
//    {
//        for (int j = m; j >= i; j--)
//        {
//            dp[j] += dp[j - i];
//        }
//    }
//    cout << dp[m] << endl;
//    return 0;
//}


//#include<iostream>
//using namespace std;
//
//class father
//{
//public:
//	virtual void speek() = 0;
//};
//
//class son:public father {
//public:
//	void speek()
//	{
//		cout << "儿子叫" << endl;
//	}
//};
//
//class grandson :public father {
//public:
//	void speek()
//	{
//		cout << "孙子叫" << endl;
//	}
//};
//
//
//int main()
//{
//	father *f = new grandson();
//	f->speek();
//	f = new son();
//	f->speek();
//
//	system("pause");
//	return 0;
//}




////请找到一个大于 2022 的最小数，这个数转换成十六进制之后，
////所有的数位（不含前导 0）都为字母（A 到 F）。
////请将这个数的十进制形式作为答案提交。
//#include<iostream>
//using namespace std;
//
//
//
//bool is_num(int n)
//{
//	bool c = true;
//	while (n != 0)
//	{
//		if (n % 16 < 10) c = false;
//		n /= 16;
//	}
//	return c;
//}
//
//
//int main()
//{
//	for (int i = 2022;;i++)
//	{
//		if (is_num(i))
//		{
//			cout << i << endl;
//			break;
//		}
//	}
//	
//	system("pause");
//	return 0;
//	
//}



//////在 Excel 中，列的名称使用英文字母的组合。
////// 前 26 列用一个字母，依次为 A 到 Z，接下来 26 * 26 列使用两个字母的组合，
////// 依次为 AA 到 ZZ。
//////请问第 2022 列的名称是什么？
//#include<iostream>
//#include<string>
//using namespace std;
//
//
//int main()
//{
//	
//	string str = "AAA";
//	int count = 702;
//	
//	for (int j = 0; j < 26; j++)
//	{
//		for (int k = 0; k < 26; k++)
//		{
//			for (int m = 0; m < 26; m++)
//			{
//				str[2] += 1;
//				count += 1;
//				if (count == 2022) { cout << str << endl; return 0;}
//				if (str[2] == 'Z') str[2] = 'A';
//
//			}
//			str[1] += 1;
//			if (str[1] == 'Z') str[1] = 'A';
//		}
//		str[0] += 1;
//	}
//		
//
//	system("pause");
//	
//}
//


////对于一个日期，我们可以计算出年份的各个数位上的数字之和，
////也可以分别计算月和日的各位数字之和。
////请问从 1900 年 1 月 1 日至 9999 年 12 月 31 日，
////总共有多少天，年份的数位数字之和等于月的数位数字之和加日的数位数字之和。
////例如，2022年11月13日满足要求，因为 2 + 0 + 2 + 2 = (1 + 1) + (1 + 3) 。
////请提交满足条件的日期的总数量。
//
//#include<iostream>
//using namespace std;
//
//bool is_day(int y, int m, int d)
//{
//	if (m == 4 || m == 6 || m == 9 || m == 11)
//	{
//		if (d <= 30)
//			return true;
//		else
//			return false;
//	}
//	else if (m == 2)
//	{
//		if (y % 4 == 0 && y % 100 != 0 || y % 400 == 0)
//		{
//			if (d <= 29)
//				return true;
//			else
//				return false;
//		}
//		else
//		{
//			if(d<=28)
//				return true;
//			else
//				return false;
//		}
//	}
//}
//
//bool sum_day(int y, int m, int d)
//{
//	int s_y = 0;
//	int s_m_d = 0;
//	while (y != 0)
//	{
//		s_y += y % 10;
//		y /= 10;
//	}
//
//	while (m != 0)
//	{
//		s_m_d += m % 10;
//		m /= 10;
//	}
//
//	while (d != 0)
//	{
//		s_m_d += d % 10;
//		d /= 10;
//	}
//	if (s_y == s_m_d)
//		return true;
//	else
//		return false;
//
//}
//
//
//int main()
//{
//	int count = 0;
//	for (int y = 1900; y <= 9999; y++)
//	{
//		for (int m = 1; m <= 12; m++)
//		{
//			for (int d = 1; d <= 31; d++)
//			{
//				if (is_day(y, m, d))
//				{
//					if (sum_day(y, m, d))
//					{
//						count++;
//					}
//				}
//			}
//		}
//	}
//	cout << count << endl;
//	system("pause");
//	return 0;
//}


//小蓝有 30 个数，分别为：99, 22, 51, 63, 72, 61, 20, 88, 40, 21, 63, 30, 11, 18, 99, 12, 93, 16, 7, 53, 64, 9, 28, 84, 34, 96, 52, 82, 51, 77 。
//小蓝可以在这些数中取出两个序号不同的数，共有 30 * 29 / 2 = 435 种取法。
//请问这 435 种取法中，有多少种取法取出的两个数的乘积大于等于 2022 。

//#include<iostream>
//using namespace std;
//
//int main()
//{
//	int num[] = { 99, 22, 51, 63, 72, 61, 20, 88, 40, 21, 63, 30, 11, 18, 99, 12, 93, 16, 7, 53, 64, 9, 28, 84, 34, 96, 52, 82, 51, 77 };
//	int count = 0;
//	for (int i = 0; i < size(num); i++)
//	{
//		for (int j = i + 1; j < size(num); j++)
//		{
//			if (num[i] * num[j] >= 2022)
//				count++;
//		}
//	}
//	cout << count << endl;
//}