#include<bits/stdc++.h>
using namespace std;

int main () {
    // int 
    int x = 10; // direct declaration...
    cin >> x; // taking input...
    cout << "Value of int x is: " << x << " "; // showing o/p

    // long
    long y = 100; // direct declaration...
    // cin >> y; // taking input...
    cout << "Value of int y is: " << y << " "; // showing o/p

    // long long 
    long long z = 1500455555; // direct declaration...
    cin >> z; // taking input...
    cout << "Value of int z is: " << z << " "; // showing o/p


    // float
    float a = 10.223; // direct declaration...
    cin >> a; // taking input...
    cout << "Value of a is: " << a << " "; // showing o/p

    // double
    double b = 100.22525525; // direct declaration...
    cin >> b; // taking input...
    cout << "Value of b is: " << b << " "; // showing o/p

    // String and getline
    // string s1, s2;
    string s1;
    string s2;
    cin >> s1 >> s2;
    cout << s1 << " " << s2 ;
    

    //  Suppose we have to get whole line in the string for that
    string str;
    getline(cin, str);
    cout << str << " ";

    // here in input we have given : Hey Vijay Hey I am Vijayshankar Mishra, I am an software Engineer 
    // since s1 is taking Hey s2 is taking Vijay
    // *******************

    // char
    char ch;
    cin >> ch;
    cout << ch << " ";

    char th = 'j'; //inline declaration of char
    cout << th <<" ";


    return 0;
}