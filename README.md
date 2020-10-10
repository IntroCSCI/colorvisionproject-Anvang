# !!!Shuflay-Andrew Vang Color blindness TEST!!!!!!

## Description


Run a color blindness test. It is a Yes or no program we will give you pictures with questions
and you will answer 'y' or 'n' if you see it. I've built a point system so every point you get it will add up. I used point++


## Developer


Andrew Vang
## Example

To run the program, give the following commands:

```
g++ --std=c++11 main.cpp -o cvp
./cvp
```

Here is an example of the program running:

```
g++ -std=c++11 main.cpp -o cvp; ./cvp
You will 1 point for each color correct
Picture 1: Please look at Picture 1
Do you see green? (y/n)
y
Do you see orange?
n
```

## C++ Guide

### Variables and Data Types


 string color1;
 string color2;
 char input;
these are my variables I put strings of color so I can identify it, and char input because my program is a 'y' || 'no' test.
I will be using this through my whole project

### Input and Output


output would be use to show onto the code which was cout << "You will 1 point for each color correct" << endl;
input was what you had to type in cin >> color1; I already string color1.

cout << "You will 1 point for each color correct" << endl;
  cout << "Picture 1: Please look at Picture 1" << endl;
  cout << "Do you see green? (y/n)" << endl;
  cin >> color1;
  cout << "Do you see orange?" << endl;
  cin >> color2;
### Decisions


if the user can see the first color they will put 'y' when you put 'y' it will indicate that you got a point if you put 'n' you will not get a point. 
if( color1 == "y") {
    point++;
    myfile << "you got a point for part a picture 1.\n";
  }
  if(color2 == "y"){
    point++;
    
### Iteration


I used a do-while loop so that if the user decides to take the test again he can take it again or if he doesn't then he can input 'n' if he does then input 'y'
  do{
  
  while(input != 'n');
  }
### File Input and Output


This is making my file. This program should take the users input if they put 'y' then it will send it to a file that you have created so it can have the data.
ofstream myfile;
myfile.open("file.txt");
if(myfile.is_open()) 

myfile << "you got a point for part a picture 1.\n";