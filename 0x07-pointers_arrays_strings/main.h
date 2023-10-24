#ifndef MAIN_H
#define MAIN_H

char *_memset (char *s, char b, unsigned int n); int putchar (char c);
char *_memcpy(char *dest, char *src, unsigned int n);
char *strchr(char *s, Char c);
unsigned int _strspn(char *s, char *accept);
char * strpbrk (char #s, char *accept);
char * strstr(char *haystack, char *needle);
void print_chessboard(char (*a) [8]);
void print diagsums (int *a, int size);
void set string(char **s, char *to);

#endif
