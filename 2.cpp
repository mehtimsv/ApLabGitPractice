#include <iostream>
#include <string>

using namespace std;

// count all the specific char in the whole array of strings
int countAllSpecificChars(string sArr[], int arrLength, char specificChar) {
    int count=0;
    cout<<12<<endl;
    for (int i = 0; i < arrLength; i++) {
        cout<<13<<endl;
        for (int j = 0; j < sArr[i].size(); j++) {
            cout<<14<<endl;
            // if the jth char of the string is the specific char
            if (sArr[i][j] == specificChar)
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
    cout<<"11"<<endl;
    char findIt;
    cin >> findIt;
    cout << countAllSpecificChars(sArr, 4, findIt);
}