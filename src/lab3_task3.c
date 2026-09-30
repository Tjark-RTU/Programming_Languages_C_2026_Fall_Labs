/*
 * Lab 3, Task 3
 * Name: Tjark Frithjof Janke
 * Student ID: 260ADM037
 *
 * Implement basic string handling functions.
 * Write your own versions of:
 *   - my_strlen (finds string length, not counting '\0')
 *   - my_strcpy (copies string from src to dest, INCLUDING the '\0')
 *
 * Rules:
 *   - Do not include <string.h> or call any library string functions.
 *   - Use loops and manual pointer/array access.
 *   - Must work for the empty string "" (length 0).
 *   - You may assume dest is large enough (the caller guarantees it).
 *   - Do not modify main.
 *
 * Example:
 *   char s[] = "hello";
 *   int len = my_strlen(s);   // should return 5
 *
 *   char buffer[100];
 *   my_strcpy(buffer, s);     // buffer now contains "hello"
 *
 * Required output:
 *   Length: 16
 *   Copy: Programming in C
 */

#include <stdio.h>

// Function prototypes
int my_strlen(const char *str);
void my_strcpy(char *dest, const char *src);

int main(void) {
    char test[] = "Programming in C";
    char copy[100];

    int len = my_strlen(test);
    printf("Length: %d\n", len);

    my_strcpy(copy, test);
    printf("Copy: %s\n", copy);

    return 0;
}

// Implement functions below
int my_strlen(const char *str) {
    char curr_element = str[0];
    int length = 0;
    while(curr_element != '\0')
    {
        length += 1;
        curr_element = str[length];
    }


    return length;
}

void my_strcpy(char *dest, const char *src) {
    char curr_element = src[0];
    int index = 0;
    while(1)
    {
        curr_element = src[index];
        dest[index] = curr_element;
        if(curr_element == '\0')
        {
            return;
        }
        index += 1;
    }


}
