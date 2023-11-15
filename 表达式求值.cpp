//#include<stdio.h>
//#include"stack1.h"
//
////例4.表达式求值
//int prior(char op1,char op2)//算符优先级比较函数
//{
//	if(op1=='#' && op2=='#')return 0;
//	if(op1=='#' && op2=='+')return -1;
//	if(op1=='#' && op2=='-')return -1;
//	if(op1=='#' && op2=='*')return -1;
//	if(op1=='#' && op2=='/')return -1;
//	if(op1=='#' && op2=='(')return -1;
//
//
//	if(op1=='+' && op2=='#')return 1;
//	if(op1=='+' && op2=='+')return 1;
//	if(op1=='+' && op2=='-')return 1;
//	if(op1=='+' && op2=='*')return -1;
//	if(op1=='+' && op2=='/')return -1;
//	if(op1=='+' && op2=='(')return -1;
//	if(op1=='+' && op2==')')return 1;
//
//	if(op1=='-' && op2=='#')return 1;
//	if(op1=='-' && op2=='+')return 1;
//	if(op1=='-' && op2=='-')return 1;
//	if(op1=='-' && op2=='*')return -1;
//	if(op1=='-' && op2=='/')return -1;
//	if(op1=='-' && op2=='(')return -1;
//	if(op1=='-' && op2==')')return 1;
//
//	if(op1=='*' && op2=='#')return 1;
//	if(op1=='*' && op2=='+')return 1;
//	if(op1=='*' && op2=='-')return 1;
//	if(op1=='*' && op2=='*')return 1;
//	if(op1=='*' && op2=='/')return 1;
//	if(op1=='*' && op2=='(')return -1;
//	if(op1=='*' && op2==')')return 1;
//
//	if(op1=='/' && op2=='#')return 1;
//	if(op1=='/' && op2=='+')return 1;
//	if(op1=='/' && op2=='-')return 1;
//	if(op1=='/' && op2=='*')return 1;
//	if(op1=='/' && op2=='/')return 1;
//	if(op1=='/' && op2=='(')return -1;
//	if(op1=='/' && op2==')')return 1;
//
//	
//	if(op1=='(' && op2=='+')return -1;
//	if(op1=='(' && op2=='-')return -1;
//	if(op1=='(' && op2=='*')return -1;
//	if(op1=='(' && op2=='/')return -1;
//	if(op1=='(' && op2=='(')return -1;
//	if(op1=='(' && op2==')')return 0;
//
//	if(op1==')' && op2=='#')return 1;
//	if(op1==')' && op2=='+')return 1;
//	if(op1==')' && op2=='-')return 1;
//	if(op1==')' && op2=='*')return 1;
//	if(op1==')' && op2=='/')return 1;
//	if(op1==')' && op2==')')return 1;
//}
//
//
//
//void main()
//{
//    STACK data(10),oper(10);
//	oper.push('#');
//	char expr[50];
//	int i=0,left,right,w,D;
//	char op1,op2;
//	printf("请输入算术表达式，以#结束\n");
//	scanf_s("%s",expr,50);
//	D = 0;
//	while(expr[i]!='\0')
//	{
//		
//		if ('0' <= expr[i] && expr[i] <= '9')//如果是数字字符，就转成整数D，并入数据栈
//		{
//			D = D*10+expr[i] - '0';
//			i++;
//			if('0' <= expr[i] && expr[i] <= '9')
//			continue;
//			data.push(D);
//			D = 0;
//		}
//		else//如果是算符，则比较优先级后，作不同的处理
//		{
//			op2=expr[i];      //expr[i]为第二算符
//			op1=oper.gettop();//栈顶为第一算符
//			
//			if(prior(op1,op2)==-1){oper.push(op2);i++;}//op1<op2,则op2进栈
//			
//			if(prior(op1,op2)==0) {oper.pop(w);i++;}   //op1=op2,则op1出栈,抵消op2
//			
//			if(prior(op1,op2)==1)//op1>op2,则op1出栈,同时数据栈弹出两个操作数,
//				                 //先弹出的为右操作数(right),后弹出的为左操作数(left),
//								 //运算后将结果入数据栈
//			{
//				oper.pop(w);
//				data.pop(right);
//				data.pop(left);
//				switch(w)
//				{
//				   case '+': data.push(left+right);break;
//				   case '-': data.push(left-right);break;
//				   case '*': data.push(left*right);break;
//				   case '/': data.push(left/right);break;
//				}
//			}
//			
//		}
//		
//	}
//
//    printf("%d\n",data.gettop());//输出数据栈唯一的元素，即最终表达式结果
//}
//
//
//
