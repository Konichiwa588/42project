#include <stdio.h>

size_t strlen(const char *s) {
	char *len = (char *)s;

	// added a null check.
	// if passed string points to NULL, function will return 0.
	while (len && *len != '\0')
		len++;
	return (len - s);
}

static void print_world(void) {
	const char *string = "world";

	for (int i = 0; i < strlen(string); i++) {
		printf("%c", string[i]);
	}
}

int main(void) {
	print_world();
	return 0;
}
