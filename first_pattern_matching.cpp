#include <iostream>
using namespace std;

void first_pattern_matching(const string &givenStr, const string &pattern)
{
    const int strLength = givenStr.length();
    const int ptrnLength = pattern.length();

    for (int start = 0; start <= (strLength - ptrnLength); start++)
    {
        int nestedStart;
        for (nestedStart = 0; nestedStart < ptrnLength; nestedStart++)
        {
            if (givenStr[start + nestedStart] != pattern[nestedStart])
                break;
        };
        if (nestedStart == ptrnLength)
        {
            cout << "Pattern matched at index : " << (start) << endl;
            break;
        }
    }
};

int main()
{
    string full_name, pattern;
    getline(cin, full_name);
    getline(cin, pattern);
    first_pattern_matching(full_name, pattern);
    return 0;
}