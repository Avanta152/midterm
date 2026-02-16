#include <iostream>
#include <string>
using namespace std;

void StringToCharBuffer(string& s, char **c) {
    int size = s.length();
    char *temp = new char[size+1];
    char* ptr = temp;
    for (int i=size-1; i>= 0;i--) {
        *ptr = s[i];
        ptr++;
    }
    *ptr = '\0';
    *c = temp;
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