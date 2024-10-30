#include <stdio.h>
#include <stdlib.h>

int string_length(char sentence[]) {
        int i=0;
    while(sentence[i]!='\0'){
            i++;
    }
   return i;
}



int main(){
	
	int length = 0;
	
	printf("input string size\n");
	scanf("%d",&length);
		
	char *string = (char*)malloc(length);

	printf("input string\n");
	scanf(" %[^\n]%*c", string);

	printf("%d\n",length);
	char *string2 = (char*)malloc(sizeof(char));

	for (int i = 0; i<length; i++){
		if (i > 0){
			char *string2=realloc(string2,i*sizeof(char));
			char *string=realloc(string,length-i);
		}
		string2[i] = string[length-i-1];
	}

	printf("%s\n", string2);

	free(string);
	free(string2);	
	return 0;
}
