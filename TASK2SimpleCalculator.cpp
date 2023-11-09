/*TASK 2:A calculator program that performs basic arithmetic operations such as addition, subtraction, multiplication, and division.*/
// SHANTANU LANJEWAR

#include<iostream>
using namespace std;
int main()
{
    char op;
    float num1, num2;
    cout<<endl;
    cout<<"Enter operator to be performed either + or - or * or / : ";
    cout<<endl;
    cout<<"Addition for '+'. \n";
    cout<<"Subtraction for '-'. \n";
    cout<<"Multiplication for '*'. \n";
    cout<<"Division for '/'. \n";
    cout<<endl;
    cin>>op;
    cout<<"Enter two numbers: ";
    cin>> num1 >> num2;

    switch(op)
        {
            case '+' :
                        cout<< "Addition of  the two numbers is : "<< num1+num2;
                        break;
             
             case '-' :
                        cout<< "Subtraction of  the two numbers is : "<<num1-num2;
                        break;
            
            case '*' :
                        cout<<"Division of  the two numbers is : "<< num1*num2;
                        break;
            
            case '/' :
                        cout<< "Division of  the two numbers is : "<< num1/num2;
                        break;

            default:
                    cout<<"Enter a valid operator.";

        }
    return 0;
}