#include <stdio.h>

size_t strlen(const char *s) {
	char *len = (char *)s;

	while (*len != '\0')
		len++;
	return (len - s);
}

static void print_random_string(void) {
	const char *string = "random string";

	for (int i = 0; i < strlen(string); i++) {
		printf("%c", string[i]);
	}
}

int main(void) {
	print_random_string();
	return 0;
}
