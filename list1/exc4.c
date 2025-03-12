#include <stdio.h>
int main(){
	int n, max=-2147483648, min=2147483647, pmax, pmin;
	printf ("nhap so luong phan tu cua mang:\n");
	scanf("%d",&n); 
	int a[100];
	printf("nhap cac phan tu cua mang:\n");
	for (int i=0; i<n; i++){
		scanf ("%d",&a[i]);
		if (a[i]>max){
			max=a[i];
			pmax=i;
		}
		if (a[i]<min){
			min=a[i];
			pmin=i;
		}
	} 
	printf("Phan tu lon nhat trong mang la %d o vi tri %d\n",max, pmax);
	printf("Phan tu nho nhat trong mang la %d o vi tri %d",min, pmin);
}
