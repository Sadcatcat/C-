#include<iostream>
using namespace std;


////for_each�����㷨
//#include<vector>
//#include<algorithm>
//#include<functional>
//
//void Print(int v1)
//{
//	cout <<v1<< " ";//������дʵ�ַ���
//}
//
//class Printf
//{
//public:
//	void operator()(int v1)
//	{
//		cout << v1 << " ";//������дʵ�ַ���
//	}
//
//};
//
//void test()
//{
//	vector<int>V;
//	for (int i = 0; i < 10; i++)
//		V.push_back(i);
//
//	for_each(V.begin(), V.end(), Print);//ͨ������������for_each����
//	cout << endl;
//
//	for_each(V.begin(), V.end(), Printf());//ͨ���º���������for_each����
//	cout << endl;
//}
//
//int main()
//{
//	test();
//	system("pause");
//	return 0;
//}



////transform���������㷨
//#include<vector>
//#include<algorithm>
//
//class Transform
//{
//public:
//	int operator()(int v1)
//	{
//		return (v1 + 1)*2;//�ƶ����˵������������
//	}
//
//};
//
//void Print(int v1)
//{
//	cout << v1 << " ";
//}
//
//void test()
//{
//	vector<int>V;
//	for (int i = 0; i < 10; i++)
//		V.push_back(i);
//
//	vector<int>V2;
//	V2.resize(V.size()); // ����ǰ��Ҫ��ָ����С
//
//	transform(V.begin(), V.end(), V2.begin(), Transform());
//	
//	for_each(V.begin(), V.end(), Print);//�������V��������
//	cout << endl;
//
//	for_each(V2.begin(), V2.end(), Print);//�������V2��������
//	cout << endl;
//
//}
//
//int main()
//{
//	test();
//	system("pause");
//	return 0;
//}



////find���Һ���
//#include<vector>
//#include<algorithm>
//
//void test()
//{
//	vector<int>V;
//	for (int i = 0; i < 5; i++)
//		V.push_back(i);
//
//	vector<int>::iterator it = find(V.begin(), V.end(), 4);
//	if (it == V.end())
//	{
//		cout << "δ�ҵ���Ԫ��" << endl;
//	}
//	else
//	{
//		cout << "�ҵ���Ԫ��:" << *it << endl;
//	}
//}
//
//
//class Person
//{
//public:
//	string name;
//	int age;
//
//	Person(string n, int a):age(a),name(n) {}
//
//	bool operator==(const Person& p)//�����Զ�����ҵ�ʱ����Ҫ������==���Ա�find�㷨���бȶ�
//	{
//		if (this->name == p.name && this->age == p.age)
//			return true;
//		else
//			return false;
//	}
//
//};
//
//void test2()
//{
//	vector<Person>V;
//	Person P1("С��", 10);
//	Person P2("С��", 50);
//	Person P3("С��", 70);
//	Person P4("С��", 15);
//	Person P5("Сȫ", 30);
//
//	V.push_back(P1);
//	V.push_back(P2);
//	V.push_back(P3);
//	V.push_back(P4);
//	V.push_back(P5);
//
//	vector<Person>::iterator it = find(V.begin(), V.end(), P4);
//	if (it == V.end())
//	{
//		cout << "Ϊ�ҵ�����˵�����!" << endl;
//	}
//	else
//	{
//		cout << "�鵽����:" << endl << "����:" <<  it->name << " " << "����:" << it->age << endl;
//	}
//
//}
//
//int main()
//{
//
//	//test();
//	test2();
//	system("pause");
//	return 0;
//
//}



