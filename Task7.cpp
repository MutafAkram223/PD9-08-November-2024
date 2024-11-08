#include <iostream>
using namespace std;

int check(string s1, string s2);

int main() {
    string s1, s2;
    cout << "Enter the first string: ";
    cin >> s1;
    cout << "Enter the second string: ";
    cin >> s2;
    int result = check(s1, s2);
    cout << "No of matching letters are: " << result << endl;
}

int check(string s1, string s2) {
    int count = 0;
    for (int i = 0; s1[i] != '\0'; i++) {
        for (int j = 0; s2[j] != '\0'; j++) {
            if (s1[i] == s2[j]) {
                count++;
                s2[j] = '*'; 
                break;
            }
        }
    }
    return count;
}
