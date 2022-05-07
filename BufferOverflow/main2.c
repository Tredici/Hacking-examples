#include <stdio.h>

void f() {
    printf("SUPER SECRETE DATA!\n");
}

int main(int argc, char const *argv[])
{
    char name[12] = "";

    printf("%p\n", name);
    printf("What is you name? ");
    scanf("%s", name);
    printf("\nHello %s!\n", name);

    volatile int flag=0;
    if (flag) {
        main(0, NULL);
    }

    return 0;
}
