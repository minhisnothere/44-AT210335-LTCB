#include<stdio.h>
#include<math.h>
int main(){
	int a;
	double s=1;
	float t=0;
	scanf ("%d",&a);
	for (int i=1; i<=a; i++){
		s*=i;
		t+=1.0/s;
	}
	printf("%f", t);
}