////find_if�������������㷨
//#include<vector>
//#include<algorithm>
//#include<string>
//
//class Myoperator
//{
//public:
//	bool operator()(int v)
//	{
//		return v > 5;
//	}
//
//};
//
//void test()
//{
//	vector<int>V;
//	for (int i = 1; i < 10; i++)
//		V.push_back(i);
//	
//	//δ�ҵ�����V.end����������
//
//	for (vector<int>::iterator it = find_if(V.begin(), V.end(), Myoperator());;it++)//�º�������
//
//	if (it == V.end())
//	{
//		cout << "δ�ҵ�" << endl;
//		break;
//	}
//	else
//	{
//		cout << "�ҵ�����5����:" << *it << endl;
//	}
//
//
//}
//
//class Person
//{
//public:
//	string name;
//	int age;
//
//	Person(string n, int a) :name(n), age(a) {}
//
//
//};
//
//class PersonOperator_find
//{
//public:
//	bool operator()(Person& p)
//	{
//		return p.name=="����" and p.age >=18;
//	}
//};
//
////�Զ������Ͳ�ȡ
//void test02()
//{
//	vector<Person>V;
//	Person p1("����", 20);
//	Person p2("����", 17);
//	Person p3("�ž�", 20);
//	Person p4("�", 20);
//	Person p5("����", 18);
//
//	V.push_back(p1);
//	V.push_back(p2);
//	V.push_back(p3);
//	V.push_back(p4);
//	V.push_back(p5);
//
//
//	vector<Person>::iterator it = find_if(V.begin(), V.end(), PersonOperator_find());
//
//	if (it == V.end())
//	{
//		cout << "δ�ҵ�" << endl;
//	}
//	else
//	{
//		cout << "�ҵ��������:" << it->name<<"\t"<< it->age << endl;
//	}
//
//}
//
//int main()
//{
//	//test();
//	test02();
//	system("pause");
//	return 0;
//}



////adjacent_find�㷨���ҳ��������ظ�Ԫ�أ����ӣ�01022567���ҳ�2������������
//#include<vector>
//#include<algorithm>
//
//void test()
//{
//	vector<int>V;
//	V.push_back(0);
//	V.push_back(1);
//	V.push_back(0);
//	V.push_back(2);
//	V.push_back(2);
//	V.push_back(5);
//	V.push_back(6);
//	V.push_back(7);
//
//	vector<int>::iterator it = adjacent_find(V.begin(), V.end());
//
//	if (it == V.end())
//		cout << "δ�ҵ������ظ�Ԫ��" << endl;
//	else
//		cout << "�ҵ������ظ�Ԫ��:" << *it << endl;
//
//
//
//}
//
//
//int main()
//{
//	test();
//	system("pause");
//	return 0;
//}



////binary_search�㷨������Ԫ���Ƿ���ڣ����ҵ�Ԫ�ر���������ģ����ֲ��ң�Ч�ʺܸߣ�
//#include<vector>
//#include<algorithm>
//
//void test()
//{
//	vector<int>V;
//	for (int i = 1; i <= 10; i++)
//		V.push_back(i);
//
//	bool ret = binary_search(V.begin(), V.end(), 19);
//
//
//	if (ret)
//		cout << "�ҵ�Ԫ��" << endl;
//	else
//		cout << "δ�ҵ�Ԫ��" << endl;
//
//}
//
//
//int main()
//{
//	test();
//	system("pause");
//	return 0;
//}




// count�㷨:ͳ��Ҫ����Ԫ�صĸ���
//#include<algorithm>
//#include<vector>
//
//
////������������
//void test()
//{
//	vector<int>V;
//	V.resize(5);
//	V = { 1,2,3,3,5 };
//	int c = count(V.begin(), V.end(), 3);
//	cout << c << endl;
//}
//
////�����Զ�������
//class Person
//{
//public:
//	//const ����һ��ֵ���߶��󲻱��ı�
//	bool operator==(const Person &p) 
//	{
//		if (this->age == p.age)
//			return true;
//		else
//			return false;
//	}
//	Person() {}
//	Person(string n, int a) 
//	{
//		name = n;
//		age = a;
//	}
//private:
//	string name;
//	int age;
//};
//
//void test2()
//{
//	Person p1("�ŷ�", 30);
//	Person p2("����", 30);
//	Person p3("����", 30);
//	Person p4("�ܲ�", 35);
//	Person p5("��Ȩ", 40);
//
//	Person p("�����", 30);
//
//	vector<Person>V;
//	V.push_back(p1);
//	V.push_back(p2);
//	V.push_back(p3);
//	V.push_back(p4);
//	V.push_back(p5);
//
//	int c = count(V.begin(), V.end(), p);
//	cout << "�������ͬ�������:" << c << "��" << endl;
//
//}
//
//int main()
//{
//	test2();
//	system("pause");
//	return 0;
//}


