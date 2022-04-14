#include <iostream>
using namespace std;

const char *f(const char **p)
{
	auto q = (p + sizeof(char))[1];
	return q;
}
int main()
{
	const char *str[] = {"Wish", "You", "Best", ":D"};
	cout << *f(str) << *(f(str) + 1) << endl;
	cout << **str << *(*(str + 1) + 1) << *((str + 2)[-1] + 1) << **&*(&str[-1] + 1) << endl;
}
