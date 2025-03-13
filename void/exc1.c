#include <stdio.h>
#include <math.h>
void mu(int x, int y){
	long long a=pow(x,y);
	printf("%ld",a);
}
int main(){
	int x,y;
	scanf("%d%d",&x,&y);
	mu (x,y);
}
