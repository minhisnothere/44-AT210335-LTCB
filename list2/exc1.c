#include <stdio.h>
int main (){
	int a[3][3]={{1,2,4},{1,3,5},{1,4,6}};
	int b[3][3];
	printf("mang khai bao co dang:\n");
	for (int i=0; i<3; i++){
		for (int j=0;j<3;j++){
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	for (int i=0; i<3; i++){
		printf("nhap dong %d: ",i+1);
		for (int j=0; j<3; j++){
			scanf("%d",&b[i][j]);
		}	
		printf("\n");
	}
	printf("mang da nhap co dang:\n");
	for (int i=0; i<3; i++){
		for (int j=0;j<3;j++){
			printf("%d ",b[i][j]);
		}
		printf("\n");
	}
}
