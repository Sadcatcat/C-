#include<iostream>
#include<string>
#include"Myarray.hpp"
using namespace std;
//#include"person.h"//由于类模板在调用时才会实例化函数方法，如果是常规一样包含.h头文件会报错(此时函数方法并无实现，只有定义)

////解决方法一：直接包含方法的.cpp文件
//#include"person.cpp"

////解决方法二：包含.hpp文件（此文件把.h和.cpp的代码写在了一起）
//#include"person.hpp"



//函数模板使用注意事项
//template<class T>
//void fun()
//{
//	cout << "fun 函数调用" << endl;
//}
//
//void test()
//{
//	fun<int>();//使用模板函数不管这个函数中有无使用变量，都至少要指定一个类型
//}
//
//int main()
//{
//	test();
//	system("pause");
//	return 0;
//
//}


////函数模板：对数组排序
//template<class T>
//void Change_num(T& a, T& b)
//{
//	T temp = a;
//	a = b;
//	b = temp;
//}
//
//
//template<class T>
//void Down_order(T num[], int range)//选择排序，从大到小
//{
//	for (int i = 0;i < range;i++)
//	{
//		int max = i;
//		for (int j = i + 1; j < range; j++)
//		{
//			if (num[max] < num[j])
//				max = j;
//		}
//		if (max != i)
//		{
//			Change_num(num[i], num[max]);
//		}
//	
//	}
//}
//
//template<class T>
//void Print_num(T num[], int range)
//{
//	for (int i = 0; i < range; i++)
//		cout << num[i] << '\t';
//	cout << endl;
//}
//
//void test01()
//{
//	char str[] = "afedbc";
//	int lenth = sizeof(str) / sizeof(char);
//	Down_order(str, lenth);
//	Print_num(str, lenth);
//}
//
//void test02()
//{
//	int num[] = { 89,58,74,62,15,2,54,8,100 };
//	int lenth = sizeof(num) / sizeof(int);
//	Down_order(num, lenth);
//	Print_num(num, lenth);
//}
//
//int main()
//{
//	test02();
//	system("pause");
//	return 0;
//}


////模板函数与普通函数的区别
//
////void myPrint(int a,int b)//普通函数允许隐式类型转换
////{
////	cout << a + b << endl;
////}
//
//
//template<class T>
//void myPrint(T a, T b)//模板函数不允许隐式类型转换
//{
//	cout << a + b << endl;
//}
//
//void test()
//{
//	//myPrint(1, 'c');//在注释掉普通函数后，用这个会出错
//	myPrint<int>(1, 'c');//强制指定模板类型，编译器会自动转换
//}
//
//int main()
//{
//	test();
//	system("pause");
//	return 0;
//}


////普通函数和模板函数的调用规则
//
//void myPrint(int a,int b)
//{
//	cout << "普通函数调用" << endl;
//}
//
//template<class T>
//void myPrint(T a, T b)
//{
//	cout << "模板函数调用" << endl;
//}
//
//template<class T>
//void myPrint(T a, T b,T c)
//{
//	cout << "重载模板函数调用" << endl;
//}
//
//void test()
//{
//	
//	myPrint<>(1, 2);//空模板强制调用模板函数
//	myPrint(1, 2, 3);//函数模板也可以发生重载
//
//	char c1 = 'a';
//	char c2 = 'b';
//	myPrint(c1, c2);//优先选择不需要类型转换的函数，普通函数需要让char转换int
//}
//
//int main()
//{
//	test();
//	system("pause");
//	return 0;
//}


//函数模板的局限性:对于自定义有类型，建议写给模板的重载函数

