#include<stdio.h>

void show(char s[100])
{
	printf("Hello %s",s);
}

int main() {
	char name[100];
	scanf("%s", name);
	show(name);
	return 0;
}
