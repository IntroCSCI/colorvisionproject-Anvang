#include <iostream>
#include "student.h"
#include <fstream>

using namespace std;
// Make sure you answer in all lowercase!!!
// this test will give you a 4 question test!
//PLease when you see the question go onto the files with pictures on the left and see.

int main(){
string name;
string answer1;
string answer2;
int point = 0;
char letter;

ofstream myfile;
myfile.open("file.txt");
if(myfile.is_open()){

  cout << "You will be taking a 4 question test! Do you want to take the color blindness test?  y/n?" << endl;
  cin>>letter;
  if(letter == 'y'){

    cout << "What is your name?" << endl;
    cin >> name;

    student Pictures(name);
    //these are the four functions that represents the questions
    Pictures.Picture1('a', myfile);
    Pictures.Picture2('b', myfile);
    Pictures.Picture3('c', myfile);
    Pictures.Picture4('d', myfile);


    cout <<"The Test is now done!" << endl;
    cout << Pictures.getName() << " score " << Pictures.getTotal() << " out of 4" << endl; 
    cout << Pictures.getName() << " answers were: ";
    Pictures.printTotal();
  }
  else{
  cout<< "Okay maybe next time" << endl;
  }
  }
myfile.close();
return 0;
}