//class person
//{
//public:
//	int age;
//	string name;
//};
//
//template<class T>
//bool isSame(T& a, T& b)
//{
//	if (a == b)
//		return true;
//	else
//		return false;
//}
//
//template<> bool isSame(person& a, person& b)//手动指定类的类型，这样使用模板可以实现
//{
//	if (a.age == b.age &&a.name == b.name)
//		return true;
//	else
//		return false;
//}
//
//void test()
//{
//	person p1 = { 18,"tm" };
//	person p2 = { 18,"tom" };
//	bool is = isSame(p1, p2);//模板无法直接识别自定义函数
//	if (is)
//		cout << "p1和p2相同" << endl;
//	else
//		cout<< "p1和p2不相同" << endl;
//
//}
//
//int main()
//{
//	test();
//	system("pause");
//	return 0;
//}


////类模板的使用
//template<class Typename,class Typeage>
//class person
//{
//public:
//	person(Typename a, Typeage b)
//	{
//		this->name = a;
//		this->age = b;
//	}
//
//	void Print()
//	{
//		cout << this->name << '\t' << this->age << endl;
//	}
//
//private:
//	Typename name;
//	Typeage  age;
//
//};
//
//void test()
//{
//	person<string,int>p1("小王",18);//使用时记得要在类名后指定类型
//	p1.Print();
//}
//
//int main()
//{
//	test();
//	system("pause");
//	return 0;
//}



////类模板与函数模板的区别
////1.类模板允许有默认参数
////2.类模板不能进行自动类型的推导
//template<class Typename,class Typeage = int>//可以加入默认参数
//class person
//{
//public:
//	person(Typename a, Typeage b)
//	{
//		this->name = a;
//		this->age = b;
//	}
//
//	void Print()
//	{
//		cout << this->name << '\t' << this->age << endl;
//	}
//
//private:
//	Typename name;
//	Typeage  age;
//
//};
//
//void test()
//{	
//	//personp1("小王", 18);//不能进行自动类型推导，需要手动指定类型
//	person<string,int>p2("小王",18);//使用时记得要在类名后指定类型
//	p2.Print();
//	person<string>p3("小李", 16);//在使用时，如果有默认参数，可以在<>不指定参数
//	p3.Print();
//}
//
//int main()
//{
//	test();
//	system("pause");
//	return 0;
//}


////类模板中成员函数创建的时机
//class person1
//{
//public:
//	void showmeone()
//	{
//		cout << "show me one" << endl;
//	}
//};
//
//class person2
//{
//public:
//	void showmetow()
//	{
//		cout << "show me tow" << endl;
//	}
//};

//template<class T>//模板下的成员函数，只会在调用时才初始化
//class Myclass
//{
//public:
//	T obj;
//	void funone()
//	{
//		obj.showmeone();
//	}
//
//	void funtow()
//	{
//		obj.showmetow();
//	}
//};
//
//void test()
//{
//	Myclass<person2>p;
//	//p.funone();
//	p.funtow();
//}
//
//int main()
//{
//	test();
//	system("pause");
//	return 0;
//}


////类模板对象做函数参数
//template<class Typename,class Typeage>
//class person
//{
//public:
//	person(Typename name, Typeage age) :name(name), age(age) {}
//	void Print()
//	{
//		cout << "姓名:" << this->name << "\t" << "年龄:" << this->age << endl;
//	}
//private:
//	Typename name;
//	Typeage age;
//
//};
//
//
////根据类模板参数构建函数模板
//template<class T1,class T2>
//void classtemplate_one(person<T1, T2>&p)
//{
//	p.Print();
//	cout << "T1的类型" << typeid(T1).name() << endl;
//	cout << "T2的类型" << typeid(T2).name() << endl;
//}
//
////直接传类模板对象
//void classtemplate_tow(person<string, int>& p)
//{
//	p.Print();
//}
//
////整个类模板化
//template<class T>
//void classtemplate_three(T& p)
//{
//	p.Print();
//	cout << "T的类型" << typeid(T).name() << endl;
//}
//
//void test()
//{	
//	//根据类模板参数构建函数模板
//	person<string, int>p("小王", 18);
//	classtemplate_one(p);
//}
//
//void test2()
//{
//	//直接传类模板对象
//	person<string, int>p("小王", 18);
//	classtemplate_tow(p);
//}
//
//void test3()
//{
//	//整个类模板化
//	person<string, int>p("小王", 18);
//	classtemplate_three(p);
//}
//
//int main()
//{
//	test();
//	//test2();
//	//test3();
//	system("pause");
//	return 0;
//}



