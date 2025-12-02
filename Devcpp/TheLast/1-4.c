#include<stdio.h>
#include<string.h>

char s[10000];

int main(){
	int ch;
	gets(s);
	int i;
	for(i = strlen(s);i>=0;i--){
		if(s[i] == ' '){
			printf("\n");
		}else{
			printf("%c",s[i]);
		}
	}
	return 0;
}
