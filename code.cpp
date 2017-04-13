#include <iostream>

using namespace std;

// Variables

float gross, net; 

//Taxes will be deduced from the gross salary according to Quebec's taxable income rates.

int main(){
    cout << "Please input your yearly gross salary without spaces.\n";
    cin >> gross;
    
    if (gross <= 42390)
    {
        net = gross * 0.86;
        cout << "Your net salary is " << net << "$." << endl;
        }
    else if (gross > 42390 && gross <= 84780)
    {
        net = gross * 0.80;
        cout << "Your net salary is " << net << "$." << endl;
        }
    else if (gross > 84780 && gross <= 103150)
    {
        net = gross * 0.76;
        cout << "Your net salary is " << net << "$." << endl;
        }
    else if (gross > 103150)
    {
        net = gross * 0.7475;
        cout << "Your net salary is " << net << "$." << endl;
        }
    return 0;
}
