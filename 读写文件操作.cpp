#include<iostream>
#include<fstream>//��Ҫ����ͷ�ļ�
#include<string>
using namespace std;

////д�ļ�
//void test()
//{
//	//1.����������
//	ofstream fie;
//	//2.���ļ�
//	fie.open("test.txt", ios::out);
//	//3.д������
//	fie << "����:С��" << endl;
//	fie << "�Ա�:��" << endl;
//	fie << "����:19" << endl;
//	//4.�ر��ļ�
//	fie.close();
//}
//
//int main()
//{
//	test();
//	system("pause");
//	return 0;
//}


////���ļ�
//void test()
//{	//1.����������
//	ifstream fie;
//	//2.���ļ�
//	fie.open("test.txt", ios::in);
//	//3.�ж��ļ��Ƿ�ɹ���
//	if (!fie.is_open())
//	{
//		cout << "��ʧ�ܣ�" << endl;
//		return;
//	}
//	
//	//4.���ļ��ļ��ַ���
//	////��һ��:�ַ�����ȡ
//	//char str[1024] = { 0 };
//	//while (fie >> str)
//	//{
//	//	cout << str << endl;
//	//}
//
//	////�ڶ���:���ж�ȡ
//	//char str[1024] = { 0 };
//	//while (fie.getline(str, sizeof(str)))
//	//{
//	//	cout << str << endl;
//	//}
//
//	//������:���ж�ȡ
//	//string str;
//	//while (getline(fie, str))//vs2019Ĭ���ṩ��string���ͣ����ǲ��ṩgetline������������Ҫ����ͷ�ļ�string
//	//{
//	//	cout << str << endl;
//	//}
//
//	//������:���ַ���ȡ
//	char c;
//	while ((c = fie.get()) != EOF)//EOF:�����ļ�����β��    get������һ���ַ�
//	{
//		cout << c;
//	}
//
//
//	//5.�ر��ļ�
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


////�����Ʒ�ʽд�ļ�
//class Person
//{
//public:
//	char name[72];
//	int age;
//};
//
//void test()
//{	//�������������󣬲����ж�����д����
//	ofstream file("person.txt", ios::out | ios::binary);
//	//�����ļ�д�����
//	Person p = {"����:С��\t����:",18};
//	file.write((const char*)&p, sizeof(p));
//	//�ر��ļ�
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


////�Զ����Ʒ�ʽ���ļ�
//
//class Person
//{
//public:
//	char name[72];
//	int age;
//};
//
//void test()
//{	//���������󣬲��Զ����Ʒ�ʽ��ȡ
//	ifstream flie("person.txt", ios::in | ios::binary);
//	if (!flie.is_open())
//	{
//		cout << "�ļ���ʧ��" << endl;
//		return;
//	}
//
//	//�����ļ�
//	Person p;
//	flie.read((char*)&p, sizeof(p));//�Ѷ��������ݻḳֵ�����������
//	cout << p.name << p.age << endl;
//
//	//�ر��ļ�
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