#include<stdio.h>
#include<math.h>
int main(){
	long long a;
	scanf ("%d",&a);
	for (long long i=1; i<=(pow(a,0.5));i++){
		if (a%i==0){
			printf("%ld %ld ", i , a/i );
		}
	}
}
