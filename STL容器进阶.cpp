#include<iostream>
using namespace std;


////deque案例：评委打分(高级思路)
////创建五个选手放在vector容器里面，然后10个评委进行打分，分数放在deque容器里面，最后
////去除一个最高分，一个最低分。求剩下的平均分
//#include<vector>
//#include<string>
//#include<deque>
//#include<algorithm>
//#include<cstdlib>
//
//class person
//{
//public:
//	person(string name, int score) :name(name),score(score){}
//	string name;
//	int score;
//};
//
//void join_person(vector<person>&P)
//{
//	
//	string name_end = "ABCDE";
//	for (int i = 0; i < 5; i++)
//	{
//		string name = "选手";
//		name += name_end[i];//字符串拼接被重载成+=
//		person p(name, 0);
//		P.push_back(p);
//	}
//
//	////查看结果测试:
//	//for (vector<person>::iterator it = P.begin(); it != P.end(); it++)
//	//{
//	//	cout << "姓名: " << it->name << '\t' << "平均成绩: " << it->score << endl;
//	//}
//
//}
//
//void get_avg_score(vector<person>&P)
//{
//	deque<int>Score;
//	for (vector<person>::iterator it = P.begin(); it != P.end(); it++)
//	{
//		for (int i = 0; i < 10; i++)
//		{
//			Score.push_back(rand() % 41 + 60);
//		}
//
//		//升序排序
//		sort(Score.begin(), Score.end());
//
//		////打分测试:
//		//for (deque<int>::const_iterator it = Score.begin(); it != Score.end(); it++)
//		//{
//		//	cout << *it << " ";
//		//}
//		//cout << endl;
//
//		//去除最高分,最低分
//		Score.pop_front();
//		Score.pop_back();
//
//		////打分测试:
//		//for (deque<int>::const_iterator it = Score.begin(); it != Score.end(); it++)
//		//{
//		//	cout << *it << " ";
//		//}
//		//cout << endl;
//
//	//求平均分
//	int avg=0;
//	for (int i = 0; i < Score.size(); i++)
//	{
//		avg += Score[i];
//	}
//	//存入对象里面
//	it->score = avg / Score.size();
//
//	//最后清除元素，以免重复堆叠
//	Score.clear();
//
//	////测试是否正常:
//	//for (vector<person>::iterator it = P.begin(); it != P.end(); it++)
//	//{
//	//	cout << "姓名: " << it->name << '\t' << "平均成绩: " << it->score << endl;
//	//}
//
//	}
//}
//
//void Show_me(vector<person>& P)
//{
//	for (vector<person>::iterator it = P.begin(); it != P.end(); it++)
//	{
//		cout << "姓名: " << it->name << '\t' << "平均成绩: " << it->score << endl;
//	}
//}
//
//void start_operator()
//{
//	//将五个选手加入deque容器
//	vector<person>P;
//	join_person(P);
//
//	//10个评委为选手打分，并得到选手的平均成绩
//	get_avg_score(P);
//
//	//查看结果
//	Show_me(P);
//}
//
//int main()
//{
//	srand(int(time(0)));
//	start_operator();
//	system("pause");
//	return 0;
//}



////stack容器：栈容器（先进后出，后入先出）常用接口
//#include<stack>
//
//void test()
//{
//	stack<int>S;
//
//	//从栈顶向栈头插入元素
//	S.push(10);
//	S.push(20);
//	S.push(30);
//	S.push(40);
//
//	//查看栈的大小
//	cout<<"栈的大小:"<<S.size()<<endl;
//	
//	//从栈内取出元素，逐层遍历
//	while (!S.empty())//判断是否为空
//	{
//		//取栈定元素
//		cout << S.top() << endl;
//		//出栈,这样可以取下一个元素
//		S.pop();
//	}
//	//查看栈的大小
//	cout << "栈的大小:" << S.size() << endl;
//
//}
//
//int main()
//{
//	test();
//	system("pause");
//	return 0;
//}



////queue容器(队列容器):先入先出，后入后出. 常用接口
//#include<queue>
//
//void test()
//{
//	queue<int>q;
//
//	//入队列
//	q.push(10);
//	q.push(20);
//	q.push(30);
//	q.push(40);
//	q.push(50);
//
//	//查看大小
//	cout << "队列大小:" << q.size()<< endl;
//
//	//遍历出队列
//	while (!q.empty())
//	{
//		cout << q.front() << endl;;
//		q.pop();
//	}
//
//	//查看大小
//	cout << "队列大小:" << q.size() << endl;
//
//}
//
//int main()
//{
//	test();
//	system("pause");
//	return 0;
//}



