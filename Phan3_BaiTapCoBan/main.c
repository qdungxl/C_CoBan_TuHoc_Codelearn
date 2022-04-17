#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void bt1();
void bt2();
void bt3();
int main(int argc, char *argv[]) {
	//bt1();
	//bt2();
	bt3();
	return 0;
}
void bt1()
{
	int a,b;
    scanf("%d",&a);
    scanf("%d",&b);
    printf("a + b = %d",a+b);
}
void bt2()
{
	int width;
    int height;
    scanf("%d%d",&width,&height);
    printf("Area = %d",width*height);
}
void bt3()
{
	int a;
	int b;
	scanf("%d%d",&a,&b);
	printf("a + b = %d\n",a+b);
	printf("a - b = %d\n",a-b);
	printf("a * b = %d\n",a*b);
	printf("a / b = %d\n",a/b);
}
