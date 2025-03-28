#include <stdio.h>
int main (){
	int n;
	printf("nhap vao so n:\n");
	scanf("%d",&n);
	int re[n][n]={0};
	int c=1;
	int h1=0, h2=n-1, c1=0, c2=n-1;
	while (h1<=h2 && c1<=c2 ){
		for (int i=c1; i<=c2 ; i++){
			re[h1][i]=c;
			c++;
		}
		h1++;
		for (int i=h1; i<=h2; i++){
			re[i][c2]=c;
			c++;
		}
		c2--;
		for (int i=c2;i>=c1;i--){
			re[h2][i]=c;
			c++;
		}
		h2--;
		for (int i=h2; i>=h1; i--){
			re[i][c1]=c;
			c++;
		}
		c1++;
	}
	
	for (int i=0; i<n; i++){
		for (int j=0; j<n; j++){
			printf("%5d ",re[i][j]);
		}
		printf("\n");
	}
}
