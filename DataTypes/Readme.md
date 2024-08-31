
# DataTypes

## 1. int / long / long long

a. here we are taking our first data type which is "int","long", "long long" it can store te integer...

b. Specification for integers data types...

```
**************************
Type - int  
Bytes - 4  
Range of Values : -2147483648 to +2147483647

**************************
Type - unsigned shot   
Bytes - 2 
Range of Values : 0 to 65,535

**************************
Type - long  
Bytes - 4  
Range of Values : -2147483648 to +2147483647

**************************
Type - unsigned long  
Bytes - 4  
Range of Values : 0 to 4,294,967,295

**************************
Type - long long  
Bytes - 8  
Range of Values : -9,223,372,036,854,775,808 to 9,223,372,036,854,775,807

**************************
```

## Code Example for int / long / long long

```C++

#include<bits/stdc++.h>
using namespace std;

int main () {
    // int 
    int x = 10; // direct declaration...
    cin >> x; // taking input...
    cout << "Value of int x is: " << x  << " "; // showing o/p

    // long
    long y = 100; // direct declaration...
    //cin >> y; // taking input...
    cout << "Value of int y is: " << y  << " "; // showing o/p

    // long long 
    long long z = 1500455555; // direct declaration...
    cin >> z; // taking input...
    cout << "Value of int z is: " << z  << " "; // showing o/p

    return 0;
}



```
## i/p
```
20
15487962 
```

## o/p
```
Value of int x is: 20 Value of int y is: 100 Value of int z is: 15487962 
```

## 2. float / double
 a. It is used to Store the Numbers with decimals.
 b. Specification for decimals data types...

```
**************************
Type - float  
Bytes - 4 byte 
Range of Values : 1.2E-38 to 3.4E+38

**************************
Type - double   
Bytes - 8 byte
Range of Values : 2.3E-308 to 1.7E+38

**************************
Type - long double
Bytes - 10 byte
Range of Values : 3.4E-4932 to 1.1E+4932

```


## Code Example for float and double

```C++

#include<bits/stdc++.h>
using namespace std;

int main () {
    
    // float
    float a = 10.223; // direct declaration...
    cin >> a; // taking input...
    cout << "Value of a is: " << a  << " "; // showing o/p

    // double
    double b = 100.22525525; // direct declaration...
    cin >> b; // taking input...
    cout << "Value of b is: " << b  << " "; // showing o/p
    
    return 0;
}

```

## i/p
```
20.225
2002.235265 
```

## o/p
```
Value of a is: 20.225 Value of b is: 2002.24 
```

## 3. String
1. For string we have to consider whatever written in alphabets 
2. String will consider whatever before space     
example Hey Vijay then for this we have to consider 2 strings One for hey and Second for Vijay.
3. Below is te example given for String declaration and printing...
4. here we have taken input as Hey Vijayshankar

```C++
#include<bits/stdc++.h>
using namespace std;

int main () {
    
    // String and getline
    // string s1, s2;
    string s1;
    string s2;
    cin >> s1 >> s2;
    cout << s1 << " " << s2  << " ";
    return 0;

}

```
## i/p
```
Hey Vijayshankar Mishra
```

## o/p
```
Hey Vijayshankar 
```

## String with getline
1. It is similar to string just getline is used to get whole sentence in a line it will not take senctence after you press the Enter key...
2. You can look into below code and understand...
```C++

#include<bits/stdc++.h>
using namespace std;

int main () {
    
    //  Suppose we have to get whole line in the string for that
    string str;
    getline(cin, str);
    cout << str;
    return 0;

}

```

## i/p
```
I am Vijayshankar Mishra, I am an software Engineer 
```

## o/p
```
I am Vijayshankar Mishra, I am an software Engineer 
```
## 4.char
1. It is used to store the single charachter, It can store all the 256 charachter present 
2. We use char instead of string because it uses less space then string..
3. Below is the example for char..

```C++

#include<bits/stdc++.h>
using namespace std;

int main () {
    
     // char
    char ch;
    cin >> ch;
    cout << ch << " ";

    char th = 'j'; //inline declaration of char
    cout << th <<" ";
    return 0;

}

```

## i/p
```
i
j
```

## o/p
```
i j
```
