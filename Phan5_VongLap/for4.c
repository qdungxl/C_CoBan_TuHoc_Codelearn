#include<stdio.h>

int main() {
    int a,b;
    scanf("%d%d",&a,&b);
    int sum = 0;
    for(int i=a;i<=b;i++)
    {
        sum = sum + i;
    }
    printf("%d",sum);
    return 0;
}