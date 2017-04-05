#include <iostream>

/*Variables*/

float gross, net; 

/*Taxes will be deduced from the gross salary according to Quebec's taxable income rates.*/

int main(){
    std::cout << "Please input your yearly gross salary without spaces.\n";
    std::cin >> gross;
    
    if (gross <= 42390)
    {
        net = gross * 0.86;
        std::cout << "Your net salary is " << net << "$." << std::endl;
        }
    else if (gross > 42390 && gross <= 84780)
    {
        net = gross * 0.80;
        std::cout << "Your net salary is " << net << "$." << std::endl;
        }
    else if (gross > 84780 && gross <= 103150)
    {
        net = gross * 0.76;
        std::cout << "Your net salary is " << net << "$." << std::endl;
        }
    else if (gross > 103150)
    {
        net = gross * 0.7475;
        std::cout << "Your net salary is " << net << "$." << std::endl;
        }
    return 0;
}
