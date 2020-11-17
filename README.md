# !!!Shuflay-Andrew Vang Color blindness TEST!!!!!!

## Description
# v0.2 Updates

Run a color blindness test. It is a Yes or no program we will give you pictures with questions
and you will answer 'y' or 'n' if you see it. I've built a point system so every point you get it will add up. I used point++
If you put in anything else than 'y' or 'n' it will make you try again
the program runs very nicely and at the end it gives you a option if you want to take the test again say y if not then press 


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
cout << "Do you see " << colors[0] << "? (y/n)" << endl;
cin >> color1;
pickColor(color1, point, myfile);
```

## C++ Guide

### Variables and Data Types
string color1;
string color2;
string input;
string colors[]={"green", "orange", "blue", "yellow", "red"};
int point =0

these are my variables inside my main program which pretty much runs everything in there.

### Input and Output

cout << "You will 1 point for each color correct" << endl;
cout << "Picture 1: Please look at Picture 1" << endl;
cout << "Do you see " << colors[0] << "? (y/n)" << endl;
cin >> color1;
pickColor(color1, point, myfile);
cout << "Do you see "<< colors[1] << "? (y/n)" << endl;
cin >> color2;
pickColor(color2, point, myfile);

cout << "you got " << point << " points" << endl;
cout << "Type any letter if you want to retake the test." << endl;
cout << "Type n if you don't want to retake the test." << endl;
cin >> input;
cin.ignore();

these are what is going to be display and when you are it says cin it means you will have to type something in.


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

  while(inputs(color)){
cout << "Not a valid input. Please try again." <<endl;
cin >> color;
}
If user types in any other letter than Y or N it would show "Not a valid input. Please try again."
### File Input and Output


This is making my file. This program should take the users input if they put 'y' then it will send it to a file that you have created so it can have the data.
ofstream myfile;
myfile.open("file.txt");
if(myfile.is_open()) 

Since I have provided a function and in the parameters is ofstream & myfile What I have to do is call the function in order to put that data into the file

### Array or Vectors

string colors[]={"green", "orange", "blue", "yellow", "red"}; 
I have provided an array and you can call those array if you use color[]


### Functions
I have provided two functions which boths meets the requariment of those 6 functions example 
These functions I call in the main function to put them in use.

void pickColor(string color, int& point, ofstream& myfile);
bool inputs(string input);

 

FUNCTION DEFINITION
void pickColor(string color, int& point, ofstream& myfile)
{
while(inputs(color)){
cout << "Not a valid input. Please try again." <<endl;
cin >> color;
}
if( color == "y") {
point++;
myfile << "you got a point for a part of the picture.\n";
}
}




 function definition is 
 bool inputs(string input)
{
if(input != "y" && input != "n")
{
return true;
}
else
{
return false;
}
}
 
 