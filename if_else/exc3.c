#include <stdio.h>
int main(){
	float a;
	scanf("%f",&a);
	if (a>=9){
		printf("Xuat xac");
	} else if(a>=8){
		printf("Gioi");
	}else if(a>=7){
		printf("Kha");
	}else if (a>=5){
		printf ("Trung binh");
	}else{
		printf("Yeu");
	}
}