////list容器:（链表容器构造函数）指针域+数据域
////list结构相比较vector结构
////优点：使用不连续的内存空间，删除和插入数据快  缺点：遍历数据没有vector快，不支持随机访问
//#include<list>
//
//void printList(const list<int>& L)
//{
//	for (list<int>::const_iterator it = L.begin(); it != L.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
//void test()
//{
//	list<int>L;
//
//	for (int i = 0; i < 5; i++)
//	{
//		L.push_back(i);
//	}
//
//	printList(L);
//
//	//拷贝构造
//	list<int>L1(L);
//	printList(L1);
//
//	//区间构造
//	list<int>L2(L.begin(),L.end());
//	printList(L2);
//	*L.begin() = 10;
//	printList(L2);
//	printList(L);
//
//	//N个几方式构造
//	list<int>L3(10, 5);
//	printList(L3);
//}
//
//int main()
//{
//	test();
//	system("pause");
//	return 0;
//}



////list容器:赋值和交换
//#include<list>
//void printList(const list<int>&L)
//{
//	for (list<int>::const_iterator it = L.begin(); it != L.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
//void test()
//{
//	list<int>L1;
//	for (int i = 0; i < 5; i++)
//	{
//		L1.push_back(50+i);
//	}
//	printList(L1);
//
//	//使用函数方法进行区间赋值
//	list<int>L2;
//	L2.assign(++L1.begin(),L1.end());
//	printList(L2);
//
//	//使用函数方法进行n个x赋值
//	list<int>L3;
//	L3.assign(10, 5);
//	printList(L3);
//
//	//使用operator=方式赋值
//	list<int>L4;
//	L4 = L1;
//	printList(L4);
//
//	//交换L1和L2
//	L1.swap(L2);
//	printList(L1);
//	printList(L2);
//}
//
//int main()
//{
//	test();
//	system("pause");
//	return 0;
//}


////list容器：大小操作
//#include<list>
//
//void printList(const list<int>&L)
//{
//	for (list<int>::const_iterator it = L.begin(); it != L.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
//void test()
//{
//	list<int>L;
//	L.push_back(11);
//	L.push_back(11);
//	L.push_back(11);
//	L.push_back(11);
//	printList(L);
//	cout << "list容器的大小:" << L.size() << endl;
//
//	L.resize(5, 100);
//	cout << "list容器更改大小后，多出部分填充100(默认填充0)" << endl;
//	printList(L);
//
//	L.resize(3);//大小比原来小会将多出部分删除
//	printList(L);
//}
//
//int main()
//{
//	test();
//	system("pause");
//	return 0;
//}


////list容器的插入删除操作和deque容器几乎一样，除了多一个函数remove
//#include<list>
//
//void printList(const list<int>&L)
//{
//	for (list<int>::const_iterator it = L.begin(); it != L.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
//void test()
//{
//	list<int>L;
//	L.push_back(10);
//	L.push_back(20);
//	L.push_back(10);
//	L.push_back(20); 
//	L.push_back(10); 
//	L.push_back(20);
//
//	L.remove(20);//删除指定元素，包括其所有重复项
//	printList(L);
//
//}
//
//int main()
//{
//	test();
//	system("pause");
//	return 0;
//}



////list容器:数据存取
//#include<list>
//
//void printList(const list<int>&L)
//{
//	for (list<int>::const_iterator it = L.begin(); it != L.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
//void test()
//{
//	list<int>L;
//	L.push_back(10);
//	L.push_back(20);
//	L.push_back(30);
//	L.push_back(40);
//
//	cout << "第一个元素" << L.front() << endl;
//	cout << "最后一个元素" << L.back() << endl;
//
//
//	//因为list本质是链表结构，无法进行随机访问,只能遍历
//	list<int>::iterator it = L.begin();
//	cout << *it << endl;
//	cout << *(++++it) << endl;
//	//错误写法
//	//cout << *(it + 2) << endl;
//	//cout << L[0] << endl;
//	//cout << L.at(0) << endl;
//}
//
//int main()
//{
//	test();
//	system("pause");
//	return 0;
//}



