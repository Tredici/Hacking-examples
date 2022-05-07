#include <iostream>

using namespace std;

void f() {
    cout << "SUPER SECRET DATA!" << endl;
}

int main(int argc, char const *argv[])
{
    char name[12] = "";

    cout << "What is your name? ";
    cin >> name;
    cout << "Hello " << name << endl;

    return 0;
}
