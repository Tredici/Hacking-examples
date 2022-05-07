#include <stdio.h>

void h() {
    printf("A THIRD SUPER SECRET DATA!\n");
}

void g() {
    printf("ANOTHER SUPER SECRET DATA!\n");
}

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
