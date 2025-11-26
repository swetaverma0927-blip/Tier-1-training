#include <stdio.h>
int main() {
    char str[1000];
    int i,count = 0;
    printf("enter string:");
    fgets(str,sizeof(str),stdin);
    
    for(i=0;str[i]!='\0';i++){
      if((str[i]!='A'&& str[i]!='E'&& str[i]!='I'&& str[i]!='O'&& str[i]!='U'&&
	     str[i]!='a'&& str[i]!='e'&& str[i]!='i'&& str[i]!='o'&& str[i]!='u') &&
		(('a'<=str[i] && str[i]<='z')|| ('A'<=str[i] && str[i]<='Z'))){
      	count++;
}  
}
	  	printf("number of consonant %d",count);
	  	
	return 0;
	}
