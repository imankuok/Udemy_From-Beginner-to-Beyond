#include <iostream>

using namespace std;

int main()
{
    int num;
    cout << "In the US:" << endl;
    cout << "   1 dollar is 100 cents" << endl;
    cout << "   1 quarter is 25 cents" << endl;
    cout << "   1 dime is 10 cents" << endl;
    cout << "   1 nickel is 5 cents, and" << endl;
    cout << "   1 penny is 1 cent" << endl;
    cout << "Enter an amount in cents:" << endl;
    
    cin >> num;
    
    cout << "dollars: " << num/100 << endl;
    num = num - 100*(num/100);
    
    
    
    cout << "quarters: " << num/25 << endl;
    num = num - 25*(num/25);
    
   
    cout << "dimes: " << num/10 << endl;
    num = num - 10*(num/10);
   
    
    cout << "nickels: " << num/5 << endl;
    num = num - 5*(num/5);
    
    
    
    cout << "pennies: " << num << endl;
    
    
}
