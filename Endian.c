#include <stdio.h>

// 判断该CPU大端还是小端

int main() {
	int a = 0x11223344;
	char *b = (char *)(&a);

	if (*b == 0x11) {
		printf("Big Endian!\n");
	}
	else {
		printf("Little Endian!\n");
	}
	
	return 0;
}
