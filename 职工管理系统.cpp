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
//		for (int i = 0; i < 11; i++)//���д�ӡ
//		{
//			gotoxy(0,i);
//			cout << "*";
//		}
//		for (int i = 0; i < 11; i++)//���д�ӡ
//		{
//			gotoxy(40, i);
//			cout << "*";
//		}
//		for (int i = 0; i < 40; i += 2)//�׶˴�ӡ
//		{
//			gotoxy(i, 10);
//			cout << "*";
//		}
//		for (int i = 0; i < 40; i+=2)//�Ҳ��ӡ
//		{
//			gotoxy(i, 0);
//			cout << "*";
//		}
//
//		Colorword(4);
//		gotoxy(10, 1);
//		cout << "#��ӭ����ְ������ϵͳ#"<<endl;
//		gotoxy(11, 2);
//		cout << "(0):�˳��������" << endl;
//		gotoxy(11, 3);
//		cout << "(1):����ְ����Ϣ" << endl;
//		gotoxy(11, 4);
//		cout << "(2):��ʾְ����Ϣ" << endl;
//		gotoxy(11, 5);
//		cout << "(3):ɾ����ְְ��" << endl;
//		gotoxy(11, 6);
//		cout << "(4):�޸�ְ����Ϣ" << endl;
//		gotoxy(11, 7);
//		cout << "(5):����ְ����Ϣ" << endl;
//		gotoxy(11, 8);
//		cout << "(6):���ձ������" << endl;
//		gotoxy(11, 9);
//		cout << "(7):��������ĵ�" << endl;
//		Colorword(15);
//
//	}
//	void gotoxy(int x, int y)//����̨����ַ�λ�ÿ���
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
//		cout << "ϵͳ�˳�!" << endl;
//	}
//	void AddEmployee()
//	{
//		int m_id; string m_name; int m_post;
//		system("cls");
//		System.gotoxy(0, 0);
//		cout << "������ְԱ���:";
//		cin >> m_id;
//		while (cin.fail())
//		{
//			cin.clear();//���cin.good�жϲ������ͣ���ôcin�����رգ���cin.clear()���´�
//			cout << "����������!" << endl;
//			cout << "������ְԱ���:";
//			getchar();//�������Ļس���
//			cin >> m_id;
//
//		}
//		cout << "������ְԱ����:";
//		cin >> m_name;
//		cout << "������ְԱ��λ(1:�չ� 2:���� 3:�ϰ�):";
//		cin >> m_post;
//		while ((m_post != 1 && m_post != 2 && m_post != 3))
//		{
//			cout << "ְλѡ�����!" << endl;
//			cout << "������ְԱ��λ(1:�չ� 2:���� 3:�ϰ�):";
//			cin >> m_post;
//		}
//		person.Invalue(m_id, m_name, m_post);
//		ofstream flie("Employee.txt", ios::out |ios::binary );
//		flie.write((const char*)&person, sizeof(person));
//		
//		flie.close();
//		cout << "�Ƿ������ӣ�(y or n):" << endl;
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
//			cout << "Ŀ¼�µ�Employee.txt�ļ���ʧ��" << endl;
//			system("pause");
//			return;
//		}
//		flie.read((char*)&person, sizeof(person));
//		if (person.Id >32768||person.Id<-32768) return;
//		System.Colorword(3);
//		System.gotoxy(0, 0);
//		cout << "ְ�����";
//		System.gotoxy(20, 0);
//		cout << "ְ������";
//		System.gotoxy(40, 0);
//		cout << "ְ����λ";
//		System.gotoxy(60, 0);
//		cout << "ְ��ְ��";
//		System.Colorword(15);
//		System.gotoxy(0, 1);
//		cout << person.Id << endl;
//		System.gotoxy(20, 1);
//		cout << person.name << endl;
//		System.gotoxy(40, 1);
//		if (person.position == 1)
//			cout << "�չ�" << endl;
//		if (person.position == 2)
//			cout << "����" << endl;
//		if (person.position == 3)
//			cout << "�ϰ�" << endl;
//		System.gotoxy(60, 1);
//		if (person.position == 1)
//			cout << "��ɾ�����������" << endl;
//		if (person.position == 2)
//			cout <<"����ϰ彻�������񣬲��·������Ա��" << endl;
//		if (person.position == 3)
//			cout <<"����˾��������" << endl;
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
//		cout << "�Ƿ��������ļ�!(y or n)" << endl;
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
//		cout << "���������ѡ��:";
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