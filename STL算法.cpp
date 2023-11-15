#include<iostream>
using namespace std;


////for_each遍历算法
//#include<vector>
//#include<algorithm>
//#include<functional>
//
//void Print(int v1)
//{
//	cout <<v1<< " ";//函数里写实现方法
//}
//
//class Printf
//{
//public:
//	void operator()(int v1)
//	{
//		cout << v1 << " ";//函数里写实现方法
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
//	for_each(V.begin(), V.end(), Print);//通过函数名开启for_each遍历
//	cout << endl;
//
//	for_each(V.begin(), V.end(), Printf());//通过仿函数对象开启for_each遍历
//	cout << endl;
//}
//
//int main()
//{
//	test();
//	system("pause");
//	return 0;
//}



////transform容器搬运算法
//#include<vector>
//#include<algorithm>
//
//class Transform
//{
//public:
//	int operator()(int v1)
//	{
//		return (v1 + 1)*2;//制定搬运到容器后的数据
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
//	V2.resize(V.size()); // 搬运前需要先指定大小
//
//	transform(V.begin(), V.end(), V2.begin(), Transform());
//	
//	for_each(V.begin(), V.end(), Print);//遍历输出V容器数据
//	cout << endl;
//
//	for_each(V2.begin(), V2.end(), Print);//遍历输出V2容器数据
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



////find查找函数
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
//		cout << "未找到该元素" << endl;
//	}
//	else
//	{
//		cout << "找到该元素:" << *it << endl;
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
//	bool operator==(const Person& p)//进行自定义查找的时候需要先重载==，以便find算法进行比对
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
//	Person P1("小王", 10);
//	Person P2("小四", 50);
//	Person P3("小九", 70);
//	Person P4("小李", 15);
//	Person P5("小全", 30);
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
//		cout << "为找的这个人的属性!" << endl;
//	}
//	else
//	{
//		cout << "查到此人:" << endl << "姓名:" <<  it->name << " " << "年龄:" << it->age << endl;
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



////find_if：按条件查找算法
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
//	//未找到返回V.end（）迭代器
//
//	for (vector<int>::iterator it = find_if(V.begin(), V.end(), Myoperator());;it++)//仿函数对象
//
//	if (it == V.end())
//	{
//		cout << "未找到" << endl;
//		break;
//	}
//	else
//	{
//		cout << "找到大于5的数:" << *it << endl;
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
//		return p.name=="王五" and p.age >=18;
//	}
//};
//
////自定义类型查取
//void test02()
//{
//	vector<Person>V;
//	Person p1("李四", 20);
//	Person p2("王五", 17);
//	Person p3("张九", 20);
//	Person p4("李东", 20);
//	Person p5("王五", 18);
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
//		cout << "未找到" << endl;
//	}
//	else
//	{
//		cout << "找到了这个人:" << it->name<<"\t"<< it->age << endl;
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



////adjacent_find算法：找出连续的重复元素，列子：01022567，找出2，这是连续的
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
//		cout << "未找到连续重复元素" << endl;
//	else
//		cout << "找到连续重复元素:" << *it << endl;
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



////binary_search算法：查找元素是否存在，查找的元素必须是有序的（二分查找：效率很高）
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
//		cout << "找到元素" << endl;
//	else
//		cout << "未找到元素" << endl;
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




// count算法:统计要查找元素的个数
//#include<algorithm>
//#include<vector>
//
//
////查找内置类型
//void test()
//{
//	vector<int>V;
//	V.resize(5);
//	V = { 1,2,3,3,5 };
//	int c = count(V.begin(), V.end(), 3);
//	cout << c << endl;
//}
//
////查找自定义类型
//class Person
//{
//public:
//	//const 锁定一个值或者对象不被改变
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
//	Person p1("张飞", 30);
//	Person p2("刘备", 30);
//	Person p3("关羽", 30);
//	Person p4("曹操", 35);
//	Person p5("孙权", 40);
//
//	Person p("诸葛亮", 30);
//
//	vector<Person>V;
//	V.push_back(p1);
//	V.push_back(p2);
//	V.push_back(p3);
//	V.push_back(p4);
//	V.push_back(p5);
//
//	int c = count(V.begin(), V.end(), p);
//	cout << "与诸葛亮同岁的人有:" << c << "人" << endl;
//
//}
//
//int main()
//{
//	test2();
//	system("pause");
//	return 0;
//}


