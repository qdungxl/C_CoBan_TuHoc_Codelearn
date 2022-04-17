#include<stdio.h>

int main() {
	int n;
	scanf("%d",&n);
	int i = 1;
	int dem =0;
	while(i<=n)
	{
		if(n%i==0) dem =dem +1;
		i = i+ 1;
	}
	printf("%d",dem);
	return 0;
}