//#include<iostream>
//using namespace std;
//
//
//////STL(stander template library)��ʶ
//// 
////#include<vector>//����vector����
////#include<algorithm>//�����㷨ͷ�ļ�
////
////
////void map_print(int arr_data)
////{
////	cout << arr_data << '\t';
////}
////
////void test()
////{ 
////	vector<int> arr;//����vector�������������ģ��һ���ģ�
////	
////	//�������ڲ�������
////	arr.push_back(10);
////	arr.push_back(20);
////	arr.push_back(30);
////	arr.push_back(40);
////	arr.push_back(50);
////
////	//ͨ�����������������ڵ�����(iterator:������)
////	vector<int>::iterator itBegin = arr.begin();//��ʼ������:ָ�������һ��Ԫ��
////	vector<int>::iterator itEnd = arr.end();//����������:ָ���������һ��Ԫ�ص���һ��
////
////	////��ӡ�������
////	//while (itBegin != itEnd)
////	//{
////	//	cout << *itBegin<<endl;//������ָ�������ָ��
////	//	itBegin++;
////
////	//}
////
////
////	////��ʽ��
////	//for (itBegin; itBegin != itEnd; itBegin++)
////	//{
////	//	cout << *itBegin << endl;
////	//}
////
////	//��ʽ����ʹ��for_each�㷨��������
////	for_each(arr.begin(), arr.end(), map_print);
////	//��һ��������ʼ������
////	//�ڶ�����:����������
////	//��������:���õ�ʵ�ֺ�����
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
//////vector����ʹ���Զ�����������
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
////	vector<person> arr;//����vector����
////
////	//ʵ����person�����
////	person p1("С��", 18);
////	person p2("С��", 15);
////	person p3("С��", 16);
////	person p4("С��", 15);
////	person p5("С��", 21);
////
////	//ʹ�������ڵ�β�巨��������
////	arr.push_back(p1);
////	arr.push_back(p2);
////	arr.push_back(p3);
////	arr.push_back(p4);
////	arr.push_back(p5);
////
////	//������������һ��ָ�룬��Ҫ�����ò���ʹ��
////	for (vector<person>::iterator Itbegin = arr.begin(); Itbegin != arr.end(); Itbegin++)
////	{
////		cout << "����:" << (*Itbegin).name <<'\t' << "����:" << (*Itbegin).age << endl;
////	}
////
////
////}
////
////void test2()
////{
////
////	//���ڶ������һ��person���ָ�룬��������洢��ָ�����
////	vector<person *> arr;//����vector����
////
////	//ʵ����person�����
////	person p1("С��", 18);
////	person p2("С��", 15);
////	person p3("С��", 16);
////	person p4("С��", 15);
////	person p5("С��", 21);
////
////	//ʹ�������ڵ�β�巨��������(�����ַ)
////	arr.push_back(&p1);
////	arr.push_back(&p2);
////	arr.push_back(&p3);
////	arr.push_back(&p4);
////	arr.push_back(&p5);
////
////	for (vector<person *>::iterator Itbegin = arr.begin(); Itbegin != arr.end(); Itbegin++)
////	{
////		cout << "����:" << (*Itbegin)->name << ' ' << "����:" << (*Itbegin)->age << endl;
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
//////vector��������Ƕ��vector����
////#include<vector>
////#include<algorithm>
////
////
////void test()
////{
////	//�����������:��������С��vector����
////	vector<vector<int>> arr;
////
////	//����С������
////	vector<int> a1;
////	vector<int> a2;
////	vector<int> a3;
////	vector<int> a4;
////
////	//��С���������������
////	for (int i = 1; i <= 4; i++)
////	{
////		a1.push_back(i + 1);
////		a2.push_back(i + 2);
////		a3.push_back(i + 3);
////		a4.push_back(i + 4);
////	}
////
////	//��С����β�嵽����������
////	arr.push_back(a1);
////	arr.push_back(a2);
////	arr.push_back(a3);
////	arr.push_back(a4);
////
////	//��ӡ����������
////	for (vector<vector<int>>::iterator It = arr.begin(); It != arr.end(); It++)
////	{
////		for (vector<int>::iterator aIt = (*It).begin(); aIt != (*It).end(); aIt++)
////		{
////			cout << ( * aIt) << " ";//�����С���������һ������
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
//////string�����Ĺ��캯��
////#include<string>
////#include<algorithm>
////
////void test()
////{
////	string t1;//�޲ι���
////	const char* str = "hello world";
////	string t2(str);//�вι��죺���������ǣ�const char *
////	cout << "t2:" << t2 << endl;
////
////	//��������:����string ���������
////	string t3(t2);
////	cout<< "t3:" << t3 << endl;
////
////	//�вι��죺ָ����������ַ����
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
//////string�����ĸ�ֵ����
////#include<string>
////void test()
////{
////	string str1 = "hello world";//��ֵ��ʽһ:operator(const char *)
////	cout << str1 << endl;
////	
////	string str2 = str1;//��ֵ��ʽ��:operator=(const string str)
////	cout << str2 << endl;
////
////	string str3;
////	str3 = 'c';//��ֵ��ʽ��:operator=(char c)
////	cout << str3 << endl;
////
////	string str4;
////	str4.assign("I love you mother");//��ֵ��ʽ��:assign��ֵ�ַ���
////	cout << str4 << endl;
////
////	string str5;
////	str5.assign("I love you mother", 6);//��ֵ��ʽ��:assignָ����ֵһ���ַ�����������ַ�
////	cout << str5 << endl;
////	str5.assign(str4, 6); //ֱ�Ӽ����ַ����ᵼ�´ӵ���λ���濪ʼѡȡ��ֵ
////	cout << str5 << endl;
////
////	string str6;
////	str6.assign(str4);//��ֵ��ʽ��:�൱�ڿ����ַ���
////	cout << str6 << endl;
////
////	string str7;
////	str7.assign(5, 'a');//��ֵ��ʽ��:��assign��һ���ַ���ֵΪ�����
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
//////string�������ַ���ƴ�� 
////#include<string>
////
////void test()
////{
////	string str1 = "hello";//����һ������ǰ�ַ����������ϱ���ַ���
////	str1 += "world";
////	cout << str1 << endl;
////
////	string str2 = str1;//������������ǰ�ַ��������ַ�
////	str2 += ':';
////	cout << str2 << endl;
////
////	string str3 = "have you then good";//������:���ַ������������ַ�������
////	str2 += str3;
////	cout << str2 << endl;
////
////	string str4 = "��ã��ҵ�����";//�����ģ���append��������ǰ�ַ����������ϱ���ַ���
////	str4.append("hello,world");
////	cout << str4 << endl;
////
////	string str5 = str4;//������:��append��������ǰ�ַ�����������ָ��һ���ַ�����ǰn���ַ���һ������ռ�����ַ���
////	str5.append("û�Һ���3333", 8);
////	cout << str5 << endl;
////
////	string str6;//������:��append��������ǰ�ַ������ϱ���ַ���
////	str6.append(str4);
////	cout << str6 << endl;
////
////	string str7;//������:��append��������ǰ�ַ������ϱ���ַ����Ĵ�x��ʼ����n���������ַ�������Ƭ
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
//////string����:���Һ��滻
////#include<string>
////
////void test01()
////{
////	//�����ַ������±�0 1 2 3(d��3��λ�þ����3)
////	//find�Ǵ������Ҳ���
////	string str = "abcdefgde";
////	int pos = str.find("de");//�Ҳ����᷵��-1
////
////	if (pos == -1) 
////		cout << "�Ҳ������ַ���!" << endl;
////	else 
////		cout << "pos = " << pos << endl;
////
////	//rfind�Ǵ����������
////	pos = str.rfind("de");//�������de�е�d���±�Ϊ7��λ����
////
////	if (pos == -1)
////		cout << "�Ҳ������ַ���!" << endl;
////	else
////		cout << "pos = " << pos << endl;
////}
////
////void test02()
////{
////	string str = "abcdef";
////	//��replace���������滻��1�ǿ�ʼλ�ã�3�ǽ���λ�ã�"11112222"��Ҫ�滻��ȥ���ַ���
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
//////string����:�Ƚ�
////#include<string>
////void test()
////{
////	string str = "zello";
////	string str2 = "xello";
////
////	//ԭ�������ַ�����ASCII�밤��������бȽ�
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
//////string����:�ַ���ȡ
////#include<string>
////
////void test()
////{
////	string str = "abcedf";
////	//ͨ��[]��ʽ
////	for (int i = 0; i < str.size(); i++)
////	{
////		cout << str[i] << " ";
////	}
////	cout << endl;
////	//ͨ��at()��ʽ
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
//////string����:������ɾ��
////#include<string>
////
////void test()
////{
////	string str = "abcedf";
////	str.insert(str.find("d"), "ffff");//���±�λ��ǰ���룬���������ַ���
////	cout << str << endl;
////	
////	str.insert(0, 3, 's');//��ָ��λ�ò�������������������ַ�
////	cout << str << endl;
////
////	str.erase(0, 3);//ɾ��ָ��λ�ÿ�ʼ��������(������������)�±�λ�õ�Ԫ��
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
//////string�������Ӵ���ȡ
////
////void test()
////{
////	string str = "hello_world";
////	string s_str =	str.substr(0, 5);//��ô�ָ��Ԫ�ؿ�ʼ��������Ԫ�أ����������������ַ���
////	cout << s_str << endl;
////
////}
////
////void test2()//����û�������
////{
////	string name = "zhanghu@qq.com";
////	string Tname = name.substr(0, name.find("@"));//�ҵ�0-@�±�֮����ַ���
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
//////vector����:���캯��
////#include<vector>
////
////void printVector(vector<int>& v)
////{
////	//���������
////	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
////	{
////		cout << *it << ' ';
////	}
////	cout << endl;
////}
////
////void test01()
////{
////	vector<int>v1;//Ĭ�Ϲ��죺�޲ι���
////	for (int i = 0; i < 10; i++)
////	{
////		v1.push_back(i);
////	}
////	printVector(v1);
////
////	vector<int>v2(v1.begin()+1, v1.end()-1);//����ȥ���乹��
////	printVector(v2);
////
////	vector<int>v3(10, 99);//��һ���������Ƹ������ڶ�����������Ҫ���������
////	printVector(v3);
////
////	vector<int>v4(v3);//��������
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
//////vector����:��ֵ
////#include<vector>
////
////void printVector(vector<int>& v)
////{
////	//���������
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
////	v2 = v1;//�����˸�ֵ�����operator=
////	printVector(v2);
////
////	vector<int>v3;//��assign�������е�������ֵ
////	v3.assign(v2.begin(), v2.end());
////	printVector(v3);
////
////	vector<int>v4;//��assign��������ָ��һ����(������)�������������(����һ)
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
//////vector����:�����ʹ�С
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
////	if (v.empty())//empty()��������Ƿ�Ϊ�գ�Ϊ�շ����棡
////	{
////		cout << "����Ϊ�գ�" << endl;;
////	}
////	else
////	{
////		printVector(v);
////		cout << "����������:" << v.capacity() << endl;//�鿴�������������������ɵ�Ԫ�ظ�����
////		cout << "�����Ĵ�С:" << v.size() << endl;//�鿴��ǰ�������ж���Ԫ��
////	}
////
////	//��resize��������ָ����С
////	v.resize(15);//���ȵ�ǰ�����Ĵ�С��Ҫ�󣬾ͻ�Ĭ�����0
////	printVector(v);
////	cout << "����������:" << v.capacity() << endl;//����ᶯ̬��չ��
////	cout << "�����Ĵ�С:" << v.size() << endl;
////
////	v.resize(5);
////	printVector(v);
////	cout << "�����Ĵ�С:" << v.size() << endl;
////
////	v.resize(15,'a');//���ȵ�ǰ�����Ĵ�С��Ҫ�󣬲��������Ը���Ĭ�����
////	printVector(v);
////	cout << "�����Ĵ�С:" << v.size() << endl;
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
//////vector����:������ɾ��
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
////		v.push_back(i);//β�巨��������
////	}
////	printVector(v);
////	//ɾ�������һ������pop_back()
////	v.pop_back();
////	printVector(v);
////
////	//�ÿ�ʼ�������ڿ�ͷ��������
////	v.insert(v.begin(), 100);
////	printVector(v);
////
////	//����insert�����ذ汾�������n��100
////	v.insert(v.end(), 5, 100);
////	printVector(v);
////
////	//��eraseɾ������
////	v.erase(v.end()-1);
////	v.erase(v.begin());
////	printVector(v);
////
////	////���õ�������eraseʵ�����������������
////	//v.erase(v.begin(), v.end());
////	//printVector(v);
////
////	//����clearҲ����ͬ��
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
//////vector���������ݴ�ȡ
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
////	//ͨ��[]��������
////	for (int i = 0; i < 10; i++)
////	{
////		cout << v[i] << " ";
////	}
////	cout << endl;
////
////	//ͨ��at����
////	for (int i = 0; i < 10; i++)
////	{
////		cout << v.at(i) << " ";
////	}
////	cout << endl;
////
////	//ֱ�Ӹ��������ڵ�һ��Ԫ�ص�ֵ��v.begin���������ǵ�һ��Ԫ�ص�ַ
////	cout << v.front() << endl;
////
////	//ֱ�Ӹ������������һ��Ԫ�ص�ֵ��v.end()���������һ��Ԫ�ص���һ��Ԫ�صĵ�ַ
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
//////vector����:swap������������
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
////	cout << "����ǰ:" << endl;
////	printVector(v1);
////	printVector(v2);
////
////	cout << "������:"<<endl;
////	v1.swap(v2);
////	printVector(v1);
////	printVector(v2);
////}
////
////
//////swapʵ��ʹ�õĳ�������С����������
////void test2()
////{
////	vector<int>v;
////	for (int i = 0; i < 100000; i++)
////	{
////		v.push_back(i);
////	}
////	
////	//��������ǰ
////	cout << "��������ǰ:" << endl;
////	cout << "����������:" << v.capacity() << endl;
////	cout << "�����Ĵ�С:" << v.size() << endl;
////
////	//���Ĵ�С
////	cout << "���Ĵ�С��:" << endl;
////	v.resize(5);
////	cout << "����������:" << v.capacity() << endl;
////	cout << "�����Ĵ�С:" << v.size() << endl;
////
////
////	//����������
////	cout << "����������:" << endl;
////	vector<int>(v).swap(v);//��Ϊvector<int>��д�������ͻᴴ������������������ʹ�ÿ������캯�������Ը��ݴ�С�����³�ʼ������������Ϊ������������һ�г��������ִ�����ͻᱻϵͳ���գ����Բ��õ�����������ռ�ÿռ�
////	cout << "����������:" << v.capacity() << endl;
////	cout << "�����Ĵ�С:" << v.size() << endl;
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
//////vector����:Ԥ���ռ�
////#include<vector>
////
////void printVector(const vector<int>& v)//�������const���Է�ֹ����Ҫ�����ݱ��޸ģ����������ֻ��Ҫ��ӡ����
////{
////					//����Ҳ��Ҫ����const����Ȼ�ᱨ��
////	for (vector<int>::const_iterator it = v.begin(); it != v.end(); it++)
////	{
////		//*it = 10;//�޸�ʧ��
////		cout << *it << " ";
////	}
////	cout << endl;
////
////}
////
////void test()
////{
////	vector<int>v;
////	int* p=NULL;//����ָ���һ��Ԫ�صĵ�ַ
////	int num = 0;//���ü������������鿴������������̬��չ�˶��ٴ�
////	for (int i = 0; i < 100000; i++)
////	{
////		v.push_back(i);
////		//��Ϊ������������̬��չ�ռ�ʱ�򣬻�Ѱ���µĵ�ַ�Σ��ɵĵ�ַ�λᱻ���գ����ԣ�ֻҪ������̬��չ�ڴ棬��һ��Ԫ�صĵ�ַ�ͻ�仯
////		if (p != &v[0])
////		{
////			p = &v[0];
////			num++;
////		}
////	}
////
////	cout << "������������̬��չ�ˣ�" << num << "��" << endl;
////}
////
////void test02()
////{
////	vector<int>v;
////	v.reserve(100000);//Ԥ���ռ�󣬾Ͳ�����ֶ�εĶ�̬��չ
////	int* p = NULL;//����ָ���һ��Ԫ�صĵ�ַ
////	int num = 0;//���ü������������鿴������������̬��չ�˶��ٴ�
////	for (int i = 0; i < 100000; i++)
////	{
////		v.push_back(i);
////		//��Ϊ������������̬��չ�ռ�ʱ�򣬻�Ѱ���µĵ�ַ�Σ��ɵĵ�ַ�λᱻ���գ����ԣ�ֻҪ������̬��չ�ڴ棬��һ��Ԫ�صĵ�ַ�ͻ�仯
////		if (p != &v[0])
////		{
////			p = &v[0];
////			num++;
////		}
////	}
////
////	cout << "������������̬��չ�ˣ�" << num << "��" << endl;
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
//////deque����:���캯��
////#include<deque>//��һ��˫�˵�vector
////
////void printDeque(const deque<int>& v)//�������const���Է�ֹ����Ҫ�����ݱ��޸ģ����������ֻ��Ҫ��ӡ����
////{
////	//����Ҳ��Ҫ����const����Ȼ�ᱨ��
////	for (deque<int>::const_iterator it = v.begin(); it != v.end(); it++)
////	{
////		//*it = 10;//�޸�ʧ��
////		cout << *it << " ";
////	}
////	cout << endl;
////}
////
////
////void test()
////{
////	deque<int>d;//Ĭ�Ϲ���
////	for (int i = 0; i < 10; i++)
////	{
////		d.push_back(i);
////	}
////
////	printDeque(d);
////
////	deque<int>d1(d.begin(), d.end());//���乹��
////
////	printDeque(d1);
////
////	deque<int>d2(10,555);//n��x�Ĺ���
////	printDeque(d2);
////
////	deque<int>d3(d1);//��������
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
//////deque����:��ֵ����(��vector������һ����)
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
////	//operator=��ʽ
////	deque<int>d1 = d;
////	printDeque(d1);
////
////
////	//assignͨ����������ֵ
////	deque<int>d2;
////	d2.assign(d.begin(),d.end() - 1);
////	printDeque(d2);
////
////
////	//assig��ʽʵ��x��n
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
//////deque����:��С������vector������������һ�£�ֻ��deque����û����������
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
////		cout << "deque����Ϊ��!" << endl;
////	}
////	else
////	{
////		cout << "deque������Ϊ�գ�" << endl;
////		cout << "deque�����Ĵ�С:" << d.size() << endl;;
////		//dequeû�������ĸ���
////	}
////	d.resize(15);
////	printDeque(d);
////
////	//����ָ����С��Ĭ�ϲ�����
////	d.resize(15, 1);
////	printDeque(d);
////
////	d.resize(5);
////	//����ԭ��С��������Ԫ�ػᱻɾ��
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
//////deque����:������ɾ��
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
////	//ͷ��
////	d.push_front(3);
////	//β��
////	d.push_back(5);
////	
////	printDeque(d);
////
////	//ͷɾ
////	d.pop_front();
////
////	printDeque(d);
////
////	d.push_front(9);
////	printDeque(d);
////
////	//βɾ
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
////	//ָ��λ�ò���
////	d.insert(d.begin(), 100);
////	printDeque(d);
////
////	//ָ��λ�ò���(x��n)
////	d.insert(d.begin(), 3,100);
////	printDeque(d);
////
////	deque<int>d1;
////	d1.push_back(9);
////	d1.push_back(10);
////
////	//������������(�ڵ�ǰ�����ڲ���������������)
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
////	//ʹ�õ�������Ϊ��ʼλ��
////	deque<int>::iterator it = d.begin();
////	it++;
////	d.erase(it);
////	printDeque(d);
////
////	d.insert(d.begin()+1, 20);
////	printDeque(d);
////
////	//ɾ��һ������λ��
////	d.erase(d.begin()+1 , d.end());
////	printDeque(d);
////
////	//�������������Ԫ��
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
//////deque����:�������
////#include<deque>
////#include<algorithm>//�㷨ͷ�ļ���֧��sort����
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
////	cout << "����ǰ:" << endl;
////	printDeque(d);
////
////	cout << "�����:" << endl;
////	//sort(d.begin(), d.end());//Ĭ���������У������ǵ������γɵ�����
////	sort(d.rbegin(), d.rend());//������ǰ��r�����Խ��н�������
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
//////deque��������ί���(�Լ���ˮ���뷨)
//////�������ѡ�ַ���vector�������棬Ȼ��10����ί���д�֣���������deque�������棬���
//////ȥ��һ����߷֣�һ����ͷ֡���ʣ�µ�ƽ����
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
////	cout << c << "ѡ�ֵ����гɼ����������к�:" << endl;
////	sort(score.begin(), score.end());
////	printDeque(score);
////	cout << c << "ѡ�ֵ����гɼ���ȥ���ߵͺ�:" << endl;
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
////	cout << c << "ѡ�ֵ�ƽ���ɼ�:" << sum / score.size() << endl;
////
////}
////
////void demo()
////{
////	srand(int(time(NULL)));//��ʼ�����������
////	vector<char>V;
////	//������ѡ�ּ���vector����
////	for (char c = 'A'; c < 'F'; c++)
////	{
////		V.push_back(c);
////	}
////
////	//��������
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