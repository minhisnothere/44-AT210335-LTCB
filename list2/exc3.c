#include <stdio.h>
int main (){
	int m,p,n;
	printf("nhap so hang cua mang A :\n");
	scanf("%d",&m);
	
	printf("nhap so cot cua mang A:\n");
	scanf("%d",&p);
	
	printf("luu y: so hang cua B bang so cot cua A\n");
	
	printf("nhap so cot cua mang B:\n");
	scanf("%d",&n);
	
	int a[m][p];
	int b[p][n];
	printf("nhap mang 1:\n");
	for (int i=0; i<m; i++){
		for (int j=0; j<p; j++){
			scanf("%d",&a[i][j]);
		}
	}
	printf("nhap mang 2:\n");
	for (int i=0; i<p; i++){
		for (int j=0; j<n; j++){
			scanf("%d",&b[i][j]);
		}
	}
	printf("tich 2 mang la:\n");
	for (int i=0; i<m; i++){
		for (int j=0; j<n; j++){
			int t=0;
			for (int k=0; k<p; k++){
				t+=a[i][k]*b[k][j];
			}
			printf("%d ",t);
		}
		printf("\n");
	}
}
