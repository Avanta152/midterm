#include <iostream>
#include <string>
using namespace std;

void StringToCharBuffer(string s, char **c) {

}

int main()
{
    char* p;

    string s = "!kcoR sredoC";
    StringToCharBuffer(s, &p);
    cout << p << endl;
    delete[] p;
    return 0;
}