#include <iostream>
#include <string>
#include <algorithm> // Required for sort()

using namespace std;

bool areAnagrams(string s1, string s2) {
    // Step 1: Check if lengths are equal
    if (s1.length() != s2.length()) {
        return false;
    }

    // Step 2: Sort both strings
    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());

    // Step 3: Compare sorted strings
    return s1 == s2;
}

int main() {
    string str1 = "listen";
    string str2 = "silent";

    if (areAnagrams(str1, str2)) {
        cout << "The strings are anagrams." << endl;
    } else {
        cout << "The strings are NOT anagrams." << endl;
    }

    return 0;
}