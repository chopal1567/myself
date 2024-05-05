#include<stdio.h>

int main() {
	int num1, num2;
	char op;


	printf("수식을 입력해 주세요");
	scanf("%d %c %d", &num1, &op, &num2);
	if (op == '+')
		printf("%d %c %d", num1, op, num2);
	else if (op == '-')
		printf("%d %c %d", num1, op, num2);
	else if (op == '*')
		printf("%d %c %d", num1, op, num2);
	else if (op == '/')
		printf("%d %c %d", num1, op, num2);
	else if (op == '%')
		printf("%d %c %d", num1, op, num2);
}




 