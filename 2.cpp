#include <iostream>
#include <string>

using namespace std;

// count all the specific char in the whole array of strings
int countAllSpecificChars(string sArr[], int arrLength, char specificChar) {
	int count = 0;//bedoone meghdar dehi avalie ndmitavan meghdar motaghayer ra afzayesh dad(count=0)
	for (int i = 0; i < arrLength; ++i)// i < arrLength mosavi nabayad dashte bashad
		for (int j = 0; j < sArr[i].size(); ++j)// j < sArr[i].size() mosavi nabayad dashte bashad
			// if the jth char of the string is the specific char
			if (sArr[i][j] == specificChar)//baraye barresi shart daroon if bayad az == estefade shavad 
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
	char findIt;
	cin >> findIt;
	cout << countAllSpecificChars(sArr, 4, findIt);
}
