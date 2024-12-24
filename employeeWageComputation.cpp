#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void employeeAttendance(){
  srand(time(0));
  
  int randomNum = rand() % 2;
  
  if(randomNum == 0){
    cout << "Employee is Absent" << endl;
  }else{
    cout << "Employee is Present" << endl;
  }
}

int main() 
{
    cout << "Welcome to Employee Wage Computation" << endl;
    employeeAttendance();
    return 0;
}