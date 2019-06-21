#include<stdio.h>

int main(){
	int fibo (int n){
	int a=0;
	int b=1;
	int c;
	if (n==0){
		printf("%d\n",a);
		return a;
	}
	if (n==1){
		printf("%d\n",b);
		return b;
	}
	for (int i=1;i<n;i++){
		c=a+b;
		a=b;
		b=c;
	}
	return c;
	}

	int x=fibo(15);
	printf("%d\n",x);
	

}
