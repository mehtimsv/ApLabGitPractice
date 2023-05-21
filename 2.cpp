#include <iostream>
#include <string>

using namespace std;

// count all the specific char in the whole array of strings
int countAllSpecificChars(string sArr[], int arrLength, char specificChar) {
	int count = 0;			//counter shoud be zero at first
	for (int i = 0; i < arrLength; ++i)			//when the lengh of a araay is n, the last element of that is arr[n-1].so i should not be equal to arrlength
		for (int j = 0; j < sArr[i].size(); ++j)		//when the lengh of a araay is n, the last element of that is arr[n-1].so j should not be equal to  sArr[i].size()
			// if the jth char of the string is the specific char
			if (sArr[i][j] == specificChar)			//to compare two thing we should use two =.
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