////list容器：反转和排序（排序不能使用标准算法，需要使用自带的方法）
//#include<list>
//
//void PrintList(const list<int>& L)
//{
//	for (list<int>::const_iterator it = L.begin(); it != L.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
//void test01()
//{
//	list<int>L1;
//	L1.push_back(10);
//	L1.push_back(50);
//	L1.push_back(45);
//	L1.push_back(5);
//	L1.push_back(12);
//
//	cout << "反转前:" << endl;
//	PrintList(L1);
//
//	L1.reverse();//进行链表反转
//
//	cout << "反转后:" << endl;
//	PrintList(L1);
//
//	cout << "排序前:" << endl;
//	PrintList(L1);
//
//	L1.sort();//进行链表的排序
//
//	cout << "排序后:" << endl;
//	PrintList(L1);
//}
//
//
//bool Mycomper(int v1, int v2)//自定义排序的参数函数
//{
//	return v1 > v2;
//}
//
//void test02()//自定义的降序排序
//{
//	list<int>L1;
//	L1.push_back(10);
//	L1.push_back(50);
//	L1.push_back(45);
//	L1.push_back(5);
//	L1.push_back(12);
//
//	cout << "排序前:" << endl;
//	PrintList(L1);
//
//	L1.sort(Mycomper);//指定函数名称就可以了
//
//	cout << "排序后:" << endl;
//	PrintList(L1);
//
//}
//
//int main()
//{
//	//test01();
//	test02();
//
//	system("pause");
//	return 0;
//}



////list容器:自定义排序(年龄升序，年龄相同时，身高保持降序)
//
//#include<list>
//#include<string>
//class person
//{
//public:
//	friend void PrintList(const list<person>& L);
//	friend bool compare(person& p1, person& p2);
//	person(string n, int a, int h) :name(n), age(a), hight(h){}
//
//private:
//	string name;
//	int age;
//	int hight;
//
//};
//
//void PrintList(const list<person>& L)
//{
//	for (list<person>::const_iterator it = L.begin(); it != L.end(); it++)
//	{ 
//		cout << "姓名: " << it->name << "年龄: " << it->age << "身高: " << it->hight;
//		cout << endl;
//	}cout << endl;
//}
//
//bool compare(person& p1, person& p2)//自定义的排序函数
//{
//	if (p1.age == p2.age)
//		return p1.hight > p2.hight;
//	else
//		return p1.age < p2.age;
//}
//
//void test()
//{
//	person p1("小王", 35, 144);
//	person p2("小李", 15, 177);
//	person p3("小三", 45, 185);
//	person p4("小九", 10, 194);
//	person p5("小王", 35, 189);
//
//	list<person>L;
//	L.push_back(p1);
//	L.push_back(p2);
//	L.push_back(p3);
//	L.push_back(p4);
//	L.push_back(p5);
//
//	cout << "排序前:" << endl;
//	PrintList(L);
//	cout << "----------------------" << endl;
//	cout << "排序后:" << endl;
//	L.sort(compare);
//	PrintList(L);
//}
//
//int main()
//{
//
//	test();
//	system("pause");
//	return 0;
//
//}


////set容器：基于二叉树底层的集合容器，特点：有序，无重复项
//#include<set>
//
//void Printset(const set<int>& S)
//{
//	for (set<int>::const_iterator it = S.begin(); it != S.end(); it++)
//	{
//		cout << *it << " ";
//	}cout << endl;
//}
//
//void test()
//{
//	set<int>S;
//	//set容器插入数据只能用insert方法
//	S.insert(10);
//	S.insert(5);
//	S.insert(12);
//	S.insert(3);
//	S.insert(10);
//	//会自动去重复项
//	//集合内按降序排列
//	Printset(S);
//
//	set<int>S2(S);//拷贝构造
//	Printset(S2);
//
//}
//
//int main()
//{
//	test();
//	system("pause");
//	return 0;
//}




////set容器：删除与查找统计（大小与交换与其他容器操作一样）
//#include<set>
//
//void PrintSet(const set<int>&S)
//{
//	for (set<int>::const_iterator it = S.begin(); it != S.end(); it++)
//	{
//		cout << *it << " ";
//	}cout << endl;
//}
//
//void test()//删除元素
//{
//	set<int>S = {10,30,40,50};
//
//	PrintSet(S);
//
//	//S.erase(30);//指定元素删除
//	//
//	//PrintSet(S);
//
//	//S.erase(S.begin());//提供迭代器方式删除
//	//PrintSet(S);
//
//	S.erase(S.begin(), S.end());//清除容器内所有数据，同S.clear();
//	PrintSet(S);
//}
//
//
//void test2()
//{
//	set<int>S = { 10,30,40,50 ,10};
//
//	//查找某个元素是否存在，是则返回该元素的迭代器，否则返回S.end();
//	if (S.find(10) == S.end())
//	{
//		cout << "该元素不存在" << endl;
//	}
//	else
//	{
//		cout << "该数存在为:";
//		cout << *S.find(10) << endl;
//	}
//
//	//统计某个元素出现的次数（set容器里面不允许重复，所以返回0||1，multiset容器是运行重复的，可以统计）
//	cout<<*S.find(10) << "出现次数为:" << S.count(10) << endl;;
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



