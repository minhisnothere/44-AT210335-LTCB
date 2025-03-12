#include<stdio.h>
#include<math.h>
int main(){
	int j=1;
	int s=0;
	while (j<=99)
	{
		s+=j;
		j+=2;
	}
	printf ("%d",s);
}