////count_if�㷨 :��������ȥͳ��
//#include<iostream>
//#include<algorithm>
//#include<vector>
//using namespace std;
//
//bool is_num(int n)
//{
//	if (n % 2 == 0)
//		return true;
//	else
//		return false;
//}
//
//void test()
//{
//	vector<int>V;
//	V.push_back(3);
//	V.push_back(5);
//	V.push_back(9);
//	V.push_back(2);
//	V.push_back(8);
//	cout << count_if(V.begin(), V.end(), is_num)<<endl;
//	
//}
//
//
////�Զ�����������:
//class Person
//{
//public:
//	string name;
//	int age;
//	Person() {}
//	Person(string n, int a) { this->name = n; this->age = a; }
//};
//
////����ν��:
//class C_count {
//public:
//	bool operator()(const Person& p)
//	{
//		if (p.age % 2 == 0)
//			return true;
//		else
//			return false;
//	}
//};
//
////�������ز��Ժ���
//void test(int i)
//{
//	vector<Person>V;
//	Person p1("�ŷ�", 31);
//	Person p2("����", 30);
//	Person p3("����", 30);
//	Person p4("�ܲ�", 36);
//	Person p5("��Ȩ", 40);
//	V.push_back(p1);
//	V.push_back(p2);
//	V.push_back(p3);
//	V.push_back(p4);
//	V.push_back(p5);
//										//�Զ����������͵�ι����Ҫʹ����ʱ����
//	cout << count_if(V.begin(), V.end(), C_count()) << endl;
//}
//
//
//int main()
//{
//	test();
//	test(2);
//	system("pause");
//	return 0;
//}



////sort�����㷨
//#include<iostream>
//#include<algorithm>
//#include<vector>
//using namespace std;
//
//void Pint_num(int v)
//{
//	cout << v << "\t";
//}
//
//void test()
//{
//	vector<int>V;
//	V.push_back(30);
//	V.push_back(310);
//	V.push_back(29);
//	V.push_back(10);
//	V.push_back(60);
//
//	cout << "����ǰ:";
//	for_each(V.begin(), V.end(), Pint_num);
//	cout << endl;
//
//	cout << "Ĭ������:";
//	sort(V.begin(), V.end());
//	for_each(V.begin(), V.end(), Pint_num);
//	cout << endl;
//
//	cout << "����:";
//							//ʹ��greaterν�ʿ��Խ������У���Ҫָ��Ԫ������,����ʹ����ʱ����
//	sort(V.begin(), V.end(),greater<int>());
//	for_each(V.begin(), V.end(), Pint_num);
//	cout << endl;
//}
//
//int main()
//{
//	test();
//	system("pause");
//	return 0;
//}



////random_shuffle�㷨��ϴ���㷨�������������һ����
//#include<vector>
//#include<algorithm>
//
//void show_num(int v)
//{
//	cout << v << "\t";
//}
//
//void test()
//{
//	//������������ӣ�����ÿ�����Ĵ���˳��һ��
//	//srand((unsigned int(time(0))));
//	srand(time(0));
//	
//	vector<int>V;
//	for (int i = 0; i <= 10; i++)
//		V.push_back(i);
//	random_shuffle(V.begin(), V.end());
//	for_each(V.begin(), V.end(), show_num);
//	cout << endl;
//}
//
//int main()
//{
//	test();
//	system("pause");
//	return 0;
//}



////merge�㷨����������������кϲ���һ���µ������У���������Ȼ����
//#include<algorithm>
//#include<vector>
//
//void show_num(int v)
//{
//	cout << v << "\t";
//}
//
//void test()
//{
//	vector<int>V1;
//	vector<int>V2;
//
//	for (int i = 1; i <= 10; i++)
//	{
//		V1.push_back(i);
//		V2.push_back(2 * i);
//	}
//
//	vector<int>N_V;
//	/*��Ҫָ�������еĿռ䣬��Ȼ�ᱨ��*/
//	N_V.resize(V1.size() + V2.size());
//
//	merge(V1.begin(), V1.end(), V2.begin(), V2.end(), N_V.begin());
//	for_each(N_V.begin(), N_V.end(),show_num);
//	cout << endl;
//
//}
//
//
//int main()
//{
//	test();
//	system("pause");
//	return 0;
//}



////reverse�㷨����һ�����н��з�ת
//#include<algorithm>
//#include<vector>
//
//void show_num(int v)
//{
//	cout << v << "\t";
//}
//
//
//void test()
//{
//	vector<int>V;
//	V.push_back(10);
//	V.push_back(50);
//	V.push_back(30);
//	V.push_back(40);
//	cout << "��תǰ:\t";
//	for_each(V.begin(), V.end(), show_num);
//	cout << endl;
//
//	reverse(V.begin(), V.end());
//
//	cout << "��ת��:\t";
//	for_each(V.begin(), V.end(), show_num);
//	cout << endl;
//
//
//}
//
//int main()
//{
//	test();
//	system("Pause");
//	return 0;
//}




