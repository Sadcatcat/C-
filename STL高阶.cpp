#include<iostream>
using namespace std;

////�º����뺯������
//class myPrint//������Ϊһ���������أ�����ʵ�ֺ������ܣ�
//{
//public:
//	void operator()(string text) { cout << text << endl; }
//
//};
//
//class myadd
//{
//public:
//	int operator()(int v1, int v2) { return v1 + v2; }//���ص����ſ��Ե�����ʹ��
//
//};
//
//void test01()
//{
//	myPrint print;
//	print("hello,world!");
//}
//
//void test02()
//{
//	myadd add;
//	cout << add(6, 5) << endl;
//}
//
//void doPrint(myPrint& print, string test)//���صĺ�������Ҳ������Ϊ��ͨ�����Ĳ���
//{
//	print(test);
//}
//
//void test03()
//{
//	myPrint print;
//	doPrint(print, "��ã�");
//}
//
//int main()
//{
//	//test01();
//	//test02();
//	test03();
//	system("pause");
//	return 0;
//}


////һԪν��
//#include<algorithm>
//#include<vector>
//
//class Mymethod
//{
//	public:
//	bool operator()(int v1) //��bool����������һ��������һԪν��
//	{
//		return v1 > 5;//���巽��
//	}
//};
//
//void test()
//{
//	vector<int>V;
//	for (int i = 1; i <= 10; i++)
//		V.push_back(i);
//
//	vector<int>::iterator it = find_if(V.begin(), V.end(), Mymethod());//�����㷨����ֱ���ҵ�һ������5����
//	cout << *it << endl;
//
//}
//
//int main()
//{
//	test();
//	system("pause");
//	return 0;
//}



////��Ԫν��
//#include<vector>
//#include<algorithm>
//
//class Mycomper
//{
//	public:
//		bool operator()(int v1, int v2)//��������������bool���������ؾ��Ƕ�Ԫν�ʺ���
//		{
//			return v1 > v2;
//		}
//};
//
//void PrintVector(const vector<int>& V)
//{
//	for (vector<int>::const_iterator it = V.begin(); it != V.end(); it++)
//	{
//		cout << *it << " ";
//	}cout << endl;
//}
//
//void test()
//{
//	vector<int>V;
//	for (int i = 1; i <= 5; i++)
//	{
//		V.push_back(i);
//	}
//
//	V.push_back(3);
//	V.push_back(4);
//	V.push_back(1);
//
//	sort(V.begin(), V.end());//sort����Ĭ������������
//
//	PrintVector(V);
//
//	sort(V.begin(), V.end(), Mycomper());//���ú�������~�º�����ʵ�ֽ�������
//
//	PrintVector(V);
//}
//
//int main()
//{
//	test();
//	system("pause");
//	return 0;
//
//}


////����º���
//#include<algorithm>
//#include<functional>
//
////negate  һԪ�º��� ȡ��
//void test1()
//{
//	negate<int>N;
//	cout << N(50) << endl;;
//}
//
////plus  ��Ԫ�º���  �ӷ����
//void test2()
//{
//	plus<int>P;//ֻ��ָ��һ�����ͣ���Ϊֻ��ͬ�������
//	cout << P(3, 5) << endl;
//
//	//��1�ӵ�100
//	int sum = 0;
//	for (int i = 1; i <= 100; i++)
//		sum = P(i, sum);
//	cout << sum << endl;;
//}
//
//int main()
//{
//	//test1();
//	test2();
//	system("pause");
//	return 0;
//}




//////��ϵ�º���
//#include<vector>
//#include<algorithm>
//#include<functional>
//
//void PrintVector(const vector<int>& V)
//{
//	for (vector<int>::const_iterator it = V.begin(); it != V.end(); it++)
//	{
//		cout << *it << " ";
//	}cout << endl;
//}
//
//void test()
//{
//	vector<int>V;
//
//	V.push_back(10);
//	V.push_back(30);
//	V.push_back(50);
//	V.push_back(40);
//	V.push_back(20);
//
//	PrintVector(V);
//
//	sort(V.begin(), V.end(), greater<int>());//ν����functional�ṩ�����÷º�������
//
//	PrintVector(V);
//
//	sort(V.begin(), V.end(), less<int>());//ν����functional�ṩ�����÷º�������
//
//	PrintVector(V);
//}
//
//int main()
//{
//	test();
//	system("pause");
//	return 0;
//}


////�߼��º���
//#include<vector>
//#include<algorithm>
//#include<functional>
//
//void Print_bool_vector(const vector<bool>& V)
//{
//	for (vector<bool>::const_iterator it = V.begin(); it != V.end(); it++)
//	{
//		cout << *it << " ";
//	}cout << endl;
//}
//
//void test()
//{
//	vector<bool>V1;
//	V1.push_back(true);
//	V1.push_back(true);
//	V1.push_back(false);
//	V1.push_back(true);
//	V1.push_back(false);
//
//	Print_bool_vector(V1);
//
//
//	vector<bool>V2;
//	V2.resize(V1.size());//������������ǰ��Ҫ��ָ����С
//
//	transform(V1.begin(), V1.end(), V2.begin(), logical_not<bool>());//ʹ��logical_not�º���ʵ���߼�ȡ��
//
//	Print_bool_vector(V2);
//
//
//
//}
//
//int main()
//{
//	test();
//	system("pause");
//	return 0;
//}




