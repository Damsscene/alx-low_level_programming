#ifndef MAIN_H_
#define MAIN_H_

char *_memset(char *s, ch//ar b, unsigned int n);
char *_memcpy(char *dest, const char *src, unsigned int n);
char *_strchr(char *s, char c);
unsigned int _strspn(char *s, char *accept);
int is_in_accept(char c, char *accept);
char *_strpbrk(char *s, char *accept);

#endif /* MAIN_H_ */
