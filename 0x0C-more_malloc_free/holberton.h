#ifndef HOLBERTON_H
#define HOLBERTON_H

void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int b);
void *_calloc(unsigned int nmemb, unsigned int size);
int *array_range(int min, int max);

int _putchar(char c);
char *create_array(unsigned int size, char c);
char *_strdup(char *s);
char *str_concat(char *s1, char *s2);
int **alloc_grid(int w, int h);
void free_grid(int **grid, int height);

#endif
