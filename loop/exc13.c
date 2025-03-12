#include<stdio.h>
#include<math.h>
int main (){
	int j=1, x;
	long long giaithua=1; 
	double tong=1;
	float e, o=1;
	printf("nhap vao so x ");
	scanf("%d",&x);
	printf("nhap vao so eps ");
	scanf("%f",&e); 
	while (fabs(o)>e){
		o=pow(x,j)/giaithua;
		tong+=o;
		j+=1;
		giaithua*=j; 
	}
	printf("e mu %d = %lf ",x, tong);
}
