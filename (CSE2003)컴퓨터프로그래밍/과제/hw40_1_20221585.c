#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void split_string(char* str, char* string_1, char* string_2)
{
	int strlens = strlen(str);
	strncpy(string_1, str, strlens / 2);
	strcpy(string_2, str + strlens / 2);
}
void main()
{
	char array[50];
	scanf("%s", array);
	char* str, * string_1, * string_2;
	str = array;
	string_1 = (char*)malloc(sizeof(char*) * (strlen(str) / 2 + 1));
	string_2 = (char*)malloc(sizeof(char*) * (strlen(str) - strlen(str) / 2 + 1));
	split_string(str, string_1, string_2);
	printf("[%s] [%s]\n", string_1, string_2);
	free(string_1);
	free(string_2);
}