#include <iostream>
#include <string>

using namespace std;

// count all the specific char in the whole array of strings
int countAllSpecificChars(string sArr[], int arrLength, char specificChar) {

    int count = 0;//meghdardehi avaliye.
    for (int i = 0; i < arrLength; ++i)///alamat = dige nemikhad.
        for (int j = 0; j < sArr[i].size(); ++j)
            // if the jth char of the string is the specific char
            if (sArr[i][j] == specificChar)///bayad bejaye =, == mizashtim.
                count++;
    return count;
}

int main()
{
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