#include<bits/stdc++.h>
using namespace std;

string caesarCipher(string s, int k) {
    string ans;
    int str_iterator = 0;
    // int str_size = s.length();
    while (str_iterator < s.length() ) {
        int c = s[str_iterator];
        char curr;
        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
            if (c >= 'a' && c <= 'z') {
                c = c - 'a' + 1;
                curr = ((c + k) % 26) + 'a' - 1;
            }
            if (c >= 'A' && c <= 'Z') {
                c = c - 'A' + 1;
                curr = ((c + k) % 26) + 'A' - 1;

            }
            // cout << curr << " ";
            ans += curr;
        } else {
            ans += s[str_iterator];
        }
        str_iterator++;
        // cout << ans << endl;
    }
    // cout << ans << endl;
    return ans;
}

int main() {
    string str = "middle-Outz";
    int k = 2;
    cout << caesarCipher(str, k);
}