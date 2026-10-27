#include<stdio.h>
int main()
{
float a,b;

char op;
printf("Enter first number:");
scanf("%f",&a);
printf("Enter operater (+ - */):");
scanf("%c",&op);
printf("Enter second number:");
scanf("%f",&b);
switch(op)
{
case '+':
printf("result=%.2f\n", a+b);
break;
case '-':
printf("result=%.2f\n",a-b);
break;
case '*':
printf("result=%.2f\n",a/b);
break;
case '/':
if(b!=0)
printf("result=%2\n",a/b);
else
printf("cannot divide by zero.\n");
break;
default:
printf("Invalid operator.\n");
}
return 0;

}