////类模板与继承
//template<class T>
//class Base
//{
//public:
//	T name;
//};
//
////class person :public Base<string>//子类直接指定父类模板参数类型
////{
////public:
////	int age;
////	person(string name, int age)
////	{
////		this->name = name;
////		this->age = age;
////	}
////	void Print()
////	{
////		cout << name << "\t" << age << endl;
////	}
////
////};
//
//
//template<class T1,class T2>
//class person :public Base<T1>//子类作为类模板，来为父类模板参数指定类型,更灵活
//{
//public:
//	T2 age;
//	person(T1 name, T2 age)
//	{
//		this->name = name;
//		this->age = age;
//	}
//	void Print()
//	{
//		cout <<	this->name << "\t" << age << endl;
//		cout << "T1的类型:" << typeid(T1).name() << endl;
//		cout << "T2的类型:" << typeid(T2).name() << endl;
//	}
//
//};
//
////void test()//直接指定类型的测试函数
////{
////	person p("小王",18);
////	p.Print();
////}
//
//void test2()//子类作为类模板测试函数
//{
//	person<string,int>p("小李", 18);
//	person<int,int>p2(100, 95);
//	p.Print();
//	p2.Print();
//
//}
//
//int main()
//{
//	//test();
//	test2();
//	system("pause");
//	return 0;
//}


//
////类模板成员函数类外实现
//
//template<class T1,class T2>
//class person
//{
//public:
//	person(T1 name,T2 age);
//	void Print();
//private:
//	T1 name;
//	T2 age;
//};
//
//template<class T1, class T2>
//person<T1,T2>::person(T1 name, T2 age)//类外实现的作用域一定要加<>模板参数和模板声明
//{
//	this->name = name;
//	this->age = age;
//}
//
//template<class T1, class T2>//类外实现的作用域一定要加<>模板参数和模板声明
//void person<T1,T2>::Print()
//{
//	cout << this->name <<'\t' << age << endl;
//	cout << "T1的类型:" << typeid(T1).name() << endl;
//	cout << "T2的类型:" << typeid(T2).name() << endl;
//}
//
//void test()
//{
//	person<string, int>p("小王", 15);
//	//person<double, char>p2(1.5, 'b');
//	p.Print();
//	//p2.Print();
//
//}
//
//int main()
//{
//	test();
//	system("pause");
//	return 0;
//}

////类模板分文件编写#.cpp和.hpp
//int main()
//{
//	person<string, int>p("小王",18);
//	p.Print();
//
//	system("pause");
//	return 0;
//}


////类模板的全局函数类内实现与内外实现
//
////模板的标识不能丢
//template<class T1,class T2>//先定义类，不然后面全局函数tow找不到这个类
//class person;
//
////模板的标识不能丢
//template<class T1, class T2>//全局函数类外实现
//void Print_tow(person<T1, T2>& p)//先在类前完成构建，这样后面友元才会生效
//{
//	cout << p.name << '\t' << p.age << endl;
//}
//
//template<class T1,class T2>
//class person
//{
//	template<class T1,class T2>//模板的标识不能丢
//	friend void Print_one(person<T1, T2>& p)//全局函数类内实现
//	{
//		cout << p.name << '\t' << p.age << endl;
//	}
//	
//	template<class T1, class T2>//模板的标识不能丢
//	friend void Print_tow(person<T1, T2>& p);//全局函数类外实现
//
//public:
//	person(T1 name, T2 age) :name(name), age(age) {}
//private:
//	T1 name;
//	T2 age;
//
//};
//
//void test()
//{
//	person<string, int>p("小王", 18);
//	Print_one(p);
//}
//
//void test2()
//{
//	person<string, int>p("小王", 18);
//	Print_tow(p);
//}
//
//int main()
//{
//	//test();
//	test2();
//	system("pause");
//	return 0;
//}


