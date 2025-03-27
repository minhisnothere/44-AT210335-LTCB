#include <stdio.h>
#include <math.h>
void nhap(int a[], int m){
	for (int i=0; i<m; i++){
		scanf("%d",&a[i]);
	}
}
int tong(int a[], int b[],int c[], int m, int n){
	int k=0,y=0;
	if (m>n){
		y=m-n;
		for (int i=0; i<y; i++){
			c[k]=a[i];
			k++;
		}
		for (int i=0; i<m+n-y; i++){
			c[k]=a[k]+b[i];
			k++;
		}
		
		return (m+n-y)/2+y;
	}else if (n>m){
		y=n-m;
		for (int i=0; i<y; i++){
			c[k]=b[i];
			k++;
		}
		for (int i=0; i<m+n-y; i++){
				c[k]=b[k]+a[i];
				k++;
		}
		
		return (m+n-y)/2+y;
	}else{
		for (int i=0; i<m; i++){
			c[k]=a[i]+b[i];
			k++;
		}
		
		return m;
	}

}
void in(int a[], int m){
	for (int i=0; i<m; i++){
		printf("%d ",a[i]);
	}
	printf("\n");
}
void gtr(int a[], int m, int x){
	int t=0;
	int u=m-1;
	for (int i=0; i<m; i++){
		t+=a[i]*pow(x,u);
		u--;
	}
	printf("%d\n",t);
}
int main (){
	int m,n,x;
	printf("nhap so luong he so cua P: \n");
	scanf("%d",&m);
	
	printf("nhap so luong he so cua Q: \n");
	scanf("%d",&n);
	
	int a[m];
	int b[n];
	int c[m+n]={0};
	
	printf("nhap cac he so cua P: \n");
	nhap(a,m);
	
	printf("nhap cac he so cua Q: \n");
	nhap(b,n);
	
	printf("nhap so x: \n");
	scanf("%d",&x);
	
	int k=tong(a,b,c,m,n);
	
	printf("he so cua P la: ");
	in(a,m);
	
	printf("he so cua Q la: ");
	in(b,n);
	
	printf("he so cua T la: ");
	in(c,k);
	
	printf("gia tri cua x la: %d\n",x);
	
	printf("gia tri cua P la: ");
	gtr(a,m,x);
	
	printf("gia tri cua Q la: ");
	gtr(b,n,x);
	
	printf("gia tri cua T la: ");
	gtr(c,k,x);
}
