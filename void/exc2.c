#include <stdio.h>
#include <math.h>
long long mu(int x, long long n){
	n=n*x;
	x--;
	if (x>0){
		return mu(x, n);
	}
}
int main(){
	int x;
	long long n=1,a=0;
	scanf("%d",&x);
	a=mu (x,n);
	printf("%ld",a);
}
