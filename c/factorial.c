
#include <stdio.h>
long int fact(int x){
		if(x<1){
			return 1;
		}
		else{
			return x*fact(x-1);
		}
	}
int main() {
	int n,i,j=1;
	printf("Enter the number:");
	scanf("%d",&n);
	/*for(i=1;i<=n;i++){
		j=j*i;
	}*/
	printf("Factorial of %d is : %d \n",n,fact(n));
	return 0;
}
