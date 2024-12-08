#include <iostream>
#include <string>

using namespace std;

int main() {

    setlocale(LC_ALL, "Russian");

    const int TICKET_PRICE = 20; 
    const int STOPS_COUNT = 4;   
    string stops[STOPS_COUNT] = {
        "Street of programmers",
        "Prospectus of Algorithms",
        "Developers Square",
        "Debugging Embankment"
    };

    int totalPassengers = 0;       
    int totalIncome = 0;           
    int passengersExited, passengersEntered;

    for (int i = 0; i < STOPS_COUNT; i++) {
        cout << "We arrive at the stop \"" << stops[i] << "\". In the passenger cabin: " << totalPassengers << endl;

        cout << "How many passengers got off at the stop?? ";
        cin >> passengersExited;

        
        if (passengersExited > totalPassengers) {
            cout << "Not enough passengers in the cabin!" << endl;
            return 1; 
        }

        totalPassengers -= passengersExited;

        cout << "How many passengers got on at the stop? ";
        cin >> passengersEntered;

        totalPassengers += passengersEntered;
        totalIncome += passengersEntered * TICKET_PRICE;

        cout << "We leave from the bus stop \"" << stops[i] << "\". In the passenger cabin: " << totalPassengers << endl;
        cout << "-----------Let's go---------" << endl;
    }

    
    int driverSalary = totalIncome / 4;
    int fuelExpenses = totalIncome / 5;
    int taxExpenses = totalIncome / 5;
    int repairExpenses = totalIncome / 5;
    int totalExpenses = driverSalary + fuelExpenses + taxExpenses + repairExpenses;
    int profit = totalIncome - totalExpenses;

    
    cout << "Total earned: " << totalIncome << " RUB." << endl;
    cout << "Driver's salary: " << driverSalary << " RUB." << endl;
    cout << "Fuel costs: " << fuelExpenses << " RUB." << endl;
    cout << "Taxes: " << taxExpenses << " RUB." << endl;
    cout << "Car repair costs: " << repairExpenses << " RUB." << endl;
    cout << "Total income: " << profit << " RUB." << endl;

    return 0;
}