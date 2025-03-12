#include<stdio.h>
#include<math.h>
int main(){
	long long a,b;
	scanf ("%ld",&a);
	scanf ("%ld",&b);
	long long c=a*b;
	while (a!=b){
		if (a>=b){
			a-=b;
		}else{
			b-=a;
		}
	} 
	printf("UCLN la %ld\n",a);
	printf("BCNN la %ld", c/a );
}
