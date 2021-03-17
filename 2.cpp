#include <iostream>
#include <string>
#pragma warning (disable:4996)

#ifndef DEBUG
#define DEBUG 1
#endif
FILE* pFile = fopen("mylogg.txt", "a");

#define debug_printf(fmt, ...) \
do { if (DEBUG) { \
fprintf(pFile, fmt, __VA_ARGS__); \
fclose(pFile); } } while (0)
using namespace std;

// count all the specific char in the whole array of strings
int countAllSpecificChars(string sArr[], int arrLength, char specificChar) {
	int count = 0;/// Count meghdar dehi Avalie nashode.
	for (int i = 0; i < arrLength; ++i)///= ro bardashtam.
		for (int j = 0; j < sArr[i].length(); ++j)// = ro bardashtam .
			// if the jth char of the string is the specific char
			if (sArr[i][j] == specificChar)/// = ezafe kardam dakhele if
				count++;
	return count;
}

int main() {
	string sArr[4] = {
			"I am",
			"in",
			"ap",
			"class"
	};
debug_printf("%d\n", sArr[0].size());///baraye test.
	char findIt;
	cin >> findIt;
  
	cout << countAllSpecificChars(sArr, 4, findIt);
}
