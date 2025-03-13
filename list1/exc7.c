#include <stdio.h>
#include<math.h>
#include<stdlib.h>
int main(){
	int n;
	printf("nhap so luong phan tu cua mang:\n");
	scanf("%d",&n);
	int a[n];
	printf("nhap cac phan tu cua mang:");
	for (int i=0; i<n; i++){
		scanf("%d",&a[i]);
	}
	for (int i=0; i<n; i++){
		int p=i;
		for (int j=i; j<n; j++){
			if (a[j]<a[i]){
				p=j;
			}
		}
			int t=a[i];
			a[i]=a[p];
			a[p]=t;
		
	}
 	for (int i=0; i<n; i++){
		printf("%d ",a[i]);
		}
}
