#include<stdio.h>
#include<math.h>
int main(){
	long long a;
	long long s=0;
	scanf ("%ld",&a);
	for (int i=1; i<=(pow(a,0.5));i++){
		if (a%i==0){
			s+=i+a/i;
		}
	}
	if (a*2==s){
		printf("%ld la so hoan hao",a);
	}else{
		printf("%ld khong la so hoan hao",a);
	}
	
}
