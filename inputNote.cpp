#include <iostream>

using namespace std;

int main()
{
    // detecting valid inputs in c and c++
    // the scanf() function in c, will return 1 if the value inputed is valid and 0 in case it's not valid.
    // example, if I declared an integer, and instead of streaming a integer number, I type a character, it'll
    // return 0.

    int a; // integer a.

    printf("%d", scanf("%d", &a)); // if I enter a integer the scanf will return 1, else 0.

    // in c++ using cin, it gets the stream and insert into the variable using the operator ">>"
    // in this case, just the variable alone, will return either 0 or, a value informed.

    int b;

    cin >> b;

    cout << b; // if the input is not a integer, it'll return 0, I personally didn't like it much, because if you enter 0,
    // the return will be 0, and 0 is also an integer.
}
