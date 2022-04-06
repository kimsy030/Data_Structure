#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define BUFFER_SIZE 20

int main()
{
	char buffer[BUFFER_SIZE];
	while (1) {
		printf("$ ");
		read_line(buffer, BUFFER_SIZE);
		printf("%s:%d\n", buffer, strlen(buffer));
	}
	return 0;
}

int read_line(char str[], int limit) {
	int ch, i = 0;

	while ((ch = getchar()) != '\n')
		if (i < limit)
		{
			str[i++] = ch;
		}
	str[i] = '\0';
	return i;
}
