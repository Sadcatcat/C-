#include<iostream>
#include<string>
#include"Myarray.hpp"
using namespace std;
//#include"person.h"//������ģ���ڵ���ʱ�Ż�ʵ������������������ǳ���һ������.hͷ�ļ��ᱨ��(��ʱ������������ʵ�֣�ֻ�ж���)

////�������һ��ֱ�Ӱ���������.cpp�ļ�
//#include"person.cpp"

////���������������.hpp�ļ������ļ���.h��.cpp�Ĵ���д����һ��
//#include"person.hpp"



//����ģ��ʹ��ע������
//template<class T>
//void fun()
//{
//	cout << "fun ��������" << endl;
//}
//
//void test()
//{
//	fun<int>();//ʹ��ģ�庯�������������������ʹ�ñ�����������Ҫָ��һ������
//}
//
//int main()
//{
//	test();
//	system("pause");
//	return 0;
//
//}


////����ģ�壺����������
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
//void Down_order(T num[], int range)//ѡ�����򣬴Ӵ�С
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


////ģ�庯������ͨ����������
//
////void myPrint(int a,int b)//��ͨ����������ʽ����ת��
////{
////	cout << a + b << endl;
////}
//
//
//template<class T>
//void myPrint(T a, T b)//ģ�庯����������ʽ����ת��
//{
//	cout << a + b << endl;
//}
//
//void test()
//{
//	//myPrint(1, 'c');//��ע�͵���ͨ����������������
//	myPrint<int>(1, 'c');//ǿ��ָ��ģ�����ͣ����������Զ�ת��
//}
//
//int main()
//{
//	test();
//	system("pause");
//	return 0;
//}


////��ͨ������ģ�庯���ĵ��ù���
//
//void myPrint(int a,int b)
//{
//	cout << "��ͨ��������" << endl;
//}
//
//template<class T>
//void myPrint(T a, T b)
//{
//	cout << "ģ�庯������" << endl;
//}
//
//template<class T>
//void myPrint(T a, T b,T c)
//{
//	cout << "����ģ�庯������" << endl;
//}
//
//void test()
//{
//	
//	myPrint<>(1, 2);//��ģ��ǿ�Ƶ���ģ�庯��
//	myPrint(1, 2, 3);//����ģ��Ҳ���Է�������
//
//	char c1 = 'a';
//	char c2 = 'b';
//	myPrint(c1, c2);//����ѡ����Ҫ����ת���ĺ�������ͨ������Ҫ��charת��int
//}
//
//int main()
//{
//	test();
//	system("pause");
//	return 0;
//}


//����ģ��ľ�����:�����Զ��������ͣ�����д��ģ������غ���

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
//template<> bool isSame(person& a, person& b)//�ֶ�ָ��������ͣ�����ʹ��ģ�����ʵ��
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
//	bool is = isSame(p1, p2);//ģ���޷�ֱ��ʶ���Զ��庯��
//	if (is)
//		cout << "p1��p2��ͬ" << endl;
//	else
//		cout<< "p1��p2����ͬ" << endl;
//
//}
//
//int main()
//{
//	test();
//	system("pause");
//	return 0;
//}


////��ģ���ʹ��
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
//	person<string,int>p1("С��",18);//ʹ��ʱ�ǵ�Ҫ��������ָ������
//	p1.Print();
//}
//
//int main()
//{
//	test();
//	system("pause");
//	return 0;
//}



////��ģ���뺯��ģ�������
////1.��ģ��������Ĭ�ϲ���
////2.��ģ�岻�ܽ����Զ����͵��Ƶ�
//template<class Typename,class Typeage = int>//���Լ���Ĭ�ϲ���
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
//	//personp1("С��", 18);//���ܽ����Զ������Ƶ�����Ҫ�ֶ�ָ������
//	person<string,int>p2("С��",18);//ʹ��ʱ�ǵ�Ҫ��������ָ������
//	p2.Print();
//	person<string>p3("С��", 16);//��ʹ��ʱ�������Ĭ�ϲ�����������<>��ָ������
//	p3.Print();
//}
//
//int main()
//{
//	test();
//	system("pause");
//	return 0;
//}


////��ģ���г�Ա����������ʱ��
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

//template<class T>//ģ���µĳ�Ա������ֻ���ڵ���ʱ�ų�ʼ��
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


////��ģ���������������
//template<class Typename,class Typeage>
//class person
//{
//public:
//	person(Typename name, Typeage age) :name(name), age(age) {}
//	void Print()
//	{
//		cout << "����:" << this->name << "\t" << "����:" << this->age << endl;
//	}
//private:
//	Typename name;
//	Typeage age;
//
//};
//
//
////������ģ�������������ģ��
//template<class T1,class T2>
//void classtemplate_one(person<T1, T2>&p)
//{
//	p.Print();
//	cout << "T1������" << typeid(T1).name() << endl;
//	cout << "T2������" << typeid(T2).name() << endl;
//}
//
////ֱ�Ӵ���ģ�����
//void classtemplate_tow(person<string, int>& p)
//{
//	p.Print();
//}
//
////������ģ�廯
//template<class T>
//void classtemplate_three(T& p)
//{
//	p.Print();
//	cout << "T������" << typeid(T).name() << endl;
//}
//
//void test()
//{	
//	//������ģ�������������ģ��
//	person<string, int>p("С��", 18);
//	classtemplate_one(p);
//}
//
//void test2()
//{
//	//ֱ�Ӵ���ģ�����
//	person<string, int>p("С��", 18);
//	classtemplate_tow(p);
//}
//
//void test3()
//{
//	//������ģ�廯
//	person<string, int>p("С��", 18);
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



