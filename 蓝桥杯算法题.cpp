//#include <iostream>
//#include<vector>
//using namespace std;
//int main()
//{
//    // ���ڴ��������Ĵ���
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
//			// ����Ѿ���������Լ��Ϊ1������Ҫ�ټ�������
//			return 1;
//		}
//	}
//	return result;
//}
//
//int main()
//{
//	// ���ڴ��������Ĵ���
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
//	//�������Ϊ0
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
//    // ���ڴ��������Ĵ���
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
//    // ���ڴ��������Ĵ���
//    return 0;
//}

//#include <iostream>
//using namespace std;
//int main()
//{
//    // ���ڴ��������Ĵ���
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
//		cout << "���ӽ�" << endl;
//	}
//};
//
//class grandson :public father {
//public:
//	void speek()
//	{
//		cout << "���ӽ�" << endl;
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




////���ҵ�һ������ 2022 ����С���������ת����ʮ������֮��
////���е���λ������ǰ�� 0����Ϊ��ĸ��A �� F����
////�뽫�������ʮ������ʽ��Ϊ���ύ��
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



//////�� Excel �У��е�����ʹ��Ӣ����ĸ����ϡ�
////// ǰ 26 ����һ����ĸ������Ϊ A �� Z�������� 26 * 26 ��ʹ��������ĸ����ϣ�
////// ����Ϊ AA �� ZZ��
//////���ʵ� 2022 �е�������ʲô��
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


////����һ�����ڣ����ǿ��Լ������ݵĸ�����λ�ϵ�����֮�ͣ�
////Ҳ���Էֱ�����º��յĸ�λ����֮�͡�
////���ʴ� 1900 �� 1 �� 1 ���� 9999 �� 12 �� 31 �գ�
////�ܹ��ж����죬��ݵ���λ����֮�͵����µ���λ����֮�ͼ��յ���λ����֮�͡�
////���磬2022��11��13������Ҫ����Ϊ 2 + 0 + 2 + 2 = (1 + 1) + (1 + 3) ��
////���ύ�������������ڵ���������
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


//С���� 30 �������ֱ�Ϊ��99, 22, 51, 63, 72, 61, 20, 88, 40, 21, 63, 30, 11, 18, 99, 12, 93, 16, 7, 53, 64, 9, 28, 84, 34, 96, 52, 82, 51, 77 ��
//С����������Щ����ȡ��������Ų�ͬ���������� 30 * 29 / 2 = 435 ��ȡ����
//������ 435 ��ȡ���У��ж�����ȡ��ȡ�����������ĳ˻����ڵ��� 2022 ��

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