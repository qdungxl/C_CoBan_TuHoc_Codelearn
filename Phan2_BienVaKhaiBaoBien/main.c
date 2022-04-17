#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void songuyen();
void sothuc();
void dientich();
void kytu1();
void longlong();
int main(int argc, char *argv[]) {
	//dientich();
	//kytu1();
	longlong();
	return 0;
}
void songuyen(){
	int a =6;
	int b = 2;
	printf("a + b = %d\n",a+b);
	printf("a - b = %d\n",a-b);
	printf("a * b = %d\n",a*b);
	printf("a / b = %d\n",a/b);
}
void sothuc(){
	double a = 10.5;
	double b = 7;
	printf("a / b = %f",a/b);
}
void dientich(){
	double a = 7.5;
	double b = 3.8;
	printf("Area = %f",a*b);
}
void kytu1()
{
	char d = 'a' + 3;
	printf("%c", d);
}
void longlong()
{
	long long a = 384847522;
	long long b = 988347273;
	printf("%lld",a*b);
}
