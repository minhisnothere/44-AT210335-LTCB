#include <stdio.h>
void xep(int a[], int m){
	for (int i=0; i<m; i++ ){
		for (int j=i; j<m; j++){
			if (a[i]>a[j]){
				int p=a[j];
				a[j]=a[i];
				a[i]=p;
			}
		}
	}
/*
	for (int i=0; i<m; i++){
		printf("%d ",a[i]);
	}
	printf("\n");
*/
}
void com (int a[], int b[], int m, int n ){
	int c[2000];
	int k=0;
	int l=0;
	int c1=0;
	int c2=0;
		
	
		for (int i=0; i<n;i++){
			for (int j=l; j<m; j++){
				if (b[i]>a[j]){
					c[k]=a[j];
					k++;
					c1++;
				}else{
					c[k]=b[i];
					k++;
					l=j;
					c2++;
					break;
				}
			}
		}
		if (c1<m){
			for (int i=c1; i<m; i++){
				c[k]=a[i];
				k++;
			}
		}
		if (c2<n){
			for (int i=c2; i<n; i++){
				c[k]=b[i];
				k++;
			}
		}
	for (int i=0; i<m+n; i++){
		printf("%d ",c[i]);
	}
}
int main(){
	int m,n;
	printf("nhap so luong phan tu mang 1: \n");
	scanf("%d",&m);
	printf ("nhap so luong phan tu mang 2: \n");
	scanf("%d",&n);
	int a[1000]={0};
	int b[1000]={0};
	printf("nhap mang 1:\n");
	for (int i=0; i<m; i++){
		scanf("%d",&a[i]);
	}
	printf("nhap mang 2:\n");
	for (int i=0; i<n; i++){
		scanf("%d",&b[i]);
	}
	xep(a,m);
	xep(b,n);
	com(a,b,m,n);
} 
