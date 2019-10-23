#include <stdio.h>

#define nil NULL
#define nul '\0'


int
main(void) {
     char *foo = nil, bar[64] = {0};
     
     foo = malloc(sizeof(char) * 128);
     
     if(!foo) {
     	printf("foo is nil\n");
     }
     foo = gets(foo);
     
     strcpy(foo, bar);
     
     printf("%s\n", bar);
     
     free(foo);
     return 0;
}