////copy�㷨����һ���������Ƹ���һ��������ͬ�֣�
//#include<vector>
//#include<algorithm>
//
//
//void show_num(int val)
//{
//	cout << val << "\t";
//}
//
//void test()
//{
//	vector<int>V1;
//	V1.push_back(10);
//	V1.push_back(30);
//	V1.push_back(500);
//
//	vector<int>V2;
//
//	//��Ҫ��ǰָ������һ�������Ĵ�С
//	V2.resize(V1.size());
//	copy(V1.begin(),V1.end(), V2.begin());
//
//	for_each(V1.begin(), V1.end(), show_num);
//
//}
//
//int main()
//{
//	test();
//	system("pause");
//	return 0;
//}



////replace�㷨���滻�㷨
//#include<algorithm>
//#include<vector>
//
////�º�����ʽʵ��ν��
//class Myprint {
//public:
//	void operator()(int v)
//	{
//		cout << v << "\t";
//	}
//
//	~Myprint()
//	{
//		cout << endl;
//	}
//};
//
//void test()
//{
//	vector<int>V1;
//	V1.push_back(10);
//	V1.push_back(20);
//	V1.push_back(50);
//	V1.push_back(60);
//	V1.push_back(10);
//
//	replace(V1.begin(), V1.end(), 10, 300);
//	for_each(V1.begin(), V1.end(),Myprint());
//
//}
//
//int main()
//{
//	test();
//	system("pause");
//	return 0;
//}



////replace_if�㷨�����������滻�㷨
//#include<algorithm>
//#include<vector>
//
////�º�����ʽʵ��ν��
//class Myprint {
//public:
//	void operator()(int v)
//	{
//		cout << v << "\t";
//	}
//
//	~Myprint()
//	{
//		cout << endl;
//	}
//};
//
//class Mypalce {
//public:
//	bool operator()(int v)
//	{
//		return v > 10;
//	}
//
//};
//
//void test()
//{
//	vector<int>V1;
//	V1.push_back(10);
//	V1.push_back(20);
//	V1.push_back(50);
//	V1.push_back(60);
//	V1.push_back(10);
//
//	replace_if(V1.begin(), V1.end(),Mypalce(), 300);
//	for_each(V1.begin(), V1.end(), Myprint());
//
//}
//
//int main()
//{
//	test();
//	system("pause");
//	return 0;
//}



////swap�㷨����������ͬ���������Ԫ��
//#include<algorithm>
//#include<vector>
//
//
//class Myprint {
//public:
//	void operator()(int v)
//	{
//		cout << v << "\t";
//	}
//
//	~Myprint()
//	{
//		cout << endl;
//	}
//};
//
//
//void test()
//{
//	vector<int>V1;
//	V1.push_back(10);
//	V1.push_back(20);
//	V1.push_back(30);
//	vector<int>V2;
//	V2.push_back(60);
//	V2.push_back(70);
//	V2.push_back(80);
//	V2.push_back(90);
//
//	cout << "����ǰ:" << endl;
//	cout << "V1��";
//	for_each(V1.begin(), V1.end(), Myprint());
//	cout << "V1��";
//	for_each(V2.begin(), V2.end(), Myprint());
//	
//	swap(V1, V2);
//
//	cout << "������:" << endl;
//	cout << "V1��";
//	for_each(V1.begin(), V1.end(), Myprint());
//	cout << "V1��";
//	for_each(V2.begin(), V2.end(), Myprint());
//
//
//}
//
//int main()
//{
//	test();
//	system("Pause");
//	return 0;
//}



////accumulate�㷨���������ڵ�Ԫ���ۼ����
////������ֵ�����㷨��ͷ�ļ�
//#include<numeric>
//#include<vector>
//
//class MyPrint {
//public:
//	void operator()(int v)
//	{
//		cout << v << '\t';
//	}
//	~MyPrint()
//	{
//		cout << endl;
//	}
//};
//
//void test() 
//{
//	vector<int>V;
//	for (int i = 1; i <= 100; i++)
//	{	
//		V.push_back(i);
//	}
//	//���һ������������ʼ���ۼ�ֵ
//	int total = accumulate(V.begin(), V.end(),0);
//
//	cout << total << endl;
//
//}
//
//int main()
//{
//	test();
//	system("pause");
//	return 0;
//}



