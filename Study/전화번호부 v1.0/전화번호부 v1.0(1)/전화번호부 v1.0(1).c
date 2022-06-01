#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define CAPACITY 100
#define BUFFER_SIZE 100

char* names[CAPACITY];		/* names */
char* numbers[CAPACITY];	/* phone numbers 051-234-6787*/
int n = 0;					/* number of people in phone directory */

void add();
void find();
void status();
void remove();

int main() {
	char command[BUFFER_SIZE];
	while (1)
	{
		printf("$ ");
		scanf("%s", command);

		if (strcmp(command, "add") == 0)
			add();
		else if (strcmp(command, "find") == 0)
			find();
		else if (strcmp(command, "status") == 0)
			status();
		else if (strcmp(command, "delete") == 0)
			remove();
		else if (strcmp(command, "exit") == 0)
			break;
	}
	return 0;
}
