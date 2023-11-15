//#include<iostream>
//using namespace std;
//
//
//////STL(stander template library)初识
//// 
////#include<vector>//调用vector容器
////#include<algorithm>//调用算法头文件
////
////
////void map_print(int arr_data)
////{
////	cout << arr_data << '\t';
////}
////
////void test()
////{ 
////	vector<int> arr;//声明vector容器（和数组的模板一样的）
////	
////	//向容器内插入数据
////	arr.push_back(10);
////	arr.push_back(20);
////	arr.push_back(30);
////	arr.push_back(40);
////	arr.push_back(50);
////
////	//通过迭代器访问容器内的数据(iterator:迭代器)
////	vector<int>::iterator itBegin = arr.begin();//开始迭代器:指向数组第一个元素
////	vector<int>::iterator itEnd = arr.end();//结束迭代器:指向数组最后一个元素的下一个
////
////	////打印输出数据
////	//while (itBegin != itEnd)
////	//{
////	//	cout << *itBegin<<endl;//本质是指向数组的指针
////	//	itBegin++;
////
////	//}
////
////
////	////方式二
////	//for (itBegin; itBegin != itEnd; itBegin++)
////	//{
////	//	cout << *itBegin << endl;
////	//}
////
////	//方式三，使用for_each算法遍历数组
////	for_each(arr.begin(), arr.end(), map_print);
////	//第一参数：起始迭代器
////	//第二参数:结束迭代器
////	//第三参数:调用的实现函数名
////
////}
////
////int main()
////{
////	test();
////	system("pause");
////	return 0;
////}
//
//
//
//////vector容器使用自定义数据类型
////#include<vector>
////#include<algorithm>
////
////class person
////{
////public:
////	person(string name, int age) :name(name), age(age) {}
////	string name;
////	int age;
////};
////
////
////void test()
////{
////	vector<person> arr;//定义vector容器
////
////	//实例化person类对象
////	person p1("小王", 18);
////	person p2("小李", 15);
////	person p3("小三", 16);
////	person p4("小五", 15);
////	person p5("小七", 21);
////
////	//使用容器内的尾插法插入数据
////	arr.push_back(p1);
////	arr.push_back(p2);
////	arr.push_back(p3);
////	arr.push_back(p4);
////	arr.push_back(p5);
////
////	//迭代器对象是一个指针，需要解引用才能使用
////	for (vector<person>::iterator Itbegin = arr.begin(); Itbegin != arr.end(); Itbegin++)
////	{
////		cout << "姓名:" << (*Itbegin).name <<'\t' << "年龄:" << (*Itbegin).age << endl;
////	}
////
////
////}
////
////void test2()
////{
////
////	//现在定义的是一个person类的指针，这个容器存储这指针对象
////	vector<person *> arr;//定义vector容器
////
////	//实例化person类对象
////	person p1("小王", 18);
////	person p2("小李", 15);
////	person p3("小三", 16);
////	person p4("小五", 15);
////	person p5("小七", 21);
////
////	//使用容器内的尾插法插入数据(传入地址)
////	arr.push_back(&p1);
////	arr.push_back(&p2);
////	arr.push_back(&p3);
////	arr.push_back(&p4);
////	arr.push_back(&p5);
////
////	for (vector<person *>::iterator Itbegin = arr.begin(); Itbegin != arr.end(); Itbegin++)
////	{
////		cout << "姓名:" << (*Itbegin)->name << ' ' << "年龄:" << (*Itbegin)->age << endl;
////	}
////
////
////
////}
////int main()
////{
////	//test();
////	test2();
////	system("pause");
////	return 0;
////
////}
//
//
//
//////vector容器进行嵌套vector容器
////#include<vector>
////#include<algorithm>
////
////
////void test()
////{
////	//创建大的容器:用来包含小的vector容器
////	vector<vector<int>> arr;
////
////	//创建小的容器
////	vector<int> a1;
////	vector<int> a2;
////	vector<int> a3;
////	vector<int> a4;
////
////	//在小容器里面放入数据
////	for (int i = 1; i <= 4; i++)
////	{
////		a1.push_back(i + 1);
////		a2.push_back(i + 2);
////		a3.push_back(i + 3);
////		a4.push_back(i + 4);
////	}
////
////	//把小容器尾插到大容器里面
////	arr.push_back(a1);
////	arr.push_back(a2);
////	arr.push_back(a3);
////	arr.push_back(a4);
////
////	//打印容器内数据
////	for (vector<vector<int>>::iterator It = arr.begin(); It != arr.end(); It++)
////	{
////		for (vector<int>::iterator aIt = (*It).begin(); aIt != (*It).end(); aIt++)
////		{
////			cout << ( * aIt) << " ";//获得了小容器里面的一个数据
////		}
////		cout << endl;
////
////	}
////}
////
////int main()
////{
////	test();
////	system("pause");
////	return 0;
////
////}
//
//
//////string容器的构造函数
////#include<string>
////#include<algorithm>
////
////void test()
////{
////	string t1;//无参构造
////	const char* str = "hello world";
////	string t2(str);//有参构造：参数类型是：const char *
////	cout << "t2:" << t2 << endl;
////
////	//拷贝构造:拷贝string 对象的内容
////	string t3(t2);
////	cout<< "t3:" << t3 << endl;
////
////	//有参构造：指定任意个单字符输出
////	string t4(10, 'x');
////	cout << t4 << endl;
////}
////
////
////int main()
////{
////	test();
////	system("pause");
////	return 0;
////
////}
//
//
//////string容器的赋值操作
////#include<string>
////void test()
////{
////	string str1 = "hello world";//赋值方式一:operator(const char *)
////	cout << str1 << endl;
////	
////	string str2 = str1;//赋值方式二:operator=(const string str)
////	cout << str2 << endl;
////
////	string str3;
////	str3 = 'c';//赋值方式三:operator=(char c)
////	cout << str3 << endl;
////
////	string str4;
////	str4.assign("I love you mother");//赋值方式四:assign赋值字符串
////	cout << str4 << endl;
////
////	string str5;
////	str5.assign("I love you mother", 6);//赋值方式五:assign指定赋值一个字符串的任意个字符
////	cout << str5 << endl;
////	str5.assign(str4, 6); //直接加入字符串会导致从第六位后面开始选取赋值
////	cout << str5 << endl;
////
////	string str6;
////	str6.assign(str4);//赋值方式六:相当于拷贝字符串
////	cout << str6 << endl;
////
////	string str7;
////	str7.assign(5, 'a');//赋值方式七:用assign把一个字符赋值为任意个
////	cout << str7 << endl;
////
////}
////
////int main()
////{
////	test();
////	system("pause");
////	return 0;
////
////}
//
//
//
//////string容器：字符串拼接 
////#include<string>
////
////void test()
////{
////	string str1 = "hello";//操作一：将当前字符串变量加上别的字符串
////	str1 += "world";
////	cout << str1 << endl;
////
////	string str2 = str1;//操作二：将当前字符串加上字符
////	str2 += ':';
////	cout << str2 << endl;
////
////	string str3 = "have you then good";//操作三:将字符串变量加上字符串变量
////	str2 += str3;
////	cout << str2 << endl;
////
////	string str4 = "你好，我的世界";//操作四：用append方法将当前字符串变量加上别的字符串
////	str4.append("hello,world");
////	cout << str4 << endl;
////
////	string str5 = str4;//操作五:用append方法将当前字符串变量加上指定一个字符串的前n个字符（一个中文占两个字符）
////	str5.append("没我好捏3333", 8);
////	cout << str5 << endl;
////
////	string str6;//操作六:用append方法将当前字符串加上别的字符串
////	str6.append(str4);
////	cout << str6 << endl;
////
////	string str7;//操作七:用append方法将当前字符串加上别的字符串的从x开始到第n个结束的字符串的切片
////	str7.append(str4, 0, 14);//str7.append(str4,x,n)
////	cout << str7 << endl;
////}
////
////int main()
////{
////	test();
////	system("pause");
////	return 0;
////}
//
//
//////string容器:查找和替换
////#include<string>
////
////void test01()
////{
////	//查找字符串的下标0 1 2 3(d在3的位置就输出3)
////	//find是从左往右查找
////	string str = "abcdefgde";
////	int pos = str.find("de");//找不到会返回-1
////
////	if (pos == -1) 
////		cout << "找不到该字符串!" << endl;
////	else 
////		cout << "pos = " << pos << endl;
////
////	//rfind是从右往左查找
////	pos = str.rfind("de");//最后的这个de中的d在下标为7的位置上
////
////	if (pos == -1)
////		cout << "找不到该字符串!" << endl;
////	else
////		cout << "pos = " << pos << endl;
////}
////
////void test02()
////{
////	string str = "abcdef";
////	//用replace方法进行替换，1是开始位置，3是结束位置，"11112222"是要替换进去的字符串
////	str.replace(1, 3, "11112222");
////	cout << "str = " << str << endl;
////}
////
////int main()
////{
////	//test01();
////
////	test02();
////
////	system("pause");
////	return 0;
////}
//
//
//////string容器:比较
////#include<string>
////void test()
////{
////	string str = "zello";
////	string str2 = "xello";
////
////	//原理是用字符串的ASCII码挨个相减进行比较
////
////	if (str.compare(str2) == 0)
////		cout << "Str 1  == Str 2" << endl;
////	else if (str.compare(str2) > 0)
////		cout << "Str 1 > Str 2" << endl;
////	else
////		cout << "Str 1 < Str2" << endl;
////}
////
////int main()
////{
////	test();
////	system("pause");
////	return 0;
////}
//
//
//////string容器:字符存取
////#include<string>
////
////void test()
////{
////	string str = "abcedf";
////	//通过[]方式
////	for (int i = 0; i < str.size(); i++)
////	{
////		cout << str[i] << " ";
////	}
////	cout << endl;
////	//通过at()方式
////	for (int i = 0; i < str.size(); i++)
////	{
////		cout << str.at(i) << " ";
////	}
////	cout << endl;
////	str[0] = 'b';
////	str.at(str.size()-1) = 'b';
////	cout << str << endl;
////}
////
////int main()
////{
////	test();
////	system("pause");
////	return 0;
////}
//
//
//
//////string容器:插入与删除
////#include<string>
////
////void test()
////{
////	string str = "abcedf";
////	str.insert(str.find("d"), "ffff");//在下标位置前插入，参数二的字符串
////	cout << str << endl;
////	
////	str.insert(0, 3, 's');//在指定位置插入参数二个参数三的字符
////	cout << str << endl;
////
////	str.erase(0, 3);//删除指定位置开始到参数二(不包括参数二)下标位置的元素
////	cout << str << endl;
////
////}
////
////int main()
////{
////	test();
////	system("pause");
////	return 0;
////}
//
//
//////string容器：子串获取
////
////void test()
////{
////	string str = "hello_world";
////	string s_str =	str.substr(0, 5);//获得从指定元素开始到参数二元素（不包括参数二）字符串
////	cout << s_str << endl;
////
////}
////
////void test2()//获得用户名案例
////{
////	string name = "zhanghu@qq.com";
////	string Tname = name.substr(0, name.find("@"));//找到0-@下标之间的字符串
////	cout << Tname << endl;
////}
////
////int main()
////{
////	//test();
////
////	test2();
////
////	system("pause");
////	return 0;
////}
//
//
//////vector容器:构造函数
////#include<vector>
////
////void printVector(vector<int>& v)
////{
////	//迭代器输出
////	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
////	{
////		cout << *it << ' ';
////	}
////	cout << endl;
////}
////
////void test01()
////{
////	vector<int>v1;//默认构造：无参构造
////	for (int i = 0; i < 10; i++)
////	{
////		v1.push_back(i);
////	}
////	printVector(v1);
////
////	vector<int>v2(v1.begin()+1, v1.end()-1);//进行去区间构造
////	printVector(v2);
////
////	vector<int>v3(10, 99);//第一个参数控制个数，第二个参数进行要构造的数据
////	printVector(v3);
////
////	vector<int>v4(v3);//拷贝构造
////	printVector(v4);
////}
////
////
////int main()
////{
////	test01();
////	system("pause");
////	return 0;
////}
//
//
//////vector容器:赋值
////#include<vector>
////
////void printVector(vector<int>& v)
////{
////	//迭代器输出
////	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
////	{
////		cout << *it << ' ';
////	}
////	cout << endl;
////}
////
////void test01()
////{
////	vector<int>v1;
////	for (int i = 0; i < 10; i++)
////	{
////		v1.push_back(i);
////	}
////
////	vector<int>v2;
////	v2 = v1;//重载了赋值运算符operator=
////	printVector(v2);
////
////	vector<int>v3;//用assign方法进行迭代器赋值
////	v3.assign(v2.begin(), v2.end());
////	printVector(v3);
////
////	vector<int>v4;//用assign方法进行指定一个数(参数二)并控制输出数量(参数一)
////	v4.assign(10, 'a');
////	printVector(v4);
////}
////
////int main()
////{
////	test01();
////	system("pause");
////	return 0;
////}
//
//
//////vector容器:容量和大小
////#include<vector>
////
////void printVector(vector<int>& v)
////{
////	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
////	{
////		cout << *it << " ";
////	}
////	cout << endl;
////}
////
////void test()
////{
////	vector<int> v;
////	for (int i = 1; i <= 10; i++)
////	{
////		v.push_back(i);
////	}
////
////	if (v.empty())//empty()检测容器是否为空，为空返回真！
////	{
////		cout << "容器为空！" << endl;;
////	}
////	else
////	{
////		printVector(v);
////		cout << "容器的容量:" << v.capacity() << endl;//查看容器的容量（可以容纳的元素个数）
////		cout << "容器的大小:" << v.size() << endl;//查看当前容量存有多少元素
////	}
////
////	//用resize方法重新指定大小
////	v.resize(15);//若比当前容器的大小还要大，就会默认填充0
////	printVector(v);
////	cout << "容器的容量:" << v.capacity() << endl;//这个会动态扩展的
////	cout << "容器的大小:" << v.size() << endl;
////
////	v.resize(5);
////	printVector(v);
////	cout << "容器的大小:" << v.size() << endl;
////
////	v.resize(15,'a');//若比当前容器的大小还要大，参数二可以更改默认填充
////	printVector(v);
////	cout << "容器的大小:" << v.size() << endl;
////
////
////
////}
////
////int main()
////{
////	test();
////	system("pause");
////	return 0;
////}
//
//
//////vector容器:插入与删除
////#include<vector>
////
////void printVector(vector<int>& v)
////{
////	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
////	{
////		cout << *it << " ";
////	}
////	cout << endl;
////}
////
////void test() 
////{
////	vector<int>v;
////	for (int i = 0; i < 5; i++)
////	{
////		v.push_back(i);//尾插法插入数据
////	}
////	printVector(v);
////	//删除掉最后一个数据pop_back()
////	v.pop_back();
////	printVector(v);
////
////	//用开始迭代器在开头插入数据
////	v.insert(v.begin(), 100);
////	printVector(v);
////
////	//利用insert的重载版本可以输出n个100
////	v.insert(v.end(), 5, 100);
////	printVector(v);
////
////	//用erase删除数据
////	v.erase(v.end()-1);
////	v.erase(v.begin());
////	printVector(v);
////
////	////利用迭代器和erase实现清除容器所有数据
////	//v.erase(v.begin(), v.end());
////	//printVector(v);
////
////	//利用clear也可以同上
////	v.clear();
////	printVector(v);
////}
////
////int main()
////{
////	test();
////	system("pause");
////	return 0;
////}
//
//
//
//////vector容器：数据存取
////#include<vector>
////
////void test()
////{
////	vector<int>v;
////	for (int i = 0; i < 10; i++)
////	{
////		v.push_back(i);
////	}
////
////	//通过[]访问数据
////	for (int i = 0; i < 10; i++)
////	{
////		cout << v[i] << " ";
////	}
////	cout << endl;
////
////	//通过at访问
////	for (int i = 0; i < 10; i++)
////	{
////		cout << v.at(i) << " ";
////	}
////	cout << endl;
////
////	//直接给出容器内第一个元素的值，v.begin（）给的是第一个元素地址
////	cout << v.front() << endl;
////
////	//直接给出容器内最后一个元素的值，v.end()给的是最后一个元素的下一个元素的地址
////	cout << v.back() << endl;
////}
////
////int main()
////{
////	test();
////	system("pause");
////	return 0;
////}
//
//
//////vector容器:swap方法交换容器
////#include<vector>
////
////void printVector(vector<int>& v)
////{
////	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
////	{
////		cout << *it << " ";
////	}
////cout << endl;
////}
////
////void test()
////{
////	vector<int> v1;
////	vector<int> v2;
////	for (int i = 0; i < 10; i++)
////	{
////		v1.push_back(i);
////	}
////
////	for (int i = 10; i ; i--)
////	{
////		v2.push_back(i);
////	}
////	cout << "交换前:" << endl;
////	printVector(v1);
////	printVector(v2);
////
////	cout << "交换后:"<<endl;
////	v1.swap(v2);
////	printVector(v1);
////	printVector(v2);
////}
////
////
//////swap实际使用的场景：缩小容器的容量
////void test2()
////{
////	vector<int>v;
////	for (int i = 0; i < 100000; i++)
////	{
////		v.push_back(i);
////	}
////	
////	//缩减容量前
////	cout << "缩减容量前:" << endl;
////	cout << "容器的容量:" << v.capacity() << endl;
////	cout << "容器的大小:" << v.size() << endl;
////
////	//更改大小
////	cout << "更改大小后:" << endl;
////	v.resize(5);
////	cout << "容器的容量:" << v.capacity() << endl;
////	cout << "容器的大小:" << v.size() << endl;
////
////
////	//缩减容量后
////	cout << "缩减容量后:" << endl;
////	vector<int>(v).swap(v);//因为vector<int>不写变量名就会创建匿名对象，匿名对象使用拷贝构造函数，可以根据大小，重新初始化容量，又因为匿名对象在这一行程序语句在执行完后就会被系统回收，所以不用担心匿名对象占用空间
////	cout << "容器的容量:" << v.capacity() << endl;
////	cout << "容器的大小:" << v.size() << endl;
////}
////
////int main()
////{
////	//test();
////	test2();
////	system("pause");
////	return 0;
////}
//
//
//
//////vector容器:预留空间
////#include<vector>
////
////void printVector(const vector<int>& v)//这里加上const可以防止不必要的数据被修改，这个函数我只需要打印即可
////{
////					//这里也需要加上const，不然会报错
////	for (vector<int>::const_iterator it = v.begin(); it != v.end(); it++)
////	{
////		//*it = 10;//修改失败
////		cout << *it << " ";
////	}
////	cout << endl;
////
////}
////
////void test()
////{
////	vector<int>v;
////	int* p=NULL;//用来指向第一个元素的地址
////	int num = 0;//设置计数器，用来查看容器的容量动态扩展了多少次
////	for (int i = 0; i < 100000; i++)
////	{
////		v.push_back(i);
////		//因为容器的容量动态扩展空间时候，会寻找新的地址段，旧的地址段会被回收，所以，只要容器动态扩展内存，第一个元素的地址就会变化
////		if (p != &v[0])
////		{
////			p = &v[0];
////			num++;
////		}
////	}
////
////	cout << "容器的容量动态扩展了：" << num << "次" << endl;
////}
////
////void test02()
////{
////	vector<int>v;
////	v.reserve(100000);//预留空间后，就不会出现多次的动态扩展
////	int* p = NULL;//用来指向第一个元素的地址
////	int num = 0;//设置计数器，用来查看容器的容量动态扩展了多少次
////	for (int i = 0; i < 100000; i++)
////	{
////		v.push_back(i);
////		//因为容器的容量动态扩展空间时候，会寻找新的地址段，旧的地址段会被回收，所以，只要容器动态扩展内存，第一个元素的地址就会变化
////		if (p != &v[0])
////		{
////			p = &v[0];
////			num++;
////		}
////	}
////
////	cout << "容器的容量动态扩展了：" << num << "次" << endl;
////}
////
////int main()
////{
////	//test();
////	test02();
////	system("pause");
////	return 0;
////}
//
//
//
//////deque容器:构造函数
////#include<deque>//是一个双端的vector
////
////void printDeque(const deque<int>& v)//这里加上const可以防止不必要的数据被修改，这个函数我只需要打印即可
////{
////	//这里也需要加上const，不然会报错
////	for (deque<int>::const_iterator it = v.begin(); it != v.end(); it++)
////	{
////		//*it = 10;//修改失败
////		cout << *it << " ";
////	}
////	cout << endl;
////}
////
////
////void test()
////{
////	deque<int>d;//默认构造
////	for (int i = 0; i < 10; i++)
////	{
////		d.push_back(i);
////	}
////
////	printDeque(d);
////
////	deque<int>d1(d.begin(), d.end());//区间构造
////
////	printDeque(d1);
////
////	deque<int>d2(10,555);//n个x的构造
////	printDeque(d2);
////
////	deque<int>d3(d1);//拷贝构造
////	printDeque(d3);
////
////}
////
////int main()
////{
////	test();
////	system("pause");
////	return 0;
////
////}
//
//
//
//////deque容器:赋值操作(与vector容器是一样的)
////#include<deque>
////
////void printDeque(const deque<int>& d)
////{
////	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++)
////	{
////		cout << *it << " ";
////	}
////	cout << endl;
////
////}
////
////void test()
////{
////
////	deque<int>d;
////	for (int i = 0; i < 10; i++)
////	{
////		d.push_back(i);
////	}
////
////	printDeque(d);
////
////	//operator=方式
////	deque<int>d1 = d;
////	printDeque(d1);
////
////
////	//assign通过迭代器赋值
////	deque<int>d2;
////	d2.assign(d.begin(),d.end() - 1);
////	printDeque(d2);
////
////
////	//assig方式实现x个n
////	deque<int>d3;
////	d3.assign(10, 99);
////	printDeque(d3);
////
////}
////
////int main()
////{
////	test();
////	system("pause");
////	return 0;
////}
//
//
//
//////deque容器:大小操作和vector容器操作基本一致，只是deque容器没有容量概念
////#include<deque>
////
////void printDeque(const deque<int>& d)
////{
////	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++)
////	{
////		cout << *it << " ";
////	}
////	cout << endl;
////
////}
////
////void test()
////{
////	deque<int>d;
////	for (int i = 0; i < 10; i++)
////	{
////		d.push_back(i);
////	}
////
////	if (d.empty())
////	{
////		cout << "deque容器为空!" << endl;
////	}
////	else
////	{
////		cout << "deque容器不为空！" << endl;
////		cout << "deque容器的大小:" << d.size() << endl;;
////		//deque没有容量的概念
////	}
////	d.resize(15);
////	printDeque(d);
////
////	//重新指定大小后，默认补充零
////	d.resize(15, 1);
////	printDeque(d);
////
////	d.resize(5);
////	//若比原来小，则多出的元素会被删除
////	printDeque(d);
////
////}
////
////int main()
////{
////	test();
////	system("pause");
////	return 0;
////}
//
//
//
//////deque容器:插入与删除
////#include<deque>
////
////void printDeque(const deque<int>& d)
////{
////	
////	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++)
////	{
////		cout << *it << " ";
////	}
////	cout << endl;
////}
////
////void test01()
////{
////
////	deque<int>d;
////	//头插
////	d.push_front(3);
////	//尾插
////	d.push_back(5);
////	
////	printDeque(d);
////
////	//头删
////	d.pop_front();
////
////	printDeque(d);
////
////	d.push_front(9);
////	printDeque(d);
////
////	//尾删
////	d.pop_back();
////	printDeque(d);
////
////
////}
////
////void test02()
////{
////
////	deque<int>d;
////	d.push_back(5);
////	d.push_back(6);
////	printDeque(d);
////
////	
////	//指定位置插入
////	d.insert(d.begin(), 100);
////	printDeque(d);
////
////	//指定位置插入(x个n)
////	d.insert(d.begin(), 3,100);
////	printDeque(d);
////
////	deque<int>d1;
////	d1.push_back(9);
////	d1.push_back(10);
////
////	//插入区间数据(在当前容器内插入别的容器的区间)
////	d.insert(d.begin(), d1.begin(), d1.end());
////	printDeque(d);
////
////}
////
////void test03()
////{
////
////	deque<int>d;
////	d.push_back(10);
////	d.push_back(20);
////	d.push_back(30);
////	printDeque(d);
////
////	//使用迭代器作为开始位置
////	deque<int>::iterator it = d.begin();
////	it++;
////	d.erase(it);
////	printDeque(d);
////
////	d.insert(d.begin()+1, 20);
////	printDeque(d);
////
////	//删除一个区间位置
////	d.erase(d.begin()+1 , d.end());
////	printDeque(d);
////
////	//清除容器内所有元素
////	d.clear();
////	printDeque(d);
////
////}
////
////int main()
////{
////	//test01();
////	//test02();
////	test03();
////	system("pause");
////	return 0;
////}
//
//
//
//
//////deque容器:排序操作
////#include<deque>
////#include<algorithm>//算法头文件，支持sort排序
////
////void printDeque(const deque<int>& d)
////{
////	
////	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++)
////	{
////		cout << *it << " ";
////	}
////	cout << endl;
////}
////
////void test()
////{
////	deque<int>d;
////	d.push_back(10);
////	d.push_front(200);
////	d.push_back(55);
////	d.push_front(199);
////	d.push_back(3);
////	d.push_front(99);
////
////	cout << "排序前:" << endl;
////	printDeque(d);
////
////	cout << "排序后:" << endl;
////	//sort(d.begin(), d.end());//默认升序排列，参数是迭代器形成的区间
////	sort(d.rbegin(), d.rend());//迭代器前加r，可以进行降序排序
////	printDeque(d);
////}
////
////int main()
////{
////	test();
////	system("pause");
////	return 0;
////}
//
//
//
//////deque案例：评委打分(自己很水的想法)
//////创建五个选手放在vector容器里面，然后10个评委进行打分，分数放在deque容器里面，最后
//////去除一个最高分，一个最低分。求剩下的平均分
////
////#include<vector>
////#include<deque>
////#include<algorithm>
////#include<stdlib.h>
////
////
////void printDeque(const deque<int>& d)
////{
////	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++)
////	{
////		cout << *it << " ";
////	}
////	cout << endl;
////}
////
////void ave_V(char c)
////{
////	deque<int>score;
////	for (int i = 0; i < 10; i++)
////	{
////		score.push_back(rand() % 20 + 1);
////	}
////
////	cout << c << "选手的所有成绩，升序排列后:" << endl;
////	sort(score.begin(), score.end());
////	printDeque(score);
////	cout << c << "选手的所有成绩，去除高低后:" << endl;
////	score.pop_back();
////	score.pop_front();
////	printDeque(score);
////	
////	int sum = 0;
////	for (int i = 0; i < score.size(); i++)
////	{
////		sum += score.at(i);
////	}
////
////	cout << c << "选手的平均成绩:" << sum / score.size() << endl;
////
////}
////
////void demo()
////{
////	srand(int(time(NULL)));//初始化随机数种子
////	vector<char>V;
////	//将五名选手加入vector容器
////	for (char c = 'A'; c < 'F'; c++)
////	{
////		V.push_back(c);
////	}
////
////	//进行评估
////	for (int i = 0; i < V.size(); i++)
////	{
////		ave_V(V.at(i));
////		cout << endl;
////	}
////	
////
////
////}
////
////int main()
////{
////	demo();
////	system("pause");
////	return 0;
////
////}
//
//
//#include<vector>
//
//int main()
//{
//	vector<string>S;
//	vector<vector<string>>V;
//	vector<int>Q;
//	//Q.resize(5);
//	//for (int i = 1; i <= 4; i++)
//	//{
//	//	vector<int>::iterator it = Q.begin();
//	//	*(it + 1) = i;
//	//}
//
//	//if (Q[1] == Q[2] || abs(Q[1] - Q[2]) != 0)
//	//	cout << "true" << endl;
//	//else
//	//	cout << "flase" << endl;
//	for (int i = 0; i <= 3; i++)
//	{
//		S.push_back(".");
//	}
//	for (int i = 0; i <= 3; i++)
//	{
//		V.push_back(S);
//	}
//
//	
//		
//			for (vector<string>::iterator is = S.begin(); is != S.end(); is++)
//				*is = "Q";
//			
//	
//		
//		for (vector<vector<string>>::iterator it = V.begin(); it != V.end(); it++)
//		{
//			for (vector<string>::iterator is = S.begin(); is != S.end(); is++)
//				cout << *is;
//			cout << endl;
//		}
//
//	system("pause");
//	return 0;
//}