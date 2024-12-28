#include "libft.h"
#include <stdlib.h>

int countSubString(char *s, char c) {
    unsigned int count = 0;
    int i = 0;

    while (s[i] != '\0') {
        while (s[i] == c) // Skip delimiters
            i++;
        if (s[i] != '\0') {
            count++; // Found a substring
            while (s[i] != '\0' && s[i] != c)
                i++;
        }
    }
    return count;
}

int countStringLen(char *s, char c, int startIndex) {
    int len = 0;
    while (s[startIndex] != '\0' && s[startIndex] != c) {
        len++;
        startIndex++;
    }
    return len;
}

char *alloString(char *s, char c, int startIndex) {
    int len = countStringLen(s, c, startIndex);
    char *temp = (char *)malloc(sizeof(char) * (len + 1)); // +1 for null terminator

    if (temp == NULL)
        return NULL;

    for (int i = 0; i < len; i++) {
        temp[i] = s[startIndex + i];
    }
    temp[len] = '\0'; // Add null terminator
    return temp;
}

int fillArr(char **arr, char *s, char c) {
    int i = 0;
    int arrCount = 0;

    while (s[i] != '\0') {
        while (s[i] == c) // Skip delimiters
            i++;
        if (s[i] != '\0') {
            arr[arrCount] = alloString(s, c, i);
            if (arr[arrCount] == NULL) { // Handle allocation failure
                for (int j = 0; j < arrCount; j++)
                    free(arr[j]);
                return 1;
            }
            arrCount++;
            while (s[i] != '\0' && s[i] != c) // Skip current substring
                i++;
        }
    }
    return 0;
}

char **ft_split(char const *s, char c) {
    if (s == NULL)
        return NULL;

    unsigned int count = countSubString((char *)s, c);

    char **temp = (char **)malloc(sizeof(char *) * (count + 1)); // +1 for NULL pointer
    if (temp == NULL)
        return NULL;

    if (fillArr(temp, (char *)s, c) == 1) { // Check allocation failure
        free(temp);
        return NULL;
    }

    temp[count] = NULL; // Null-terminate the array
    return temp;
}