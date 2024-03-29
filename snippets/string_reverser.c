/***********************************************************************
*
* FILENAME: string_reverser.c
*
* DESCRIPTION: Reverse a given string using stack
*
* AUTHOR: gfvante - 07 August 2019
*
***********************************************************************/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "type_definitions.h"
#include "stack_list.h"

char *string_reverse(char *text);

int main(int argc, char * argv[])
{
	char*text = "I'm a string!";
	char* rtext = string_reverse(text);
	printf("%s\n", rtext);
	return 0;
}

char *string_reverse(char *text)
{
	int length = strlen(text);
	printf("%d\n",length );
	Node *stack = stack_new();
	char *rstring = malloc(length + 1);
	// push characters to stack
	for (int i = 0; i < length; i++)
		stack_push(text[i], &stack);
	// pop characters, reversing string
	for (int i = 0; i < length; i++) {
		rstring[i] = stack_top(stack);
		printf("%s\n", rstring);
		stack_pop(&stack);
	}
	rstring[length] = '\0';
	return rstring;
}
