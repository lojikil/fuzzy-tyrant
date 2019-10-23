#include <stdio.h>

#define nil NULL
#define nul '\0'


int
main(void) {
    // make sure bar is large enough
    char *foo = nil, bar[128] = {0};

    foo = malloc(sizeof(char) * 128);

    if(!foo) {
        printf("foo is nil\n");
        return 1;
    }

    foo = fgets(foo, 128, stdin);

    //strncpy(bar, foo, 128);
    strlcpy(bar, foo, 128);

    printf("%s\n", bar);

    free(foo);
    return 0;
}
