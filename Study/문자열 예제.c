//// 연습 1
///사용자 입력 그대로 출력
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define BUFFER_SIZE 20

int main()
{
	char buffer[BUFFER_SIZE];
	while (1) {
		printf("$ ");
		int len = read_line(buffer, BUFFER_SIZE);
		printf("%s:%d\n", buffer, len);
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


///연습 2
/// 불필요한 공백 제거
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h> // white sapce 문자인지 검사하는 isspace 함수를 제공

int main()
{
	char line[80];
	while (1) {
		printf("$ ");
		int length = read_line_with_compression(line, 80);
		printf("%s:%d\n", line, length);
	}
	return 0;
}

int read_line_with_compression(char compressed[], int limit) {
	int ch, i = 0;
	while ((ch = getchar()) != '\n') {
		if (i < limit - 1 && (!isspace(ch) || i > 0 && !isspace(compressed[i - 1])))
			compressed[i++] = ch;
	}
	if (i > 0 && isspace(compressed[i - 1])) // 마지막 문자가 공백이면
		i--;
	compressed[i] = '\0';
	return i;
}
