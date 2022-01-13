#include<stdio.h>

void main(int argc, char *argv[]){
	
	FILE *f;
	char c;
	char s[30]="abcdefghijklmnopqrstuvwxyz";
	int count[30];
	int i;
	int max=0;
	int maxp=0;
	for(i=0; i<30; i++){
		count[i]=0;
		f=fopen(argv[1],"r");
	}
	while((c=getc(f))!=EOF){
		putchar(c);

		for(i=0; s[i]!='\0'; i++){
			if(c==s[i] || c==(s[i]-32))
			count[i]++;
		}
	}
	fclose(f);
	for(i=0; s[i]!='\0'; i++){
		if(max < count[i]){
			max=count[i];
			maxp=i;
		}
	}
	printf("The Most frequent letter is '%c'. It appeared %d times.\n",s[maxp],max);

}

