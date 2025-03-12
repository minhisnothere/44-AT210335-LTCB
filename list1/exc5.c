#include <stdio.h>
int main(){
	int x,n, count=0;
	printf ("nhap so x:\n");
	scanf("%d",&x); 
	printf ("nhap so phan tu cua mang:\n");
	scanf("%d",&n);
	int a[100];
	printf("nhap cac phan tu cua mang:\n");
	for (int i=0; i<n; i++){
		scanf ("%d",&a[i]);
		if (a[i]==x){
			count+=1;
		}
	} 
	printf("phan tu %d xuat hien trong mang %d lan",x, count);
}
