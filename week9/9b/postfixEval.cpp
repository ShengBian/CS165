/*****************************************************
 * Author: Sheng Bian
 * Date: November 22
 * Description: This program defines a function postfixEval that uses
 * a stack<double> to evaluate postfix expressions.
 * ***************************************************/
#include <stack>

using namespace std;

double postfixEval(char *str)
{
    stack<double> container;
    char *newStr = str;
    while (*newStr != '\0')
    {
        //if a char is a number, it will be pushed to stack
        if(*newStr >= '0' && *newStr <= '9')
        {
            int val = 0;
            while(*newStr >='0' && *newStr <= '9' && *newStr != '\0' )
            {
                val *= 10;
                val += *newStr - '0';
                newStr++;
            }
            container.push(val);
        }

        //if a char is operator, it will be used to calculate the popped numbers
        if(*newStr == '*' || *newStr == '/' || *newStr == '-' || *newStr == '+')
        {
            double firstVal, secondVal;
            firstVal = container.top();
            container.pop();
            secondVal = container.top();
            container.pop();

            if(*newStr == '+')
                container.push(secondVal + firstVal);
            if(*newStr == '-')
                container.push(secondVal - firstVal);
            if(*newStr == '*')
                container.push(secondVal * firstVal);
            if(*newStr == '/')
                container.push(secondVal / firstVal);
        }
        newStr++;
    }
    return container.top();
}

