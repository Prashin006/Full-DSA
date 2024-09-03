// Press ctrl + shift + B to run the code in output.txt
// for multiline comment press Alt + shift + A
#include <bits/stdc++.h>
using namespace std;
void printName(string name);
void modifyString(string name);
void modifyArray(int arr[], int size);
int sumOfTwo(int num1, int num2)
{
    return num1 + num2;
}
int main()
{
    // Basic I/O
    // cout << "Hey Prashin!\n"<<"You are great!" << endl;
    // int x, y;
    // cin >> x >> y;
    // cout << "Value of x: " << x << " and y: " << y << endl;

    // Data types
    // int, char, long, long long, float, double, long double, string, getline
    // long double x = 50107498325389.184594734;
    // cout << x << endl;
    // string str;
    // getline(cin, str);
    // cout << str << endl;

    // If-else
    // 1. WAP that takes age as i/p & prints adult or no
    // int age;
    // cout << "Enter your age: ";
    // cin >> age;
    // if (age >= 18)
    // {
    //     cout << "You are an adult" << endl;
    // }
    // else
    // {
    //     cout << "You are a child" << endl;
    // }

    // 2. School grading system
    /* int marks;
    cin >> marks;
    if (marks < 0 || marks > 100)
    {
        cout << "You must enter a valid score!" << endl;
    }
    else if (marks <= 25)
    {
        cout << "F" << endl;
    }
    else if (marks < 40)
    {
        cout << "E" << endl;
    }
    else if (marks < 50)
    {
        cout << "D" << endl;
    }
    else if (marks < 60)
    {
        cout << "C" << endl;
    }
    else if (marks < 80)
    {
        cout << "B" << endl;
    }
    else if (marks < 100)
    {
        cout << "A" << endl;
    }
    else
    {
        cout << "O" << endl;
    } */

    // 3. Job scenario
    /* int age;
    cin >> age;
    if (age < 0 || age > 100)
    {
        cout << "Invalid age" << endl;
    }
    else if (age < 18)
    {
        cout << "You are not eligible for job!" << endl;
    }
    else if (age < 55)
    {
        cout << "You are eligible for job!" << endl;
    }
    else if (age <= 57)
    {
        cout << "Eligible but retirement soon!" << endl;
    }
    else
    {
        cout << "Retirement time!" << endl;
    } */

    // 4. Take day no & print day name
    /* int cases;
    cin >> cases;
    int no;
    for (int i = 0; i < cases; i++)
    {
        cin >> no;
        switch (no)
        {
        case 1:
            cout << "Monday" << endl;
            break;
        case 2:
            cout << "Tuesday" << endl;
            break;
        case 3:
            cout << "Wednesday" << endl;
            break;
        case 4:
            cout << "Thursday" << endl;
            break;
        case 5:
            cout << "Friday" << endl;
            break;
        case 6:
            cout << "Saturday" << endl;
            break;
        case 7:
            cout << "Sunday" << endl;
            break;

        default:
            cout << "Invalid Day Number!" << endl;
            break;
        }
    } */

    // Arrays
    // 1D arrays
    // int arr[5];
    // for (int i = 0; i < 5; i++)
    // {
    //     cin >> arr[i];
    // }
    // for (int i = 0; i < 5; i++)
    // {
    //     cout << arr[i] * 10 << endl;
    // }

    // 2D arrays
    // int arr[3][5] = {{1, 2, 3, 4, 5}, {6, 7, 8, 9, 10}, {11, 12, 13, 14, 15}};
    // for (int i = 0; i < 3; i++)
    // {
    //     for (int j = 0; j < 5; j++)
    //     {
    //         cout << *(arr[i] + j) << " ";
    //     }
    //     cout << "\n";
    // }

    // Strings
    // string name = "Prashin Parikh\0";
    // int size = name.size();
    // int len = name.length();
    // cout << size << endl;
    // cout << len << endl;

    // Functions are
    // 1. set of code that performs something for you
    // 2. used to modularise code
    // 3. used to increase readability
    // 4. used to use same code multiple times
    // void => do not return anything
    // return =>
    // parameterised
    // non-parameterised
    // string name;
    // getline(cin, name);
    // printName(name);

    // int n1, n2;
    // cin >> n1 >> n2;
    // cout << sumOfTwo(n1, n2) << endl;
    // cout << "Minimum of num1 & num2: " << min(n1, n2) << endl;
    // cout << "Maximum of num1 & num2: " << max(n1, n2) << endl;

    // string name = "Raj";
    // modifyString(name);
    // cout << name << endl;

    int arr[] = {43, 34, 56, 78};
    cout << "Array before calling function" << endl;
    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";
    modifyArray(arr, 4);
    cout << "Array after calling function" << endl;
    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}

void printName(string name)
{
    cout << "Hey, " << name << "!\n";
}
void modifyString(string name)
{
    name[0] = 'T';
    cout << name << endl;
}
void modifyArray(int arr[], int size)
{
    arr[0] = 0;
    arr[1] = 100;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";
}