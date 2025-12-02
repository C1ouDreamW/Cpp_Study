#include<stdio.h>
#include<string.h>
char ans[100000];
int isFind = 0;
void match(char str[], char ch1, char ch2) {

	int i, j;
	int idx = 0;
	for (i = 0; i < strlen(str); i++) {
		if (str[i] == ch1) {
			ans[idx++] = str[i];
			for (j = i + 1; j < strlen(str); j++) {
				ans[idx] = str[j];
				if (ans[idx++] == ch2) {
					isFind = 1;
					return;
				}
			}
			return;
		}
	}

}

int main() {
	char str[100000];
	gets(str);
	char ch1, ch2;
	scanf("%c %c", &ch1, &ch2);
	match(str, ch1, ch2);
	if (isFind) {
		printf("%s", ans);
	}
	else {
		printf("\n");
	}
	return 0;
}
