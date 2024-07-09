#include "main.h"
/**
 *
 * _strspn - Gets the length of a prefix substring.
 * @s: Pointer to the null-terminated string to be scanned.
 * @accept: Pointer to the null-terminated string containing the characters to match.
 * Return: the number of bytes in the initial segment of s which consist only
 * of bytes from accept.
 */
int is_in_accept(char c, char *accept) {
    while (*accept != '\0') {
        if (c == *accept) {
            return 1; // Character is in accept
        }
        accept++;
    }
    return 0; // Character is not in accept
}

// Main function to get the length of the prefix substring
unsigned int _strspn(char *s, char *accept) {
    unsigned int count = 0;

    while (*s != '\0') {
        if (!is_in_accept(*s, accept)) {
            break;
        }
        count++;
        s++;
    }

    return count;
}