////set容器和multiset区别(同一个头文件)
//#include<set>
//
//
//void test()
//{
//	set<int>S;//不允许重复数据
//	pair<set<int>::iterator, bool> ret = S.insert(20);//定义对组，返回两个参数的函数
//
//	if (ret.second)
//	{
//		cout << "第一次插入成功！" << endl;
//	}
//
//	ret=S.insert(20);//对组接受插入的数
//
//	if (ret.second)//对组判断是否重复
//	{
//		cout << "第二次插入成功！" << endl;
//	}
//	else
//		cout<< "插入失败！" << endl;
//
//}
//
//void test2()
//{
//	multiset<int>S;//允许重复数据
//	//pair<multiset<int>::iterator,bool> ret= S.insert(10);
//	//multiset不运行使用对组检测，因为不是使用的迭代器方式
//
//	S.insert(10);
//	S.insert(10);
//	S.insert(50);
//	S.insert(10);
//	S.insert(10);
//
//	for (multiset<int>::iterator it = S.begin(); it != S.end(); it++)
//	{
//		cout << *it << " ";
//	}cout << endl;
//}
//
//int main()
//{
//	//test();
//	test2();
//	system("pause");
//	return 0;
//}


////对组的使用
//
//void test()
//{
//	pair<string, int>P("小王", 18);//定义对组，并设置初值
//	cout << P.first <<" " << P.second << endl;
//
//	pair<string, int>p2 = make_pair("小李", 19);//第二种方式创建
//	cout << p2.first << " " << p2.second << endl;
//}
//
//int main()
//{
//	test();
//	system("pause");
//	return 0;
//}


////set容器排序（自定义的排序）
//#include<set>
//class  Mycomper
//{
//public:
//	bool operator()(int v1,int v2) const //在规则函数后加const保持数据不被修改
//	{
//		return v1 > v2;
//	}
//};
//
//void PrintSet(const set<int, Mycomper>S)
//{
//	for (set<int, Mycomper>::const_iterator it = S.begin(); it != S.end(); it++)
//		cout << *it << " ";
//		cout << endl;
//}
//
//void test()
//{
//	set<int, Mycomper>S;
//	S.insert(50);
//	S.insert(100);
//	S.insert(10);
//	S.insert(60);
//
//	PrintSet(S);
//
//}
//
//int main()
//{
//	test();
//	system("pause");
//	return 0;
//}



////set容器排序（自定义的排序）对类的成员进行排序
//#include<set>
//class Person
//{
//public:
//	string name;
//	int age;
//
//	Person(string n, int a) :name(n), age(a) {};
//
//};
//
//
//class Mycomper
//{
//public:
//	bool operator()(Person p1, Person p2) const //保证规则函数的结果不会被修改，加const
//	{
//		return p1.age > p2.age;
//	}
//
//};
//
//void Printset(set<Person, Mycomper>S)
//{
//	for (set<Person, Mycomper>::iterator it = S.begin(); it != S.end(); it++)
//		cout << "姓名: " << (*it).name << "	年龄:" << it->age << endl;
//}
//
//void test()
//{
//	Person P1("小王", 18);
//	Person P2("小李", 29);
//	Person P3("小三", 75);
//	Person P4("小四", 46);
//	Person P5("小九", 105);
//
//	set<Person, Mycomper>S;
//	S.insert(P1);
//	S.insert(P2);
//	S.insert(P3);
//	S.insert(P4);
//	S.insert(P5);
//
//	Printset(S);
//}
//
//int main()
//{
//	test();
//	system("pause");
//	return 0;
//}



