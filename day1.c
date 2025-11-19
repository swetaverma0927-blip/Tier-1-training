#include <stdio.h>
int main(){
	int i,number,count=0;
	printf("enter a number");
	scanf("%d",&number);
	for(i=2;i<=number;i++){
	if(number%i==0){
		count++;
		break;
	}
	}
	if(count==0 && number!=1){
		printf("%d is prime number",number);
	}
	else{
		printf("%d is not prime",number);
	}
	return 0;
}
