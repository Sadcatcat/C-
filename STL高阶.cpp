#include<iostream>
using namespace std;

////仿函数与函数对象
//class myPrint//将类作为一个对象，重载（）以实现函数功能，
//{
//public:
//	void operator()(string text) { cout << text << endl; }
//
//};
//
//class myadd
//{
//public:
//	int operator()(int v1, int v2) { return v1 + v2; }//重载的括号可以当函数使用
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
//void doPrint(myPrint& print, string test)//重载的函数对象也可以作为普通函数的参数
//{
//	print(test);
//}
//
//void test03()
//{
//	myPrint print;
//	doPrint(print, "你好！");
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


////一元谓词
//#include<algorithm>
//#include<vector>
//
//class Mymethod
//{
//	public:
//	bool operator()(int v1) //在bool类型中设置一个参数，一元谓词
//	{
//		return v1 > 5;//定义方法
//	}
//};
//
//void test()
//{
//	vector<int>V;
//	for (int i = 1; i <= 10; i++)
//		V.push_back(i);
//
//	vector<int>::iterator it = find_if(V.begin(), V.end(), Mymethod());//利用算法函数直接找到一个大于5的数
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



////二元谓词
//#include<vector>
//#include<algorithm>
//
//class Mycomper
//{
//	public:
//		bool operator()(int v1, int v2)//接受两个参数的bool（）的重载就是二元谓词函数
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
//	sort(V.begin(), V.end());//sort函数默认是升序排列
//
//	PrintVector(V);
//
//	sort(V.begin(), V.end(), Mycomper());//设置函数对象~仿函数，实现降序排列
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


////运算仿函数
//#include<algorithm>
//#include<functional>
//
////negate  一元仿函数 取反
//void test1()
//{
//	negate<int>N;
//	cout << N(50) << endl;;
//}
//
////plus  二元仿函数  加法求和
//void test2()
//{
//	plus<int>P;//只能指定一个类型，因为只能同类型相加
//	cout << P(3, 5) << endl;
//
//	//从1加到100
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




//////关系仿函数
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
//	sort(V.begin(), V.end(), greater<int>());//谓词用functional提供的内置仿函数对象
//
//	PrintVector(V);
//
//	sort(V.begin(), V.end(), less<int>());//谓词用functional提供的内置仿函数对象
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


////逻辑仿函数
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
//	V2.resize(V1.size());//进行容器搬运前需要先指定大小
//
//	transform(V1.begin(), V1.end(), V2.begin(), logical_not<bool>());//使用logical_not仿函数实现逻辑取反
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




