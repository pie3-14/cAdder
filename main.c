#include <stdio.h>

#include "add.h"

int main() {
	int a, b = 0;
	printf("더할 피연산자 두 개를 입력하세요:");
	scanf("%d %d", &a, &b);

	printf("%d\n", Add(a, b));

	return 0;
}
