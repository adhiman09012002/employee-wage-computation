#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;



int calculateDailyWage(int wagePerHour, int fullDayHour){
    return wagePerHour * fullDayHour;

}

void employeeAttendance(int wagePerHour, int fullDayHour){
    srand(time(0));

    int randomNum = rand() % 2;

    if(randomNum == 0){
        cout << "Employee is Absent" << endl;
        cout << "Daily Wage: 0" << endl;
    }else{
        cout << "Employee is Present" << endl;
        int dailyWage = calculateDailyWage(wagePerHour, fullDayHour);
        cout << "Daily Wage: " << dailyWage << endl;
    }
}


int main(){
    cout << "Welcome to Employee Wage Computation" << endl;
    int wagePerHour = 20; 
    int fullDayHour = 8;  

    employeeAttendance(wagePerHour, fullDayHour);
    return 0;
}