////map容器：构造  map容器是相当于python字典的存在，有则键-值，键不可重复。使用对组实现
////multimap容器：允许重复的键
////都是默认的按键的值升序排序
//#include<map>
//
//void PrintMap(const map<int, int>M)
//{
//	for (map<int, int>::const_iterator it = M.begin(); it != M.end(); it++)
//		cout << "key: " << it->first << "\t" << "value: " << it->second << endl;
//}
//
//void test()
//{
//	map<int, int>M;
//
//	M.insert(pair<int, int>(1, 10));
//	M.insert(pair<int, int>(9, 90));
//	M.insert(pair<int, int>(3, 30));
//	M.insert(pair<int, int>(4, 40));
//
//	PrintMap(M);
// 
//	map<int, int>M2(M);//拷贝构造
//	PrintMap(M2);
//
//	map<int, int>M3;//=拷贝构造
//	M3 = M2;
//
//	PrintMap(M3);
//}
//
//int main()
//{
//	test();
//	system("pause");
//	return 0;
//}
//


////map容器大小与交换
//
//#include<map>
//
//void PrintMap(const map<int, int>M)
//{
//	for (map<int, int>::const_iterator it = M.begin(); it != M.end(); it++)
//		cout << "key: " << it->first << "\t" << "value: " << it->second << endl;
//}
//
//void test()
//{
//	map<int, int>M;
//
//	M.insert(pair<int, int>(1, 10));
//	M.insert(pair<int, int>(9, 90));
//	M.insert(pair<int, int>(3, 30));
//	M.insert(pair<int, int>(4, 40));
//
//
//	PrintMap(M);
//
//	if(M.empty())
//	{
//		cout << "Map容器为空" << endl;
//	}
//	else
//	{
//		cout << "Map容器的大小: " << M.size()<<endl;
//	}
//
//	map<int, int>M2;
//
//	M2.insert(pair<int, int>(11, 110));
//	M2.insert(pair<int, int>(12, 120));
//	M2.insert(pair<int, int>(13, 130));
//	M2.insert(pair<int, int>(14, 140));
//
//	M.swap(M2);//将M2的值与M交换
//
//	PrintMap(M);
//}
//
//int main()
//{
//	test();
//	system("pause");
//	return 0;
//}


////map函数插入与删除
//#include<map>
//
//void PrintMap(const map<int, int>M)
//{
//	for (map<int, int>::const_iterator it = M.begin(); it != M.end(); it++)
//		cout << "key: " << it->first << "\t" << "value: " << it->second << endl;
//	cout << endl;
//}
//
//void test()
//{
//	map<int, int>M;
//
//	M.insert(pair<int, int>(1, 30));//方式一插入
//
//	M.insert(make_pair(2, 20));//方式二插入
//
//	M.insert(map<int, int>::value_type(3, 30));//方式三插入(拷贝值)
//
//	M[4] = 40;//方式四插入，常用于修改，不建议用于值的插入
//	
//	PrintMap(M);
//
//	M.erase(2);//删除指定的键-值
//	PrintMap(M);
//
//	M.erase(M.begin());//迭代器方式,删除第一个元素
//	PrintMap(M);
//
//	M.erase(M.begin(), M.end());//迭代器方式，实现清除所有元素
//	PrintMap(M);
//
//	M.clear();//清除所有元素
//	PrintMap(M);
//}
//
//int main()
//{
//	test();
//	system("pause");
//	return 0;
//}



////map容器的查找与统计
//#include<map>
//
//void test()
//{
//	map<int, int>M;
//	M.insert(pair<int, int>(1, 10));
//	M.insert(pair<int, int>(2, 20));
//	M.insert(pair<int, int>(3, 30));
//	M.insert(pair<int, int>(4, 40));
//
//	if (M.find(2) != M.end())//find()函数返回迭代器，如果未找到返回end()迭代器
//	{
//		cout << "找到该数" << endl;
//		cout << (M.find(2))->first <<"->" << M.find(2)->second << endl;
//	}
//	else
//	{
//		cout << "未找到该数" << endl;
//	}
//
//	cout << endl;
//
//	multimap<int, int>Mu;//允许重复项的map容器
//	Mu.insert(pair<int, int>(1, 10));
//	Mu.insert(pair<int, int>(2, 20));
//	Mu.insert(pair<int, int>(3, 30));
//	Mu.insert(pair<int, int>(3, 40));
//	Mu.insert(pair<int, int>(3, 50));
//	Mu.insert(pair<int, int>(4, 40));
//
//	
//
//	cout << Mu.find(3)->first << "->" << Mu.find(3)->second << endl;
//	//统计该键值出现的次数
//	cout << Mu.count(3) << endl;
//
//}
//
//int main()
//{
//	test();
//	system("pause");
//	return 0;
//}



