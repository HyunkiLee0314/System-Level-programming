#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){

	char type[21], smallest_word[21], largest_word[21];

	printf("Enter Word : ");
	scanf("%s", type);
	strcpy(smallest_word, type);
	strcpy(largest_word, type);
	
	while(strlen(type)!=4){

		if(strcmp(type,smallest_word)<0){
			strcpy(smallest_word, type);

		}else if(strcmp(type,largest_word)>0)
			strcpy(largest_word, type);

		
		printf("Enter Word : ");
		scanf("%s", type);
	}

	printf("Smallest word : %s\n", smallest_word);
	printf("Largest word : %s\n", largest_word);

	return 0;

}
