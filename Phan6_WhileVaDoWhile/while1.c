#include<stdio.h>

int main() {
	int n;
	scanf("%d", &n);
	while (n <= 100) {
		if(n%2==0) printf("%d ", n);
		n = n + 1;
	}
	return 0;
}