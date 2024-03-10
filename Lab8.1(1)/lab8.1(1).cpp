#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>

using namespace std;

int FindThirdDotIndex(const char* str) {
    int dotCount = 0;
    for (int i = 0; str[i] != '\0'; ++i) {
        if (str[i] == '.') {
            dotCount++;
            if (dotCount == 3) {
                return i;
            }
        }
    }
    return -1;
}

char* ReplaceEveryFourthCharWithDot(const char* str) {
    size_t len = strlen(str);
    char* newStr = new char[len + 1];
    strcpy(newStr, str);
    for (size_t i = 3; i < len; i += 4) {
        newStr[i] = '.';
    }

    return newStr;
}

int main() {
    char str[101];
    cout << "Enter string:" << endl;
    cin.getline(str, 100);

    int thirdDotIndex = FindThirdDotIndex(str);
    cout << "Index of the third dot: " << thirdDotIndex << endl;

    char* dest = new char[151];
    dest = ReplaceEveryFourthCharWithDot(str);
    char* modifiedStr = ReplaceEveryFourthCharWithDot(str);
    cout << "Modified string: " << modifiedStr << endl;
    cout << "Modified string (result): " << dest << endl;

    delete[] modifiedStr;
    return 0;
}