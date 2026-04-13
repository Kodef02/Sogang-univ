#include <iostream>
#include "my-string.hpp"

using std::cout;
using std::endl;

// I will fix this function to test your class implementation
void test() {
    MyString s1("ABC");
    MyString s2(" DEF");
    s1.Insert(&s2, 3);
    s1.Print();
    cout << s1.GetLength() << endl;
}

int main() {
    test();
    return 0;
}
