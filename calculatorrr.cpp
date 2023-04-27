#include <iostream>
#include <cmath>
using namespace std;

int main()
{
  int options;
  float a, b;

  cout << "Choose an option : " << endl;
  cout << "Enter 1 for addition" << endl;
  cout << "Enter 2 for Subtraction" << endl;
  cout << "Enter 3 for Multiplication" << endl;
  cout << "Enter 4 for Division" << endl;
  cout << "Enter 5 for Square" << endl;
  cout << "Enter 6 for Cube" << endl;
  cout << "Enter 7 for Exit" << endl;
  cout << "=>";
  cin >> options;

  if (options < 1 || options > 7)
  {
    cout << "Choose options carefully between 1 to 7: ";
    cin >> options;
  }

  switch (options)
  {
  case 1:{
    cout << "Enter first number for addition : ";
    cin >> a;
    cout << "Enter second number for addition : ";
    cin >> b;
    cout << a << " + " << b << " = " << a + b;
    }
    break;

  case 2:{
    cout << "Enter first number for subtraction : ";
    cin >> a;
    cout << "Enter second number for subtraction : ";
    cin >> b;
    cout << a << " - " << b << " = " << a - b;
    }
    break;

  case 3:{
    cout << "Enter first number for multiplication : ";
    cin >> a;
    cout << "Enter second number for multiplication : ";
    cin >> b;
    cout << a << " * " << b << " = " << a * b;
    }
    break;

  case 4:{
    cout << "Enter first number for division : ";
    cin >> a;
    cout << "Enter second number for division : ";
    cin >> b;
    float remainder = fmod(a, b);
    int quotient = a / b;
    cout << a << " / " << b << " = Quotient is " << quotient << " and remainder is " << remainder;
    }
    break;

     case 5:{
       cout<< "Enter a number for getting square of it ";
       cin>> a;
       float square = pow(a, 2);
       cout<<"Square of " << a << " is "<< square;
       }
       break;
         
       case 6:{
       cout<< "Enter a number for getting square of it ";
       cin >> a;
       float cubes = pow(a, 3);
       cout<<"Square of " << a << " is "<< cubes;
       }
       break;

       case 7:{
        return 0;
       }

  }

  
}