////��ģ����̳�
//template<class T>
//class Base
//{
//public:
//	T name;
//};
//
////class person :public Base<string>//����ֱ��ָ������ģ���������
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
//class person :public Base<T1>//������Ϊ��ģ�壬��Ϊ����ģ�����ָ������,�����
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
//		cout << "T1������:" << typeid(T1).name() << endl;
//		cout << "T2������:" << typeid(T2).name() << endl;
//	}
//
//};
//
////void test()//ֱ��ָ�����͵Ĳ��Ժ���
////{
////	person p("С��",18);
////	p.Print();
////}
//
//void test2()//������Ϊ��ģ����Ժ���
//{
//	person<string,int>p("С��", 18);
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
////��ģ���Ա��������ʵ��
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
//person<T1,T2>::person(T1 name, T2 age)//����ʵ�ֵ�������һ��Ҫ��<>ģ�������ģ������
//{
//	this->name = name;
//	this->age = age;
//}
//
//template<class T1, class T2>//����ʵ�ֵ�������һ��Ҫ��<>ģ�������ģ������
//void person<T1,T2>::Print()
//{
//	cout << this->name <<'\t' << age << endl;
//	cout << "T1������:" << typeid(T1).name() << endl;
//	cout << "T2������:" << typeid(T2).name() << endl;
//}
//
//void test()
//{
//	person<string, int>p("С��", 15);
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

////��ģ����ļ���д#.cpp��.hpp
//int main()
//{
//	person<string, int>p("С��",18);
//	p.Print();
//
//	system("pause");
//	return 0;
//}


////��ģ���ȫ�ֺ�������ʵ��������ʵ��
//
////ģ��ı�ʶ���ܶ�
//template<class T1,class T2>//�ȶ����࣬��Ȼ����ȫ�ֺ���tow�Ҳ��������
//class person;
//
////ģ��ı�ʶ���ܶ�
//template<class T1, class T2>//ȫ�ֺ�������ʵ��
//void Print_tow(person<T1, T2>& p)//������ǰ��ɹ���������������Ԫ�Ż���Ч
//{
//	cout << p.name << '\t' << p.age << endl;
//}
//
//template<class T1,class T2>
//class person
//{
//	template<class T1,class T2>//ģ��ı�ʶ���ܶ�
//	friend void Print_one(person<T1, T2>& p)//ȫ�ֺ�������ʵ��
//	{
//		cout << p.name << '\t' << p.age << endl;
//	}
//	
//	template<class T1, class T2>//ģ��ı�ʶ���ܶ�
//	friend void Print_tow(person<T1, T2>& p);//ȫ�ֺ�������ʵ��
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
//	person<string, int>p("С��", 18);
//	Print_one(p);
//}
//
//void test2()
//{
//	person<string, int>p("С��", 18);
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


//��ģ�尸�����������װ

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
//	cout << "arr1�Ĵ�ӡ���:" << endl;
//	printINtarray(arr);
//
//	cout << "arr1������:" << endl;
//	cout << arr.getCapacity() << endl;
//
//	cout << "arr1�Ĵ�С:" << endl;
//	cout<<arr.getsizeof() << endl;
//
//	Myarray<int>arr2(arr);
//
//	printINtarray(arr2);
//	arr2.Pop_Back();
//	
//	cout << "arr2βɾ��:" << endl;
//	printINtarray(arr2);
//
//	cout << "arr2������:" << endl;
//	cout << arr2.getCapacity() << endl;
//
//	cout << "arr2�Ĵ�С:" << endl;
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
//	person<string, int>p1("С��", 18);
//	person<string, int>p2("С��", 17);
//	person<string, int>p3("С��", 15);
//	person<string, int>p4("С��", 20);
//	person<string, int>p5("С��", 13);
//
//
//	arr.Push_Back(p1);
//	arr.Push_Back(p2);
//	arr.Push_Back(p3);
//	arr.Push_Back(p4);
//	arr.Push_Back(p5);
//
//	cout << "arr1������:" << endl;
//	cout << arr.getCapacity() << endl;
//
//	cout << "arr1�Ĵ�С:" << endl;
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
//		cout << "����:" << arr[i].name << '\t' << "����:" << arr[i].age << endl;
//	}
//}
//
//void test03()
//{
//	Myarray<Person>arr(10);
//	Person p1("С��", 18);
//	Person p2("С��", 17);
//	Person p3("С��", 15);
//	Person p4("С��", 20);
//	Person p5("С��", 13);
//
//	arr.Push_Back(p1);
//	arr.Push_Back(p2);
//	arr.Push_Back(p3);
//	arr.Push_Back(p4);
//	arr.Push_Back(p5);
//
//	PrintMypersonarray(arr);
//
//	cout << "arr1������:" << endl;
//	cout << arr.getCapacity() << endl;
//
//	cout << "arr1�Ĵ�С:" << endl;
//	cout << arr.getsizeof() << endl;
//}
//
//int main()
//{
//	//test();//�������鹦�ܼ��
//	//test01();//����β��βɾ
//	//test02();//�Զ������ͼ��(ģ�壺3 ��������û��һ������ת�����в�������)
//	//test03();//�Զ������ͼ��
//	system("pause");
//	return 0;
//
//}




