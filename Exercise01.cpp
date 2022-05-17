#include <iostream>
#include "Student.h"
using namespace std;

class Student {
  private:
    int studentId;
    char name[20];
  public:
    void assignDetails(int sId, char sName);
    
}

int main() {
  
// == DO NOT CHANGE THE MAIN PROGRAM =================
   Student mystd;
   mystd.assignDetails(1212, "Amalinga");
   mystd.display();
//==========================
   return 0;
}
