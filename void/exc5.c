#include <stdio.h>
#include <math.h>
void hai(int x){
	int a=x%2;
	x=x/2; 
	if (x>0){
		hai(x);\
	}
	printf("%d",a); 
}
void tam (int x){
	int a=x%8;
	x=x/8; 
	if (x>0){
		tam(x); 
	} 
	printf ("%d",a); 
} 
int main(){
	int x;
	scanf("%d",&x);
	hai(x);
	printf("\n"); 
	tam(x);
	printf("\n"); 
	printf("%X",x); 
}
