#include <iostream>
#include <string>

using namespace std;

// count all the specific char in the whole array of strings
int countAllSpecificChars(string sArr[], int arrLength, string specificChar) {
    int count;
    string s;
    for (int i = 0; i <= arrLength; ++i)
    {
        for (int j = 0; j <= sArr[i].size(); ++j)
        {
            // if the jth char of the string is the specific char
            s=sArr[i][j];
            if (s == specificChar)
                count++;
        }
    }

    return count;
}

int main() {
    string sArr[4] = {
            "I am",
            "in",
            "ap",
            "class"
    };
    string findIt;
    cin >> findIt;
    cout << countAllSpecificChars(sArr, 4, findIt);
}