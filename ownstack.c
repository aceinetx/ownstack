#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

uint8_t stack[512];

uint64_t f(void *);

int main() {
	uint64_t ret = f(stack + sizeof(stack));
	printf("returned %ld\n", ret);

	for (int i = 0; i < sizeof(stack); i++) {
		printf("%c", stack[i]);
	}

	return 0;
}
