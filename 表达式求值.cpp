//#include<stdio.h>
//#include"stack1.h"
//
////��4.���ʽ��ֵ
//int prior(char op1,char op2)//������ȼ��ȽϺ���
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
//	printf("�������������ʽ����#����\n");
//	scanf_s("%s",expr,50);
//	D = 0;
//	while(expr[i]!='\0')
//	{
//		
//		if ('0' <= expr[i] && expr[i] <= '9')//����������ַ�����ת������D����������ջ
//		{
//			D = D*10+expr[i] - '0';
//			i++;
//			if('0' <= expr[i] && expr[i] <= '9')
//			continue;
//			data.push(D);
//			D = 0;
//		}
//		else//������������Ƚ����ȼ�������ͬ�Ĵ���
//		{
//			op2=expr[i];      //expr[i]Ϊ�ڶ����
//			op1=oper.gettop();//ջ��Ϊ��һ���
//			
//			if(prior(op1,op2)==-1){oper.push(op2);i++;}//op1<op2,��op2��ջ
//			
//			if(prior(op1,op2)==0) {oper.pop(w);i++;}   //op1=op2,��op1��ջ,����op2
//			
//			if(prior(op1,op2)==1)//op1>op2,��op1��ջ,ͬʱ����ջ��������������,
//				                 //�ȵ�����Ϊ�Ҳ�����(right),�󵯳���Ϊ�������(left),
//								 //����󽫽��������ջ
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
//    printf("%d\n",data.gettop());//�������ջΨһ��Ԫ�أ������ձ��ʽ���
//}
//
//
//
