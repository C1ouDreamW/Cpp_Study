#include<stdio.h>
#include<string.h>
char str[300];
int main(){
	gets(str);
	int i;
	int cnt = 0;
	for(i = 0;i<strlen(str);i++){
		if(str[i] >= '0'&&str[i] <= '9'){
			cnt++;
		}
	}
	printf("%d",cnt);
	return 0;
}
