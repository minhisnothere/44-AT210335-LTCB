#include <stdio.h>
int main(){
	long long a,b,c=0;
	scanf("%ld%ld",&a,&b);
	if (b==2){
		if ((a%4==0 && a%100!=0)|| a%400==0){
			c=29;
		}else{
			c=28;
		}
	}else if (b==4 || b==6 || b==11 || b==9){
		c=30;
	}else if (b==1 || b==3|| b==5 || b==7 ||b==8 || b==10 || b==12){
		c=31;
	}
	if (a<0 && c!=0){
		printf("Yeu cau nhap nam thoa man");
	}
	if (c==0 && a>=0){
		printf("Yeu cau nhap lai thang thoa man");
	}
	if (c==0 && a<0){
		printf("Yeu cau nhap lai nam, thang thoa man");
	}
	if (a>=0 && c!=0){
		printf ("Thang %ld nam %ld co %ld ngay",b,a,c);
	}
}
