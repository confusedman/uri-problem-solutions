#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    float a, b, c;
    cin >> a >> b >> c;
    if((b+c > a) && (a+b > c) && (c+a) > b){
        cout << fixed << setprecision(1) << "Perimetro = " << (a + b + c) << endl;
    }
    else{
        cout << fixed << setprecision(1) << "Area = " << 0.5*(a + b)*c << endl;
    }
    return 0;
}
