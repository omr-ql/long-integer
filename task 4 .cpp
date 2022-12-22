/*
    Sanad Ali Mohamed GheddafEddam
    20210736

    Omar abdullah saeed
    20210706
*/
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int getsize(string number);
int sum(string number);
int avg_even(string number);
int avg_odd(string number);
int occurrence(string number);
int reversed(string number);
int middle(string number);

int main()
{
    string number;
    cout << "Enter your number : " << endl;
    cin >> number;
    char option = 'A';
    while (option != '9')
    {
        cout << "\n# 1 - press 1 to Find number of digits : " << endl;
        cout << "# 2 - press 2 Get the sum of all the number’s digits : " << endl;
        cout << "# 3 - press 3 Get the average of the digits in the even places of the number : " << endl;
        cout << "# 4 - press 4 Get the average of the digits in the odd places of the number : " << endl;
        cout << "# 5 - press 5 Get the number of times a certain digit occurs in the number : " << endl;
        cout << "# 6 - press 6 Get the reversed of number : " << endl;
        cout << "# 7 - press 7 Find the digit in the middle : " << endl;
        cout << "# 8 - press 8 Enter a new number " << endl;
        cout << "# 9 - press 9 Exit program \n " << endl;

        cout << "## so what have you choose ? ##" << endl;

        cin >> option;

        switch (option)
        {
        case '1':
            getsize(number);
            break;
        case '2':
            sum(number);
            break;
        case '3':
            avg_even(number);
            break;
        case '4':
            avg_odd(number);
            break;
        case '5':
            occurrence(number);
            break;
        case '6':
            reversed(number);
            break;
        case '7':
            middle(number);
            break;
        case '8':
            return main();
        case '9':
            cout << "Thank you " << endl;
        }
    }
}

int getsize(string number)
{
    int count = 0;
    string copy = number;
    for (char x : number)
    {
        count++;
    }

    cout << "The size of " << copy << " is = " << count << endl;

    return 0;
}

int sum(string number)
{
    int count = 0, sum = 0;

    string copy = number;
    for (char x : number)
    {
        count++;
    }

    for (int i = 0; i < count; i++)
    {
        sum += number[i] - '0';
    }

    cout << "The sum of " << copy << " is = " << sum << endl;
}
int avg_odd(string number)
{

    double odd_avarege = 0;
    int count = 0, odd_count = 0;
    string copy = number;

    for (char x : number)
    {
        count++;
    }

    for (int i = 0; i < count; i += 2)
    {
        odd_avarege += number[i] - '0';
        odd_count++;
    }

    cout << "The avarege odd places of " << copy << " is = " << fixed << setprecision(2) << (odd_avarege / odd_count) << endl;

    return 0;
}
int avg_even(string number)
{

    double evn_avarege = 0;
    int count = 0, evn_count = 0;
    string copy = number;

    for (char x : number)
    {
        count++;
    }

    for (int i = 1; i < count; i += 2)
    {
        evn_avarege += number[i] - '0';
        evn_count++;
    }

    cout << "The avarege even places of " << copy << " is = " << fixed << setprecision(2) << (evn_avarege / evn_count) << endl;

    return 0;
}

int occurrence(string number)
{

    int count = 0;
    for (char x : number)
    {
        count++;
    }

    int mode;
    cout << "Enter your choosen number : " << endl;
    cin >> mode;

    string copy = number;

    int result = 0;
    for (char x : number)
    {
        if ((x - '0') == mode)
        {
            result++;
        }
    }

    cout << "The number : " << mode << " , which in : " << copy << " , Has repeted for : " << result << endl;
}

int reversed(string number)
{
    string copy = number;

    int count = 0;
    for (char x : number)
    {
        count++;
    }

    string opposite = "";

    for (int i = count - 1; i >= 0; i--)
    {
        opposite += (copy[i]);
    }

    cout << "The number " << copy << " has reversed to be : " << opposite << endl;

    return 0;
}

int middle(string number)
{
    string copy = number;

    int count = 0;

    for (char x : number)
    {
        count++;
    }

    cout << "counter = " << count << endl;

    double i = (count / 2);
    double j = ((count / 2) - 1);
    if (count % 2 == 0)
    {
        cout << "The middle number of : " << number << " is : " << ((number[i] - '0') + number[j] - '0') / 2 << endl;
    }

    else
    {
        cout << "The middle number of : " << number << " is : " << (number[count / 2] - '0') << endl;
    }
    return 0;
}