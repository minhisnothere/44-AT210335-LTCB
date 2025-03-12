#include<stdio.h>
#include<math.h>
int main(){
  long long a;
	long long s=1;
	scanf ("%ld",&a);
	for (int i=1; i<=a; i++){
		s*=i;
	}
	printf("%ld", s);
}
