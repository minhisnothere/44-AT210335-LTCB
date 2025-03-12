#include <stdio.h>
int main(){
	int n, cd=0;
	long long sum=0, sumd=0, suma=0;
	printf ("nhap so luong phan tu cua mang:\n");
	scanf("%d",&n); 
	int a[100];
	printf("nhap cac phan tu cua mang:\n");
	for (int i=0; i<n; i++){
		scanf ("%d",&a[i]);
		sum+=a[i];
		if (a[i]>0){
			sumd+=a[i];
			cd+=1;
	} 
	}
	suma=sum-sumd;
	printf("Tong cac so la: %ld\n", sum);
	printf("Tong cac so nguyen duong: %ld\n",sumd);
	printf("Tong cac so nguyen am: %ld\n", suma);
	printf("Trung binh cong cua mang la: %lf\n",sum*1.0/n);
	printf("Trung binh cong cac so nguyen duong la: %lf\n", sumd*1.0/cd);
	printf("Trung binh cong cac so nguyen am la: %lf\n", suma*1.0/(n-cd));
	
}