//类模板案例：数组类封装

//void test()
//{
//	Myarray<int>p1(5);
//	Myarray<int>p2(p1);
//	Myarray<int>p3(1);
//	p3 = p1;
//
//}
//
//void printINtarray(Myarray<int>& arr)
//{
//	for (int i = 0; i < arr.getsizeof(); i++)
//	{
//		cout << arr[i]<<'\t';
//	}
//	cout << endl;
//}
//void test01()
//{
//	Myarray<int>arr(5);
//	for (int i = 0; i < 5; i++)
//	{
//		arr.Push_Back(i);
//	}
//	cout << "arr1的打印输出:" << endl;
//	printINtarray(arr);
//
//	cout << "arr1的容量:" << endl;
//	cout << arr.getCapacity() << endl;
//
//	cout << "arr1的大小:" << endl;
//	cout<<arr.getsizeof() << endl;
//
//	Myarray<int>arr2(arr);
//
//	printINtarray(arr2);
//	arr2.Pop_Back();
//	
//	cout << "arr2尾删后:" << endl;
//	printINtarray(arr2);
//
//	cout << "arr2的容量:" << endl;
//	cout << arr2.getCapacity() << endl;
//
//	cout << "arr2的大小:" << endl;
//	cout<<arr2.getsizeof() << endl;
//	
//
//	
//
//}
//
//
//class Person
//{
//public:
//	Person() {}
//	Person(string name,int age):name(name),age(age) {}
//	string name;
//	int age;
//
//};

//void PrintMypersonarray(Myarray<person<string,int>>&arr)
//{
//	for (int i = 0; i < arr.getsizeof(); i++)
//	{
//		arr[i].Print();
//	}
//}
//
//void test02()
//{
//	Myarray<person<string,int>>arr(10);
//	person<string, int>p1("小王", 18);
//	person<string, int>p2("小李", 17);
//	person<string, int>p3("小风", 15);
//	person<string, int>p4("小明", 20);
//	person<string, int>p5("小三", 13);
//
//
//	arr.Push_Back(p1);
//	arr.Push_Back(p2);
//	arr.Push_Back(p3);
//	arr.Push_Back(p4);
//	arr.Push_Back(p5);
//
//	cout << "arr1的容量:" << endl;
//	cout << arr.getCapacity() << endl;
//
//	cout << "arr1的大小:" << endl;
//	cout << arr.getsizeof() << endl;
//
//	
//
//
//}

//void PrintMypersonarray(Myarray<Person>& arr)
//{
//	for (int i = 0; i < arr.getsizeof(); i++)
//	{
//		cout << "姓名:" << arr[i].name << '\t' << "年龄:" << arr[i].age << endl;
//	}
//}
//
//void test03()
//{
//	Myarray<Person>arr(10);
//	Person p1("小王", 18);
//	Person p2("小李", 17);
//	Person p3("小风", 15);
//	Person p4("小明", 20);
//	Person p5("小三", 13);
//
//	arr.Push_Back(p1);
//	arr.Push_Back(p2);
//	arr.Push_Back(p3);
//	arr.Push_Back(p4);
//	arr.Push_Back(p5);
//
//	PrintMypersonarray(arr);
//
//	cout << "arr1的容量:" << endl;
//	cout << arr.getCapacity() << endl;
//
//	cout << "arr1的大小:" << endl;
//	cout << arr.getsizeof() << endl;
//}
//
//int main()
//{
//	//test();//基础数组功能检测
//	//test01();//数组尾插尾删
//	//test02();//自定义类型检测(模板：3 个重载中没有一个可以转换所有参数类型)
//	//test03();//自定义类型检测
//	system("pause");
//	return 0;
//
//}




