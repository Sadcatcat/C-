#include<iostream>
#include<fstream>//需要包含头文件
#include<string>
using namespace std;

////写文件
//void test()
//{
//	//1.创建流对象
//	ofstream fie;
//	//2.打开文件
//	fie.open("test.txt", ios::out);
//	//3.写入数据
//	fie << "姓名:小王" << endl;
//	fie << "性别:男" << endl;
//	fie << "年龄:19" << endl;
//	//4.关闭文件
//	fie.close();
//}
//
//int main()
//{
//	test();
//	system("pause");
//	return 0;
//}


////读文件
//void test()
//{	//1.创建流对象
//	ifstream fie;
//	//2.打开文件
//	fie.open("test.txt", ios::in);
//	//3.判断文件是否成功打开
//	if (!fie.is_open())
//	{
//		cout << "打开失败！" << endl;
//		return;
//	}
//	
//	//4.读文件的几种方法
//	////第一种:字符串读取
//	//char str[1024] = { 0 };
//	//while (fie >> str)
//	//{
//	//	cout << str << endl;
//	//}
//
//	////第二种:按行读取
//	//char str[1024] = { 0 };
//	//while (fie.getline(str, sizeof(str)))
//	//{
//	//	cout << str << endl;
//	//}
//
//	//第三种:按行读取
//	//string str;
//	//while (getline(fie, str))//vs2019默认提供了string类型，但是不提供getline方法，所以需要包含头文件string
//	//{
//	//	cout << str << endl;
//	//}
//
//	//第四种:按字符读取
//	char c;
//	while ((c = fie.get()) != EOF)//EOF:代表文件数据尾部    get方法读一个字符
//	{
//		cout << c;
//	}
//
//
//	//5.关闭文件
//	fie.close();
//}
//
//int main()
//{
//	test();
//	system("pause");
//	return 0;
//}
//


////二进制方式写文件
//class Person
//{
//public:
//	char name[72];
//	int age;
//};
//
//void test()
//{	//创建输入流对象，并进行二进制写操作
//	ofstream file("person.txt", ios::out | ios::binary);
//	//进行文件写入操作
//	Person p = {"姓名:小王\t年龄:",18};
//	file.write((const char*)&p, sizeof(p));
//	//关闭文件
//	file.close();
//
//}
//
//int main()
//{
//	test();
//	system("pause");
//	return 0;
//}


////以二进制方式读文件
//
//class Person
//{
//public:
//	char name[72];
//	int age;
//};
//
//void test()
//{	//创建流对象，并以二进制方式读取
//	ifstream flie("person.txt", ios::in | ios::binary);
//	if (!flie.is_open())
//	{
//		cout << "文件打开失败" << endl;
//		return;
//	}
//
//	//读出文件
//	Person p;
//	flie.read((char*)&p, sizeof(p));//把读出的数据会赋值到类的属性中
//	cout << p.name << p.age << endl;
//
//	//关闭文件
//	flie.close();
//
//}
//
//int main()
//{
//	test();
//	system("pause");
//	return 0;
//}