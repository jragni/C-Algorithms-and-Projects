#include <iostream>
using namespace std;
int main(){
    // instantiate variables
    string dividendString;
    int dividend;
    string divisorString;
    int divisor;

    // request user inputs
    cout<<"Enter dividend: ";
    cin >> dividendString;
    dividend = stoi(dividendString);
    cout<<endl << "Enter divisor: ";
    cin >> divisorString;
    divisor = stoi(divisorString);

    //provide solutions 
    float ans = dividend / divisor;
    float remainder = dividend % divisor;
    cout<< dividend << " / " << divisor << " == " << static_cast<float>(dividend)/divisor << " == " << ans << " Remainder: " << remainder << endl ; 
    return 0;
}