////map容器排序操作
//#include<map>
//
//class Comper
//{
//public:
//	bool operator()(int v1, int v2) const//必须重载(),并且函数最后面加上const
//	{
//		return v1 > v2;
//	}
//};
//
//void Printmap(const map<int,int,Comper>M)
//{
//	for (map<int, int,Comper>::const_iterator it = M.begin(); it != M.end(); it++)
//		cout << "key: " << it->first << "\t" << "value: " << it->second << endl;
//	cout << endl;
//}
//
//void test()
//{
//	map<int, int,Comper>M;//在定义类型的最后面加入规则函数，实现降序排列
//		M.insert(pair<int, int>(1, 10));
//		M.insert(pair<int, int>(2, 20));
//		M.insert(pair<int, int>(3, 30));
//		M.insert(pair<int, int>(4, 40));
//		Printmap(M);
//}
//
//int main()
//{
//	test();
//	system("pause");
//	return 0;
//}



//员工分组——>案例2
/*
1案例描述
·公司今天招聘了10个员工(ABCDEFGHI)，10名员工进入公司之后，需要指派员工在那个部门工作
·员工信息有:姓名工资组成; 部门分为:策划、美术、研发
·随机给10名员工分配部门和工资
·通过multimap进行信息的插入key(部门编号) value(员工)
·分部门显示员工信息

2实现步骤
1.创建10名员工，放到vector中
2.遍历vector容器，取出每个员工，进行随机分组
3.分组后，将员工部门编号作为key，具体员工作为value，放入到multimap容器中
4.分部门显示员工信息
*/


//#include<map>
//
//#define CH 1
//#define MS 2
//#define YF 3
//
//class Person
//{
//public:
//	string name;
//	int wages;
//};
//
//class Department:public Person
//{
//public:
//
//	int depart_id;
//	string depart_name;
//	Department();
//	Department(string n)
//	{
//		
//		name = n;
//		depart_id = rand() % 3+1;
//		wages = 3000 + depart_id * 1000;
//		switch (depart_id)
//		{
//		case CH:depart_name = "策划"; break;
//		case MS:depart_name = "美术"; break;
//		case YF:depart_name = "研发"; break;
//		default:depart_name = "BOSS";
//		}
//	}
//};
//
//
//void PrintMap(multimap<int, Department>M)
//{
//
//	multimap<int, Department>::iterator pos = M.find(CH);
//
//	int index = 0;//初始化记录人数;
//	int pepole_max = M.count(CH);//获取该部门总人数
//	cout << "策划部门： " << endl;
//	for(;pos!=M.end() && index< pepole_max;pos++, index++)
//		cout << "员工姓名: " << pos->second.name << " " << "所属部门: " << pos->second.depart_name << " " << "工资详情: " << pos->second.wages << endl;
//	cout << "------------------------------------------" << endl;
//
//	pos = M.find(MS);
//	index = 0;//初始化记录人数;
//	pepole_max = M.count(MS);//获取该部门总人数
//	cout << "美术部门： " << endl;
//	for (; pos != M.end() && index < pepole_max; pos++,index++)
//		cout << "员工姓名: " << pos->second.name << " " << "所属部门: " << pos->second.depart_name << " " << "工资详情: " << pos->second.wages << endl;
//	cout << "------------------------------------------" << endl;
//
//	pos = M.find(YF);
//	index = 0;//初始化记录人数;
//	pepole_max = M.count(YF);//获取该部门总人数
//	cout << "研发部门： " << endl;
//	for (; pos != M.end() && index < pepole_max; pos++, index++)
//		cout << "员工姓名: " << pos->second.name << " " << "所属部门: " << pos->second.depart_name << " " << "工资详情: " << pos->second.wages << endl;
//	cout << "------------------------------------------" << endl;
//
//}
//
//void test()
//{
//	srand(time(NULL));//进行随机数种子，保证每次每个人分配的职位不一样
//	multimap<int, Department>M;
//	
//	for (char c = 'A'; c <= 'I'; c++)
//	{
//		string name = "员工: ";
//		Department De(name+c);
//		M.insert(pair<int,Department>(De.depart_id,De));
//	}
//	
//	PrintMap(M);
//}
//
//int main()
//{
//	test();
//	system("pause");
//	return 0;
//
//}