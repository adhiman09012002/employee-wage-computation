#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;


int calculateDailyWage(int wagePerHour, int fullDayHour){
    return wagePerHour * fullDayHour;

}

void employeeAttendance(int wagePerHour, int fullDayHour, int partTimeHour){
    srand(time(0));

    int randomNum = rand() % 3;

    if(randomNum == 0){
        cout << "Employee is Absent" << endl;
        cout << "Daily Wage: 0" << endl;
    }else if(randomNum == 1){
        cout << "Employee is Part Time" << endl;
        int partTimeHour = fullDayHour / 2;
        int dailyWage = calculateDailyWage(wagePerHour, partTimeHour);
        cout << "Daily Wage : " << dailyWage << endl; 

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
    int partTimeHour = 4;  

    employeeAttendance(wagePerHour, fullDayHour, partTimeHour);
    return 0;
}
