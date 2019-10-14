//Programa realizado por Luis Walls
#include<stdio.h>
#include<stdlib.h>

long fact(int n);
int main(){
	int n;
	long x;
	printf("Ingrese el no. del cuál desea saber su factorial: ");
	scanf("%d",&n);
	x=fact(n);
	printf("%ld\n",x);
	return 0;
}

long fact (int n){
	if (n==0)
		return 1;
	else
		return n*fact(n-1);
}
