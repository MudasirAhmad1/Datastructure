#include <stdio.h>

int main() {
    int i, j, matched = 0;
    char str1[]="Mudasir";
    char str2[]="Mudasir";

    // Check each character in str1
    for (i = 0; str1[i] != '\0'; i++) {
        matched = 0;
        for (j = 0; str2[j] != '\0'; j++) {
            if (str1[i] == str2[j]) {
                str2[j] = '*'; // Mark as used
                matched = 1;
                break;
            }
        }
        if (matched == 0) {
            printf("Not an anagram.\n");
            return 0;
        }
    }

    printf("Strings are anagrams.\n");
    return 0;
}

