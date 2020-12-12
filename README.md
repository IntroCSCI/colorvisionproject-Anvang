# !!!Shuflay-Andrew Vang Color blindness TEST!!!!!!

## Description
# v1.0 Updates


Runs a color blindness test with 4 question which has a mulitple choice were you can choose it from. You will have to access a file with 4 picture when given the first question you will have to look at picture 1 and etc.
It will start off by asking if you want to take the test if not then the program ends. If you say yes then you will it will say for you to type in your name.
Then the program will start asking you questions. The questions are "what number do you see?
You will need to input lowercase if not then it will say "Incorrect input" and tell you to do it again. 
At the end of the test it tells you your answer the answer you have put in and the answers you got right will be in the "file.txt"
this is a one time test!


## Developer


Andrew Vang
## Example

To run the program, give the following commands:

```
g++ --std=c++11 main.cpp student.cpp -o cvp
./cvp
```
//note that I did recieve help from a friend telling me I had to put in student.cpp in the .replit file.
Here is an example of the program running:

```
"You will be taking a 4 question test! Do you want to take the color blindness test?  y/n?"
 y/n
 "what is your name?"
 User name
Picture:1 What number do you see?
Please choose a letter a-c
a.13
b.20
c.12


## C++ Guide

### Variables and Data Types
///int main() 
string name;
string answer1;
string answer2;
int point = 0;
char letter;
///private: 
    char answer;
    int point;
    string studAnswer[4];
    string name;
    int input1;
///public: 
  student (string n){
      name=n;
      point = 0;
  
  }

I have including my Variables from my main, public and private.

### Input and Output


these are what is going to be display and when you are it says cin it means you will have to type something in.
///MAIN
  cout << "You will be taking a 4 question test! Do you want to take the color blindness test?  y/n?" << endl;
  cin>>letter;
  cout << "What is your name?" << endl;
  cin >> name;

  cout <<"The Test is now done!" << endl;
  cout << Pictures.getName() << " score " << Pictures.getTotal() << endl; 
  cout << Pictures.getName() << " answers were: ";

 ///student.cpp
  cout << "Picture:2 What number do you see?" << endl;
  cout << "Please choose a letter a-c" << endl;
  cout << "a. 3 \n" << "b. 42 \n" << "c. 15 " << endl;
  cout<<"Incorrect input, try again" << endl;
  cin>>answer2;

  cout << "Incorrect! The right answer was 42" << endl;
### Decisions


if the user can see the first color they will put 'y' when you put 'y' it will indicate that you got a point if you put 'n' you will not get a point. 
if( color1 == "y") {
    point++;
    myfile << "you got a point for part a picture 1.\n";
  }
  if(color2 == "y"){
    point++;
    
     if(input == 'a' || input == 'b' || input == 'c')
     if(answer1 == 'c' )
     else{
    cout << "Incorrect! The right answer was 12" << endl;
    

  }

### Iteration
  while(!(input(answer1))){
  }
  this while loop is used for if the users uses any other letter than its suppsoe to.
  for(int i=0; i<4; i++)
  this for loop shows you answers at the end.








### File Input and Output


This is making my file. This program should take the users input if they put any correct answer then it will send it to a file that you have created so it can have the data.
ofstream myfile;
myfile.open("file.txt");
if(myfile.is_open()) 
myfile << "NICE! you got a point for picture 1\n";
Since I have provided a function and in the parameters is ofstream & myfile What I have to do is call the function in order to put that data into the file

### Array or Vectors
string studAnswer[4];
this is the array that I am using to use to store the users answers
studAnswer[0]=answer1;
the array is equal or stored in the answers


### Functions
My functions that are in the header file.
void Picture1(char answer1, ostream & myfile);
  void Point();
  void Picture2(char answer2, ostream & myfile);
  void Picture3(char answer3, ostream & myfile);
  void Picture4(char answer4, ostream & myfile);
  string getName(){
    return name; /// I had help on this function!!! from my friend Inderdeep he said its a small function so it wouldn't be that much of a problem
  }
  bool input(char answer);
  void printTotal();
  int getTotal(){
   return point;
 }
};

void pickColor(string color, int& point, ofstream& myfile);
bool inputs(string input);

 

My FUNCTION DEFINITION that are in my Student.cpp file
///bool student::input(char input)
{
  if(input == 'a' || input == 'b' || input == 'c')
{
  return true;
}
  else
{
  return false;
}
}

///void student::Point(){
  point++;                                    THIS IS MY POINT FUNCTION
  cout << "NICE! you got a point" << endl;
}
///void student::Picture1(char answer1, ostream& myfile){
  cout << "Picture:1 What number do you see?" << endl;
  cout << "Please choose a letter a-c" << endl;               THIS FUNCTION IS BEING USED 4 times in the main file and it displays the mulitple choice answers and gives you point and also inside of this function is a nested function
  cout << "a. 13 \n" << "b. 20 \n" << "c. 12 " << endl;
  cin >> answer1;
  while(!(input(answer1))){

    cout<<"Incorrect input, try again" << endl;
    cin>>answer1;
  }
  studAnswer[0]=answer1;
  if(answer1 == 'c' ){
    Point();
  
    myfile << "NICE! you got a point for picture 1\n";

  }

  else{
    cout << "Incorrect! The right answer was 12" << endl;
    

  }
}

///void student::printTotal(){ This function is use for the students answer.
for(int i=0; i<4; i++){
  cout<< studAnswer[i] << " ";
}


 ### Classes
student Pictures Pictures is my object for my class so when im calling the functionm in the headers files I would displau Pictures.Picture1();
with classes I had three files which is main.cpp, student.cpp, student.h
now with classes my class was called student so it was easier to access. moving on in the h file I had my public and private. which holds my functions and variables.
my cpp file was my function definition in order to access this I would had to but student::..anyfunction..() these three files has to be access by using 
#include "student.h"
#ifndef STUDENT_H
#define STUDENT_H
these three makes it accessablle in the main.
As I was told you need a constructor In every class you make, my constructor is student (string n)
!!!Replace with a summary and examples of how classes have been used effectively and appropriately!!!
 