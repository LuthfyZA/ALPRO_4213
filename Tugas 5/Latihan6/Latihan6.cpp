#include <iostream>

using namespace std;

enum motor { vario = 15000000, mxking = 20000000, sonic = 17000000, mio = 7000000 };

int main()
{
    motor y = motor::vario;
    cout << y << endl;
    return 0;
}
