#include <iostream>
#include <string>

using namespace std;

#define DEBUG_MODE false

class Log
{
public:
    Log(const std::string &funcName)
    {
        if (DEBUG_MODE)
        {
            std::cout << funcName << ": ";
        }
    }

    template <class T>
    Log &operator<<(const T &v)
    {
        if (DEBUG_MODE)
        {
            std::cout << v;
        }
        return *this;
    }

    ~Log()
    {
        if (DEBUG_MODE)
        {
            std::cout << "" << std::endl;
        }
    }
};

#define DEBUG Log(__FUNCTION__)

// count all the specific char in the whole array of strings
int countAllSpecificChars(string sArr[], int arrLength, char specificChar)
{
    int count;

    //for (int i = 0; i <= arrLength; ++i)
    for (int i = 0; i < arrLength; ++i)
    {
        DEBUG << "array size :" << sArr[i].size();

        for (int j = 0; j <= sArr[i].size(); ++j)
        {
            // if the jth char of the string is the specific char
            DEBUG << "arr[" << i << "][" << j << "]" << sArr[i][j];
            //if (sArr[i][j] = specificChar)
            if (sArr[i][j] == specificChar)
                count++;
        }
    }
    return count;
}

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