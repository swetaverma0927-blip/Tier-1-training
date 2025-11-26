#include<stdio.h>
#include<string.h>
int main(){
	char n1[20];
	printf("enter the input:\n");
	scanf("%s",&n1);
	char n2[20];
	printf("enter the input:\n");
	scanf("%s",&n2);
	int i=0,arr[26];
	for(i=0;i<26;i++){
		arr[i]=0;
	}
	while(n1[i]!='\0'){
	arr[n1[i]-'a']++;
	i++;
	}
	while(n2[i]!='\0'){
	arr[n2[i]-'a']--;
	i++;
	}
	for(i=0;i<26;i++){
		if(arr[i]!=0){
		printf("The words are not aragrams");
		}
		printf("the words are arograms");
		return 0;
	}
}
