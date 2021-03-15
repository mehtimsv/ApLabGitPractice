#include <iostream>
#include <string>
using namespace std;

int countAllSpecificChars(string sArr[], int arrLength, char specificChar);

int main()
{
    string sArr[4] = {
        "I am",
        "in",
        "ap",
        "class"};
    char findIt;
    cin >> findIt;
    cout << countAllSpecificChars(sArr, 4, findIt);
}
