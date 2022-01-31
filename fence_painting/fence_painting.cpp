#include <iostream>

using namespace std;

int main()
{
    int a;
    int b;
    int c;
    int d;

    cin >> a >> b;
    cin >> c >> d;

    cout << max(a, b) - min(c,d);
}
