#include<stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    int giaithua =1;
    for(int i=1;i<=n;i++){
        giaithua = giaithua*i;
    }
    printf("%d",giaithua);
    return 0;
}