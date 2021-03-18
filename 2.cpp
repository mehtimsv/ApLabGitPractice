#include <iostream>
#include <string>

using namespace std;

// count all the specific char in the whole array of strings
int countAllSpecificChars(string sArr[], int arrLength, char specificChar) {
    int count = 0;// count meghdar dehi nashodeh bood
    for (int i = 0; i < arrLength; ++i) // = dar <= lazem nist
        for (int j = 0; j < sArr[i].length(); ++j) // = dar <= lazem nist
            // if the jth char of the string is the specific char
            if (sArr[i][j] == specificChar) // bayad == gharar midad
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
