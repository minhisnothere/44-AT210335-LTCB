#include <stdio.h>
int main(){
	int n, count=0;
	printf ("nhap so phan tu cua mang:\n");
	scanf("%d",&n);
	int a[100];
	printf("nhap cac phan tu cua mang:\n");
	for (int i=0; i<n; i++){
		scanf ("%d",&a[i]);
		if (a[i]<0){
			a[i]=0;
		}
			printf("%d ", a[i]);
	} 
}
