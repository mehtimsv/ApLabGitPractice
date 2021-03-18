#include<stdio.h>//last with cmd
const char* f(const char** p) {
	const char* q = (p + 1)[1];///behtare kkoroojie tabe.
	return q;
}
int main() {
	const char* str[] = { "Wish","You","Best",":D" };
	printf("%c%c ", *f(str), *(f(str) + 1));
	printf("%c%c%c%c\n", **str, *(*(str + 1) + 1), *((str + 2)[-1] + 1), **&*(&str[-1] + 1));
}
