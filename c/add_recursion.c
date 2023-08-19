#include <stdio.h>
int add(int ,int );
int main(){
	int a,b,c;
	printf("Enter the two number:");
	scanf("%d %d",&a,&b);
	c=add(a,b);
	printf("Sum of two Numbers: %d \n ",c);
	return 0;
}

int add(int x,int y){
	if(y==0){
		return x;
	}
	else{
		return(1+add(x,y-1));
	}
}
