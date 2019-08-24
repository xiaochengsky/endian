#include <stdio.h>

// 判断该CPU大端还是小端
// 增加commit
// 增加 License 
// 测试工作区和暂存区的区别
// 两次 git add 一起提交

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
