#include <stdio.h>
int main(){
	char str[100];
	int start=0,end=0;
	printf("enter a string: ");
	scanf("%s",str);
	while(str[end]!='\0'){
		end++;
	}
	end--;
	while(start<end){
		if(str[start]!=str[end]){
			printf("string is not palindrome");
			return 0;
		}
		start++;
		end--;
}
		printf("string is palindrome");
		return 0;
	}
