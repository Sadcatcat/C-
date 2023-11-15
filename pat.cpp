//#include<iostream>
//#include<stack>
//using namespace std;
//
//int sum(int n[],int lenght)
//{
//    int sum = 0;
//    for (int i = 0; i< lenght; i++)
//    {
//        sum = sum + n[i];
//    }
//    return sum;
//}
//
//stack<int> num(int n[], int lenght)
//{
//    int sums;
//    stack<int> S;
//    sums = sum(n, lenght);
//    while (sums != 0)
//    {
//        S.push(sums % 10);
//        sums = sums / 10;
//    }
//    return S;
//}
//
//int main(void)
//{
//    int n[101];
//    char c;
//    int count = 0;
//    stack<int> word;
//    for (int i = 0; cin.get(c); i++)
//    {
//        if (c != '\n')
//        {
//            int num = c - '0';
//            n[i] = num;
//            count++;
//        }
//        else
//            break;
//    }
//
//    word = num(n,count);
//    while (!word.empty())
//    {
//        switch (word.top())
//        {
//        case 0:cout << "ling"; break;
//        case 1:cout << "yi"; break;
//        case 2:cout << "er"; break;
//        case 3:cout << "san"; break;
//        case 4:cout << "si"; break;
//        case 5:cout << "wu"; break;
//        case 6:cout << "liu"; break;
//        case 7:cout << "qi"; break;
//        case 8:cout << "ba"; break;
//        case 9:cout << "jiu"; break;
//        }
//        word.pop();
//        if (word.size() !=0 )
//            cout << " ";
//    }
//    cout << endl;
//}
//
//
