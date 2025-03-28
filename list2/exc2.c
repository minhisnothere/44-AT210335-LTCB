#include <stdio.h>
int main (){
	int m1,m2;
	printf("nhap so hang cua mang :\n");
	scanf("%d",&m1);
	printf("nhap so cot cua mang :\n");
	scanf("%d",&m2);
	int a[m1][m2];
	int b[m1][m2];
	printf("nhap mang 1:\n");
	for (int i=0; i<m1; i++){
		for (int j=0; j<m2; j++){
			scanf("%d",&a[i][j]);
		}
	}
	printf("nhap mang 2:\n");
	for (int i=0; i<m1; i++){
		for (int j=0; j<m2; j++){
			scanf("%d",&b[i][j]);
		}
	}
	printf("tong 2 mang la:\n");
	for (int i=0; i<m1; i++){
		for (int j=0; j<m2; j++){
			printf("%d ",a[i][j]+b[i][j]);
		}
		printf("\n");
	}
}
