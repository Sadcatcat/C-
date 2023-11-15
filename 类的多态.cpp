#include<iostream>
using namespace std;

////装机案例03
//
//class CPU
//{
//public:
//	virtual void makeCPU() = 0;
//};
//
//class Video
//{
//public:
//	virtual void makeVideo() = 0;
//};
//
//class Memory
//{
//public:
//	virtual void makeMemory() = 0;
//};
//
//class intelCPU:public CPU
//{
//public:
//	void makeCPU()
//	{
//		cout << "intel CPU开始工作了！" << endl;
//	}
//};
//
//class LenovolCPU :public CPU
//{
//public:
//	void makeCPU()
//	{
//		cout << " Lenovo CPU开始工作了！" << endl;
//	}
//};
//
//class intelVideo :public Video
//{
//public:
//	void makeVideo()
//	{
//		cout << "intel 显卡开始工作了！" << endl;
//	}
//};
//
//class LenovoVideo :public Video
//{
//public:
//	void makeVideo()
//	{
//		cout << "Lenovo 显卡开始工作了！" << endl;
//	}
//};
//
//class intelMemory :public Memory
//{
//public:
//	void makeMemory()
//	{
//		cout << "intel内存开始工作了！" << endl;
//	}
//};
//
//class LenovoMemory :public Memory
//{
//public:
//	void makeMemory()
//	{
//		cout << "Lenovo 内存开始工作了！" << endl;
//	}
//};
//
//
//class Computer
//{
//public:
//	Computer(CPU* c, Video* v, Memory* m)
//	{
//		this->m_c = c;
//		this->m_v = v;
//		this->m_m = m;
//	}
//
//	void dowork()
//	{
//		m_c->makeCPU();
//		m_v->makeVideo();
//		m_m->makeMemory();
//	}
//
//	~Computer()
//	{
//		if (m_c != NULL)
//		{
//			delete m_c;
//			m_c = NULL;
//		}
//		if (m_v != NULL)
//		{
//			delete m_v;
//			m_v = NULL;
//		}
//		if (m_m != NULL)
//		{
//			delete m_m;
//			m_m = NULL;
//		}
//	}
//private:
//	CPU* m_c;
//	Video* m_v;
//	Memory* m_m;
//};
//
//void test()
//{
//	//使用父类对象指向子类方法
//	CPU* c = new intelCPU;
//	Video* v = new intelVideo;
//	Memory* m = new intelMemory;
//	Computer p(c, v, m);
//	p.dowork();
//
//
//	//直接在函数中开辟一个子类对象
//	cout << "--------------" << endl;
//	Computer x(new intelCPU, new LenovoVideo, new LenovoMemory);
//	x.dowork();
//}
//
//int main(void)
//{
//	test();
//	system("pause");
//	return 0;
//}


