#include <iostream>
using namespace std;
int main()
{
 float A;
 float B;
 float X;
 cout << "Hello, my name is Ian and I'm going to solve for the equation: " << endl;
 cout << "Ax + B = 0 " << endl ;
 cout << "Please enter a value for A: " << endl ;
 cin >> A;
 cout << "Please enter a value for B: " << endl;
 cin >> B;
 cout << "Solving for " << A << "X + " << B << " = 0 " << endl;
 cout << "The answer is: " << endl;
 cout << "X = " << A / -B;
}
