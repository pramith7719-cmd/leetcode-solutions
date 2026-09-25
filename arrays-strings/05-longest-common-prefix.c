#include <stdio.h>
#include <string.h>

char* longestCommonPrefix(char** strs, int strsSize) {
    static char prefix[201];

    strcpy(prefix, strs[0]);

    for (int i = 1; i < strsSize; i++) {
        int j = 0;

        while (prefix[j] != '\0' &&
               strs[i][j] != '\0' &&
               prefix[j] == strs[i][j]) {
            j++;
        }

        prefix[j] = '\0';
    }

    return prefix;
}

int main() {
    // Test Case 1: typical case
    char* strs1[] = {"flower", "flow", "flight"};

    printf("Test 1: %s\n",
           longestCommonPrefix(strs1, 3));

    // Test Case 2: edge case with no common prefix
    char* strs2[] = {"dog", "racecar", "car"};

    printf("Test 2: %s\n",
           longestCommonPrefix(strs2, 3));

    return 0;
}