////fill�㷨:�������������
//#include<numeric>
//#include<algorithm>
//#include<vector>
//
//class MyPrint {
//public:
//	void operator()(int v)
//	{
//		cout << v << '\t';
//	}
//	~MyPrint()
//	{
//		cout << endl;
//	}
//};
//
//void test()
//{
//	vector<int>V;
//	//Ĭ�����0
//	V.resize(10);
//	
//	//ǿ�����100
//	fill(V.begin(), V.end(), 100);
//	//fill(V.begin(), V.end() - 5, 100);
//	for_each(V.begin(), V.end(), MyPrint());
//}
//
//int main()
//{
//	test();
//	system("pause");
//	return 0;
//}




////set_intersection�㷨:���������������Ľ���������᷵�ص�һ���µ�������;
//#include<algorithm>
//#include<vector>
//
//class MyClass
//{
//public:
//	MyClass();
//	~MyClass();
//	void operator()(int v)
//	{
//		cout << v << "\t";
//	}
//
//private:
//
//};
//
//MyClass::MyClass()
//{
//}
//
//MyClass::~MyClass()
//{
//	cout << endl;
//}
//
//void test()
//{
//	vector<int>V1;
//	vector<int>V2;
//	for (int i = 0; i <= 10; i++)
//	{
//		V1.push_back(i);
//		V2.push_back(i + 5);
//	}
//	
//	vector<int>V3;
//	//���������һ����������һ���������Ӽ���������Ҫָ�����������СΪ�Ӽ�����
//	V3.resize(min(V1.size(), V2.size()));
//
//	//ʹ��һ�����������ܣ���Ȼֱ�Ӵ�ӡV3�����ڵ�����ֵ����ӡ����������Ĭ��ֵ
//	vector<int>::iterator it =set_intersection(V1.begin(), V1.end(), V2.begin(), V2.end(), V3.begin());
//	//����������λ�øĳ���it
//	for_each(V3.begin(),it,MyClass());
//}
//
//int main()
//{
//	test();
//	system("pause");
//	return 0;
//}



////set_union�㷨:���������������Ĳ���
//#include<algorithm>
//#include<vector>
//
//
//
//class MyClass
//{
//public:
//	MyClass();
//	~MyClass();
//	void operator()(int v)
//	{
//		cout << v << "\t";
//	}
//
//private:
//
//};
//
//MyClass::MyClass()
//{
//}
//
//MyClass::~MyClass()
//{
//	cout << endl;
//}
//
//
//void test()
//{
//	vector<int>V1;
//	vector<int>V2;
//
//	for (int i = 0; i <= 10; i++)
//	{
//		V1.push_back(i);
//		V2.push_back(i + 5);
//	}
//
//	vector<int>V3;
//	//�������:Ŀ�������Ľ�����С�������ڲ�Ԫ����ȫ��ͬ������С�ĺ�
//	V3.resize(V1.size() + V2.size());
//
//	vector<int>::iterator it = set_union(V1.begin(), V1.end(), V2.begin(), V2.end(), V3.begin());
//	for_each(V3.begin(), it, MyClass());
//}
//
//int main()
//{
//	test();
//	system("pause");
//	return 0;
//}



////set_difference�㷨:�����������Ĳ
//#include<algorithm>
//#include<vector>
//
//
//
//class MyClass
//{
//public:
//	MyClass();
//	~MyClass();
//	void operator()(int v)
//	{
//		cout << v << "\t";
//	}
//
//private:
//
//};
//
//MyClass::MyClass()
//{
//}
//
//MyClass::~MyClass()
//{
//	cout << endl;
//}
//
//
//void test()
//{
//	vector<int>V1;
//	vector<int>V2;
//
//	for (int i = 0; i <= 10; i++)
//	{
//		V1.push_back(i);
//		V2.push_back(i + 5);
//	}
//
//	vector<int>V3;
//	//�������:Ŀ�������Ĳ��Сȴ����Ԫ������������һ������
//	V3.resize(max(V1.size(),V2.size()));
//
//	//V1-V2
//	//vector<int>::iterator it = set_difference(V1.begin(), V1.end(), V2.begin(), V2.end(), V3.begin());
//	//V2-V1
//	vector<int>::iterator it = set_difference(V2.begin(), V2.end(), V1.begin(), V1.end(), V3.begin());
//	for_each(V3.begin(), it, MyClass());
//}
//
//int main()
//{
//	test();
//	system("pause");
//	return 0;
//}