#include <stdio.h>
int main() {
    char str[1000];
    int i,count = 0;
    printf("enter string");
    fgets(str,sizeof(str),stdin);
    
    for(i=0;str[i]!='\0';i++){
      if(str[i]=='A'|| str[i]=='E'|| str[i]=='I'|| str[i]=='O'|| str[i]=='U'||
	     str[i]=='a'|| str[i]=='e'|| str[i]=='i'|| str[i]=='o'|| str[i]=='u'){
      	count++;
	  }
}
	  	printf("number of vowels %d",count);
	  	
	return 0;
	}
