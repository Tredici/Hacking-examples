#include <iostream>
#include <string>

using namespace std;


int main()
{
    const string password("password");
    string pwd;
    cout << "Inser pwd: ";
    std::getline(cin, pwd);
    if (pwd == password)
    {
        std::cout << "ACCESS GRANTED!" << endl;
    }
    else
    {
        std::cout << "Wrong password!" << endl;
    }
    return 0;
}
