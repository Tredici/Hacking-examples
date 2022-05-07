#include <stdio.h>

void f() {
    printf("SUPER SECRET DATA!\n");
}

int main(int argc, char const *argv[])
{
    char name[12] = "";

    printf("What is your name? ");
    scanf("%s", name);
    printf("Hello %s!\n", name);

    return 0;
}
