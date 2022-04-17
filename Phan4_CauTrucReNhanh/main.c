#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void renhanh1();
void renhanh2();
void renhanh3();
void renhanh4();
void renhanh5();
void renhanh6();
void renhanh7();
void renhanh8();
int main(int argc, char *argv[]) {
	//renhanh1();
	//renhanh2();
	//renhanh3();
	//renhanh4();
	renhanh5();
	return 0;
}
void renhanh1()
{
	int n;
	scanf("%d",&n);
	if(n%2==0)
	{
		printf("n is an even number");
	}
	if(n%2!=0)
	{
		printf("n is an odd number");
	}
}
void renhanh2()
{
	int n;
	scanf("%d",&n);
	if(n==0)
	{
		printf("n is equal to 0");
	}
	if(n>0)
	{
		printf("n is a positive number");
	}
	if(n<0)
	{
		printf("n is a negative number");
	}
}
void renhanh3()
{
	int a, b;
	scanf("%d%d",&a,&b);
	if(a>=b)
	{
		printf("a is greater than or equal to b");
	}
	else
	{
		printf("a is smaller than b");
	}
}
void renhanh4()
{
	int a,b;
	scanf("%d%d",&a,&b);
	if(a!=0&&b!=0)
	{
		printf("a is not equal to 0 and b is not equal to 0");
	}
	else
	{
		printf("a is equal to 0 or b is equal to 0");
	}
}
void renhanh5()
{
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	int max =a;
	if(b>max) max = b;
	if(c>max) max = c;
	printf("%d",max);
}
void renhanh6()
{
	int a;
	scanf("%d",&a);
	if(a>=10&&a<=100)
	{
		printf("%d is in range (10, 100)",a);
	}
	else
	{
		printf("%d is not in range (10, 100)",a);
	}
}
void renhanh7()
{
	int score;
	scanf("%d",&score);
	if(score>=0&&score<=10)
	{
		printf("The score is valid");
	}
	else
	{
		printf("The score is not valid");
	}
}
void renhanh8()
{
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	if(a<=b&&b<=c)
	{
		printf("increasing");
	}
	else
	{
		if(a>=b&&b>=c)
	{
		printf("decreasing");
	}
	else
	{
		printf("neither increasing nor decreasing order");
	}
	}
}
