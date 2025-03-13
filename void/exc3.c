#include <stdio.h>
#include <math.h>
long long mu(int x, int a, int b){
	int c=a+b;
	a=b;
	b=c; 
	x--;
	if (x>0){
		return mu(x,a,b);
	}
}
int main(){
	int x,c;
	long long a=0, b=1;
	scanf("%d",&x);
	c=mu (x,a,b);
	printf("%ld",c);
}
