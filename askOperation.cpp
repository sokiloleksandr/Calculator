#include <iostream>
#include "AllHeaders.h"
using namespace std;

char operationFunction()
{
    char askOperation;

    cout << "please enter operation: +,-,*,/,%,^,#,s,p,c,e:" << endl;
    cin >> askOperation;
    return askOperation;
}
float chooseNumber()
{
    float a;
    cout << "please enter number" << endl;
    cin >> a;
    return a;
}
