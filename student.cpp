#include "student.h"
#include <string>
#include <vector>
#include <iostream>
using namespace std;

bool student::input(char input){

  if(input == 'a' || input == 'b' || input == 'c')
  {
  return true;
  }
  else
  {
  return false;
  }
  }


void student::Point(){
  point++;
  cout << "NICE! you got a point" << endl;
  }

void student::Picture1(char answer1, ostream& myfile){ 
  cout << "Picture:1 What number do you see?" << endl;
  cout << "Please choose a letter a-c" << endl;
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

void student::Picture2(char answer2, ostream & myfile){
  cout << "Picture:2 What number do you see?" << endl;
  cout << "Please choose a letter a-c" << endl;
  cout << "a. 3 \n" << "b. 42 \n" << "c. 15 " << endl;
  cin >> answer2;
  while(!(input(answer2))){

      cout<<"Incorrect input, try again" << endl;
      cin>>answer2;
    }
    studAnswer[1]=answer2;

    if(answer2 == 'b'){
    Point();
      
    myfile << "NICE! you got a point for picture 2\n";
  }
  else{
     cout << "Incorrect! The right answer was 42" << endl;
  }
  }
void student::Picture3(char answer3, ostream & myfile){
  cout << "Picture:3 What number do you see?" << endl;
  cout << "Please choose a letter a-c" << endl;
  cout << "a. 7 \n" << "b. 24 \n" << "c. 18 " << endl;
  cin >> answer3;
  while(!(input(answer3))){

    cout<<"Incorrect input, try again" << endl;
    cin>>answer3;
  }
    studAnswer[2]=answer3;

  if(answer3 == 'a'){
  Point();
   
  myfile << "NICE! you got a point for picture 3\n";
  }
  else{
     cout << "Incorrect! The right answer was 7" << endl;
  }
  }
void student::Picture4(char answer4, ostream & myfile){
  cout << "Picture:4 What number do you see?" << endl;
  cout << "Please choose a letter a-c" << endl;
  cout << "a. 1 \n" << "b. 74 \n" << "c. 32 " << endl;
  cin >> answer4;
  while(!(input(answer4))){

    cout<<"Incorrect input, try again" << endl;
    cin>>answer4;
  }
    studAnswer[3]=answer4;

  if(answer4 == 'b'){
  Point();
   
  myfile << "NICE! you got a point for picture 4\n";
  }
  else{
     cout << "Incorrect! The right answer was 74" << endl;
    

  }
  }

void student::printTotal(){
  for(int i=0; i<4; i++){
    cout<< studAnswer[i] << " ";
  }
  }

