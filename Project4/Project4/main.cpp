#include <stdio.h>

int main(void)

{
	const char* title = "=== Char/String & Escapes ===";
	char ch = 'A';
	int code = (int)ch;
	const char *message = "First Line\n\tIndented Second line\nThird line";
	
	float a = 95.0f;
	float b = 79.8f;
	float avg = (a + b) / 2.0f;

	printf("%s\n\n", title);
	printf("char : %c, code: %d\n\n", ch, code);
	printf("Message: \n%s\n\n", message);

	printf("Quotes: \"double quotes\"and 'single quotes'\n");
	printf("Backslash:  \\\n");
	printf("Average: [%8.2f]\n", avg);

	return 0;
}