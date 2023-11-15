//#include<iostream>
//#include<fstream>
//#include<Windows.h>
//using namespace std;
//
//
//
//class SystemUI
//{
//public:
//	void StartUI()
//	{
//		system("mode con cols=100 lines=32");
//		for (int i = 0; i < 11; i++)//左列打印
//		{
//			gotoxy(0,i);
//			cout << "*";
//		}
//		for (int i = 0; i < 11; i++)//右列打印
//		{
//			gotoxy(40, i);
//			cout << "*";
//		}
//		for (int i = 0; i < 40; i += 2)//底端打印
//		{
//			gotoxy(i, 10);
//			cout << "*";
//		}
//		for (int i = 0; i < 40; i+=2)//右侧打印
//		{
//			gotoxy(i, 0);
//			cout << "*";
//		}
//
//		Colorword(4);
//		gotoxy(10, 1);
//		cout << "#欢迎来到职工管理系统#"<<endl;
//		gotoxy(11, 2);
//		cout << "(0):退出管理程序" << endl;
//		gotoxy(11, 3);
//		cout << "(1):增加职工信息" << endl;
//		gotoxy(11, 4);
//		cout << "(2):显示职工信息" << endl;
//		gotoxy(11, 5);
//		cout << "(3):删除离职职工" << endl;
//		gotoxy(11, 6);
//		cout << "(4):修改职工信息" << endl;
//		gotoxy(11, 7);
//		cout << "(5):查找职工信息" << endl;
//		gotoxy(11, 8);
//		cout << "(6):按照编号排序" << endl;
//		gotoxy(11, 9);
//		cout << "(7):清空所有文档" << endl;
//		Colorword(15);
//
//	}
//	void gotoxy(int x, int y)//控制台输出字符位置控制
//
//	{
//
//		COORD pos = { x,y };
//
//		HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE);
//
//		SetConsoleCursorPosition(hOut, pos);
//
//	}
//
//	void Colorword(int x)
//
//	{
//
//		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), x);
//
//	}
//
//};
//
//class Employee
//{
//	
//public:
//	friend  class OperateSystem;
//	Employee() {}
//	void Invalue(int id, string name, int position)
//	{
//		this->Id = id;
//		this->name = name;
//		this->position = position;
//	}
//private:
//	int Id;
//	string name;
//	int position;
//};
//
//class OperateSystem 
//{
//public:
//	void CloseSystem()
//	{
//		system("cls");
//		System.gotoxy(10, 10);
//		cout << "系统退出!" << endl;
//	}
//	void AddEmployee()
//	{
//		int m_id; string m_name; int m_post;
//		system("cls");
//		System.gotoxy(0, 0);
//		cout << "请输入职员编号:";
//		cin >> m_id;
//		while (cin.fail())
//		{
//			cin.clear();//如果cin.good判断不是整型，那么cin输入会关闭，用cin.clear()重新打开
//			cout << "编号输入错误!" << endl;
//			cout << "请输入职员编号:";
//			getchar();//清除残余的回车符
//			cin >> m_id;
//
//		}
//		cout << "请输入职员姓名:";
//		cin >> m_name;
//		cout << "请输入职员岗位(1:普工 2:经理 3:老板):";
//		cin >> m_post;
//		while ((m_post != 1 && m_post != 2 && m_post != 3))
//		{
//			cout << "职位选择错误!" << endl;
//			cout << "请输入职员岗位(1:普工 2:经理 3:老板):";
//			cin >> m_post;
//		}
//		person.Invalue(m_id, m_name, m_post);
//		ofstream flie("Employee.txt", ios::out |ios::binary );
//		flie.write((const char*)&person, sizeof(person));
//		
//		flie.close();
//		cout << "是否继续添加？(y or n):" << endl;
//		char m;
//		cin >> m;
//		if (m == 'y')  AddEmployee();
//
//	}
//	void ShowEmployee()
//	{
//		system("cls");
//		ifstream flie("Employee.txt", ios::in|ios::binary);
//		if (!flie.is_open())
//		{
//			system("cls");
//			System.gotoxy(0, 0);
//			cout << "目录下的Employee.txt文件打开失败" << endl;
//			system("pause");
//			return;
//		}
//		flie.read((char*)&person, sizeof(person));
//		if (person.Id >32768||person.Id<-32768) return;
//		System.Colorword(3);
//		System.gotoxy(0, 0);
//		cout << "职工编号";
//		System.gotoxy(20, 0);
//		cout << "职工姓名";
//		System.gotoxy(40, 0);
//		cout << "职工岗位";
//		System.gotoxy(60, 0);
//		cout << "职工职责";
//		System.Colorword(15);
//		System.gotoxy(0, 1);
//		cout << person.Id << endl;
//		System.gotoxy(20, 1);
//		cout << person.name << endl;
//		System.gotoxy(40, 1);
//		if (person.position == 1)
//			cout << "普工" << endl;
//		if (person.position == 2)
//			cout << "经理" << endl;
//		if (person.position == 3)
//			cout << "老板" << endl;
//		System.gotoxy(60, 1);
//		if (person.position == 1)
//			cout << "完成经理交给的任务" << endl;
//		if (person.position == 2)
//			cout <<"完成老板交给的任务，并下发任务给员工" << endl;
//		if (person.position == 3)
//			cout <<"管理公司所有事务" << endl;
//		system("pause");
//		flie.close();
//
//	}
//	void DeleteEmployee();
//	void ModifyEmployee();
//	void SelectEmployee();
//	void SortId();
//	void ClearSystem()
//	{
//		cout << "是否真的清空文件!(y or n)" << endl;
//		char m;
//		cin >> m;
//		if (m == 'y')
//			ofstream flie("Employee.txt", ios::trunc);
//		else
//			return;
//	}
//private:
//	Employee person;
//	SystemUI System;
//};
//
//
//
//
//void start()
//{
//	SystemUI start;
//	OperateSystem System;
//
//	while(1){
//		start.gotoxy(0, 0);
//		start.StartUI();
//		start.gotoxy(0, 11);
//		cout << "请输入你的选择:";
//		int count;
//		cin >> count;
//		switch (count)
//		{
//		case 0:System.CloseSystem(); return;
//		case 1:System.AddEmployee(); break;
//		case 2:System.ShowEmployee(); break;
//		case 7:System.ClearSystem(); break;
//		}
//		
//
//	}
//}
//
//int main()
//{
//	start();
//	//system("pause");
//	return 0;
//}