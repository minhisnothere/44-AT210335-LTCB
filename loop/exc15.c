#include<stdio.h>
#include<math.h>
int main (){
	int n;
	double a;
	printf("nhap vao so tien gui\n");
	scanf(" %lf",&a);
	printf("nhap vao so thang gui\n");
	scanf("%d",&n);
	printf("%lf", a*pow(1.0045,n));
}
