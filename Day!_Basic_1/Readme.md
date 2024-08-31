  
## a. Basic Structure of C++ program
```C++
#include<iostream>
using namespace std;

int main() {
    
}

```

## b. In C++ code file we have to install the libries everytime so instead of installing all the libraries like   
```C++
#include<iostream>  
#include<Math.h>  
#include<iostream.h>
```   
##  c. Weare using a standard library which has every library included in it
```C++

#include<bits/stdc++.h>

```

## d. Now the Standard structure changes to
```C++

#include<bits/stdc++.h>
using namespace std;

int main() {
    
}

```

# Steps to Run the code in input.txt & output.txt format
1. here we have seen how to write the code and how to implement the input and output window..
2. To run the code with one command only wehave to first go to terminal and then we have to configure the task. then select create task.json file, then select others 
3. this will create one task.json file inside vs.code file
4. ***MAKE SURE THE CODE FILE OF C++ AND THE task.json FILE SHOULD BE IN THE SAME FOLDER AND NOT IN THE OTHER FOLDER TO PREVENT THE ERROR...
5. erase the content in the task.json file and copy the below line as it is     

## For Windows:

```C++

{
  "version": "2.0.0",
  "tasks": [
    {
      "label": "Compile and run",
      "type": "shell",
      "command": "",
      "args": [
        "copy",
        "\"${file}\"",
        "${workspaceFolder}\\jspwTest.cpp",
        "&&",
        "g++",
        "jspwTest.cpp",
        "-o",
        "jspwTest",
        "&&",
        "jspwTest",
        "<",
        "input.txt",
        ">",
        "output.txt",
        "&&",
        "del",
        "jspwTest.exe",
        "&&",
        "del",
        "jspwTest.cpp"
      ],
      "presentation": {
        "reveal": "never"
      },
      "group": {
        "kind": "build",
        "isDefault": true,
      },
      "problemMatcher": {
        "owner": "cpp",
        "fileLocation": [
          "relative",
          "${workspaceRoot}"
        ],
        "pattern": {
          "regexp": "^(.*):(\\d+):(\\d+):\\s+(warning|error):\\s+(.*)$",
          "file": 1,
          "line": 2,
          "column": 3,
          "severity": 4,
          "message": 5
        }
      }
    }
  ]
}



```

## For Mac:

```C++

{
    "version": "2.0.0",
    "tasks": [
        {
            "label": "compile",
            "type": "shell",
            "command": "g++",
            "args": [
                "-std=c++17",
                "-o",
                "${fileBasenameNoExtension}",
                "${file}"
            ],
            "group": {
                "kind": "build",
                "isDefault": false
            }
        },
        {
            "label": "compile and run",
            "type": "shell",
            "command": "g++ -std=c++17 -o ${fileBasenameNoExtension} ${file} && ./${fileBasenameNoExtension} < input.txt > output.txt",
            "group": {
                "kind": "build",
                "isDefault": true
            }
        }
    ]
}


```

6. after writing the code and creating the input.txt, output.txt and task.json to Run the codewe have to press "ctrl + shift + b" and you will see the output 

7. Refrence for the above setup : https://takeuforward.org/set-up/how-to-set-up-visual-studio-code-for-c-cp-and-dsa/