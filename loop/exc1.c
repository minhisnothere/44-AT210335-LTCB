#include<stdio.h>
int main(){
	long long s=0;
	for (int i=0; i<10; i++){
		long long a=0;
		scanf("%ld",&a);
		s+=a;
	}
	printf("%ld",s);
} 
