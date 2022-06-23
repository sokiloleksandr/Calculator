#define _USE_MATH_DEFINES
#include <iostream>
#include <math.h>
#include "AllHeaders.h"
#include <cmath>
#include <string>
using namespace std;
struct User
{
    string name;
    short age;
    string profession;
};
User user;
void printInformation(User user)
{
    cout << "Your name is " << user.name << "\n";
    cout << "You have " << user.age<<" years old" << "\n";
    cout << "Your proffesion is " << user.profession << "\n";
}

float main()
{

    askOnnaire();
    char operation;
    float x, y;
    char isContinue;
    do
    {
        x = chooseNumber();
        operation = operationFunction();
        if (operation == '+')
        {
            add(x, chooseNumber());
        }
        else if (operation == '-')
        {
            subtract(x, chooseNumber());
        }
        else if (operation == 's')
        {
            mSin(x);
        }
        else if (operation == '^')
        {
            power(x, chooseNumber());
        }
        else if (operation == 'c')
        {
            mCos(x);
        }
        else if (operation == 'p')
        {
            piPower(x);
        }
        else if (operation == 'e')
        {
            ePower(x);
        }
        else if (operation == '%')
        {
            percent(x, chooseNumber());
        }
        else if (operation == '*')
        {
            multiply(x, chooseNumber());
        }
        else if (operation == '#')
        {
            radical(x, chooseNumber());
        }
        else if (operation == '/')
        {
            divide(x, chooseNumber());
        }
        else
        {
            cout << "ERROR YOU HAVE WRITEN INCORRECT OPERATION" << endl;
        }
        cout << "Do you want continue? just write y" << endl;
        cin >> isContinue;
    } while (isContinue=='y');
    printInformation(user);
}
void askOnnaire()
{
    cout << "Hello you use my calculator, do you want to fill onnaire? Just write:y" << "\n";
    char answerOfFirstQuestion;
    cin >> answerOfFirstQuestion;
    if (answerOfFirstQuestion == 'y')
    {
        cout << "Please write your age" << "\n";
        cin >> user.age;
        cout << "Please write your name" << "\n";
        cin >> user.name;
        cout << "Please write your proffesion" << "\n";
        cin >> user.profession;

    }
    else
    {
        user.age = 0;
        user.name = "default";
        user.profession = "profession";
    }
}

void result(float resultOfCalculating)
{

    cout << "Dear " <<user.name << " result is " << resultOfCalculating << endl;

}

