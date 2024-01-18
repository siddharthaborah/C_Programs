#include <stdio.h>
int countchar(char str[]);
int main(){
	int i, lenOfStr, countWhiteSpace;

	char str[50];
	printf("Enter the string: ");
	gets(str);
	
	lenOfStr = countchar(str);
	printf("length of character: %d",lenOfStr);
	
	countWhiteSpace = 0;
	for(i=0; i<lenOfStr; i++){
		if (str[i] != ' ')
			continue;
		else
			countWhiteSpace = countWhiteSpace + 1;
	}
	printf("\nWhitespace in the string: %d",countWhiteSpace);
	return 0;
}

int countchar(char str[]){
	int count=0, i;
	for(i=0; str[i]!='\0'; i++){
		count++;
	}
	return count;
}
