#include <iostream>
using namespace std;

int index(const char* str, const char* substr) {
    int str_len = 0;
    int substr_len = 0;

    // Calculate the lengths of the main string and the substring
    while (str[str_len] != '\0') {
        str_len++;
    }

    while (substr[substr_len] != '\0') {
        substr_len++;
    }

    for (int i = 0; i <= str_len - substr_len; i++) {
        int j;
        for (j = 0; j < substr_len; j++) {
            if (str[i + j] != substr[j]) {
                break;
            }
        }
        if (j == substr_len) {
            return i;
        }
    }
    return -1;
}

int main() {
    const char* str = "Hello, World!";
    const char* substr = "World";

    int position = index(str, substr);

    if (position != -1) {
        cout << "Substring found at index: " << position << endl;
    } else {
        cout << "Substring not found." << endl;
    }

    return 0;
}
