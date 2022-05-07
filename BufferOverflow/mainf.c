#include <stdio.h>

void f() {
    printf("SUPER SECRETE DATA!\n");
}

int main(int argc, char const *argv[])
{
    char name[12] = "";

    printf("What is you name? ");
    scanf("%s", name);
    printf("\nHello %s!\n", name);

    f();

    return 0;
}
