#include <stdio.h>
#include <math.h>
int main(){
	double a,b,c,d;
	scanf("%lf%lf%lf",&a,&b,&c);  
	d= b*b-4*a*c;
	if (d<0){
		printf("Phuong trinh vo nghiem");
	}else if(d==0){
		double x= (-b)/(2*a);
		printf("Phuong trinh co nghiem kep x1 = x2 = %lf",x);
	}else{
		double hehe= (-b-pow(d,0.5))/(2*a);
		double hihi= (-b+pow(d,0.5))/(2*a);
		printf("Phuong trinh co 2 nghiem x1 = %lf x2 = %lf",hehe, hihi);
	}
}
