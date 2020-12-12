#ifndef STUDENT_H
#define STUDENT_H
#include <string>
#include <vector>

using std::string;
using std::vector;
using std::ostream;
class student
{
  
  private: 
    char answer;
    int point;
    string studAnswer[4];
    string name;
    int input1;
    
  public: 
  student (string n){
      name=n;
      point = 0;
  
  }
  void Picture1(char answer1, ostream & myfile);
  void Point();
  void Picture2(char answer2, ostream & myfile);
  void Picture3(char answer3, ostream & myfile);
  void Picture4(char answer4, ostream & myfile);
  string getName(){
    return name;
    }
  bool input(char answer);
  void printTotal();
  int getTotal(){
   return point;
    }
  };
#endif