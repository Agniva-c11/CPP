#include<iostream>
#include<string>
using namespace std;

bool valid(char ch) {
    return (ch >= 'a' && ch <= 'z') || 
           (ch >= 'A' && ch <= 'Z') || 
           (ch >= '0' && ch <= '9');
}

char toLowercase(char ch) {
    if (ch >= 'A' && ch <= 'Z') {
        return ch - 'A' + 'a';
    }
    return ch;
}

bool checkPalindrome(string st) {
    int s = 0;
    int e = st.length() - 1;
    while (s < e) {
        if (st[s] != st[e]) {
            return false;
        }
        s++;
        e--;
    }
    return true;
}

bool isPalindrome(string s) {
    string temp = "";
    for (int j = 0; j < s.length(); j++) {
        if (valid(s[j])) {
            temp.push_back(toLowercase(s[j]));
        }
    }
    return checkPalindrome(temp);
}

int main() {
    string s;
    cout << "Enter statement: ";
    getline(cin, s);

    if (isPalindrome(s)) {
        cout << "Palindrome" << endl;
    } else {
        cout << "Not Palindrome" << endl;
    }
}
