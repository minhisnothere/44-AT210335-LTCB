#include <stdio.h>
void doi(int *a,int *b){
	int t= *a;
	*a=*b;
	*b=t;
}
int main (){
	int a,b;
	scanf("%d%d",&a,&b);
	doi(&a,&b);
	printf("%d %d",a,b);
}