////count_if算法 :根据条件去统计
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
////自定义数据类型:
//class Person
//{
//public:
//	string name;
//	int age;
//	Person() {}
//	Person(string n, int a) { this->name = n; this->age = a; }
//};
//
////设置谓词:
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
////参数重载测试函数
//void test(int i)
//{
//	vector<Person>V;
//	Person p1("张飞", 31);
//	Person p2("刘备", 30);
//	Person p3("关羽", 30);
//	Person p4("曹操", 36);
//	Person p5("孙权", 40);
//	V.push_back(p1);
//	V.push_back(p2);
//	V.push_back(p3);
//	V.push_back(p4);
//	V.push_back(p5);
//										//自定义数据类型的喂词需要使用临时对象
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



////sort排序算法
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
//	cout << "排序前:";
//	for_each(V.begin(), V.end(), Pint_num);
//	cout << endl;
//
//	cout << "默认升序:";
//	sort(V.begin(), V.end());
//	for_each(V.begin(), V.end(), Pint_num);
//	cout << endl;
//
//	cout << "降序:";
//							//使用greater谓词可以降序排列：需要指定元素类型,并且使用临时对象
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



////random_shuffle算法：洗牌算法，可以随机打乱一组数
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
//	//设置随机数种子，这样每次数的打乱顺序不一样
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



////merge算法：将两个有序的序列合并到一个新的序列中，新序列依然有序
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
//	/*需要指定新序列的空间，不然会报错*/
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



////reverse算法：将一个序列进行反转
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
//	cout << "反转前:\t";
//	for_each(V.begin(), V.end(), show_num);
//	cout << endl;
//
//	reverse(V.begin(), V.end());
//
//	cout << "反转后:\t";
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




////copy算法：将一个容器复制给另一个容器（同种）
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
//	//需要提前指定好另一个容器的大小
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



////replace算法：替换算法
//#include<algorithm>
//#include<vector>
//
////仿函数方式实现谓词
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



////replace_if算法：根据条件替换算法
//#include<algorithm>
//#include<vector>
//
////仿函数方式实现谓词
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



////swap算法：互换两个同种容器里的元素
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
//	cout << "交换前:" << endl;
//	cout << "V1：";
//	for_each(V1.begin(), V1.end(), Myprint());
//	cout << "V1：";
//	for_each(V2.begin(), V2.end(), Myprint());
//	
//	swap(V1, V2);
//
//	cout << "交换后:" << endl;
//	cout << "V1：";
//	for_each(V1.begin(), V1.end(), Myprint());
//	cout << "V1：";
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



////accumulate算法：对容器内的元素累加求和
////进行数值运算算法的头文件
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
//	//最后一个参数代表起始的累加值
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



////fill算法:对容器进行填充
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
//	//默认填充0
//	V.resize(10);
//	
//	//强行填充100
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




////set_intersection算法:求两个有序容器的交集，结果会返回到一个新的容器中;
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
//	//特殊情况，一个容器是另一个容器的子集，所以需要指定结果容器大小为子集容器
//	V3.resize(min(V1.size(), V2.size()));
//
//	//使用一个迭代器接受，不然直接打印V3容器内的所有值都打印出来，包括默认值
//	vector<int>::iterator it =set_intersection(V1.begin(), V1.end(), V2.begin(), V2.end(), V3.begin());
//	//结束迭代器位置改成上it
//	for_each(V3.begin(),it,MyClass());
//}
//
//int main()
//{
//	test();
//	system("pause");
//	return 0;
//}



////set_union算法:求两个有序容器的并集
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
//	//特殊情况:目标容器的交集大小是两个内部元素完全不同容器大小的和
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



////set_difference算法:求两个容器的差集
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
//	//特殊情况:目标容器的差集大小却决于元素容量最多的那一个容器
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