#include<stdio.h>
#include<math.h>
int main(){
	long long n, a=1, b=1, s=0;
	scanf ("%ld",&n);
	for (long long i=1; i<=n; i++){
		s=a+b;
		a=b;
		b=s;
	}
	printf("%ld",s);
}
