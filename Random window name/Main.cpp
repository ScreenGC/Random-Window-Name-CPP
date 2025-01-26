#include <iostream>
#include <random>
#include <Windows.h>

using namespace std;

std::string gen_string(const int length)
{
    std::string GeneratedString;
    static const char Alphabet[] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
    srand((unsigned)time(NULL) * 5);
    for (int i = 0; i < length; i++)
        GeneratedString += Alphabet[rand() % (sizeof(Alphabet) - 1)];
    return GeneratedString;
}

int main()
{
    SetConsoleTitleA(gen_string(25).c_str());
    printf("\n RANDOM WINDOW NAME\ndiscord.gg/hN7RTHGh8u\n");
    system("pause");
}