#include <iostream>

using namespace std;
double num1;
double num2;
char op;
double result;
void Capture(){// Captures the users input
cout<<"Enter the first number"<<endl;// First number
cin>>num1;
cout<<"Enter the operation of your choice (+,-,/,*)"<<endl;// Select an operation
cin>> op;
cout<<"Enter the second number"<< endl;// Second number
cin>>  num2;
}
void Calculate(){// Calculation
switch(op){
    case('+'):// Addition
        result= num1+ num2;
        cout<<"Result: "<<result<<endl;
        break;

    case('-'):// Subtraction
        result= num1- num2;
        cout<<"Result: "<<result<<endl;
        break;

    case('/'):/// Division
        result= num1/ num2;
        cout<<"Result: "<<result<<endl;
        break;

    case('*'):// Multiplication
        result= num1* num2;
        cout<<"Result: "<<result<<endl;
        break;

    default:// If user Inputs an invalid value.
    cout<<"Invalid input blud!";
}
 if(num2==0 && op=='/'){// Division by zero Message!
    cout<<"Undefinded solution!"<<endl;
 }

}

int main()
{
    Capture();
    Calculate();
    return 0;
}
