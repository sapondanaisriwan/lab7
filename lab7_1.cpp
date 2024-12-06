#include <iostream>
using namespace std;
int main()
{
    int a = 20, b = 30;
    double c = 4, output;

    output = a - double(b / c);
    cout << "output: " << output << '\n';
    return 0;
}
