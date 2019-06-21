#include<stdio.h>

int main(){
	int f (int n){
		if (n==0){
			return 0;
		} else if (n==1) {
			return 1;
		}
		return f(n-1)+f(n-2);
	}

	int x=f(15);
	printf("%d\n",x);
}
