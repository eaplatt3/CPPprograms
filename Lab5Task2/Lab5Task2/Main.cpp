#include <iostream>
#include <string>





int main()
{

int intNum = 0;
string rmnNum[20] = { " ", "I", "II", "III", "IV" };

cout << "Enter a number (1-5): ";
cin >> intNum;

cout << "The roman is: " << rmnNum[intNum] << endl;

system("system");
return 0;
}