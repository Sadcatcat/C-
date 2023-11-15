//#define _CRT_SECURE_NO_WARNINGS 1
//
//
//#include<iostream>
//#include"stack1.h"
//using namespace std;
//void main()
//{
//	STACK S(20);
//	char expr[30];
//	int i = 0;
//	int w;
//	scanf("%s", expr);
//
//	while (expr[i] != '\0')
//	{
//		if (expr[i] == '(')
//		{
//			S.push(expr[i]);
//		}
//		else
//		{
//			if (expr[i] == ')')
//			{
//				if (!S.empty() && S.gettop() == '(')
//					S.pop(w);
//				else
//				{
//					cout << "À¨ºÅ²»Æ¥Åä,È±ÉÙ'('" << endl; return;
//				}
//			}
//		}
//		i++;
//	}
//	if (S.empty())
//		cout << "À¨ºÅÆ¥Åä!" << endl;
//	else
//	{
//		while (!S.empty())
//		{
//			if (S.gettop() == '(')
//				cout << "À¨ºÅ²»Æ¥Åä,È±ÉÙ')'" << endl;
//			S.pop(w);
//		}
//
//	}
//
//}