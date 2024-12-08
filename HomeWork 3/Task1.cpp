#include <iostream>
#include <string>

using namespace std;

int main() {

    

    const int TICKET_PRICE = 20; // Цена билета
    const int STOPS_COUNT = 4;   // Количество остановок
    string stops[STOPS_COUNT] = {
        "Улица программистов",
        "Проспект алгоритмов",
        "Площадь разработчиков",
        "Набережная дебаггинга"
    };

    int totalPassengers = 0;       // Общее количество пассажиров
    int totalIncome = 0;           // Общий доход
    int passengersExited, passengersEntered;

    for (int i = 0; i < STOPS_COUNT; i++) {
        cout << "Прибываем на остановку \"" << stops[i] << "\". В салоне пассажиров: " << totalPassengers << endl;

        cout << "Сколько пассажиров вышло на остановке? ";
        cin >> passengersExited;

        // Убедимся, что количество вышедших не превышает текущее количество пассажиров
        if (passengersExited > totalPassengers) {
            cout << "Недостаточно пассажиров в салоне!" << endl;
            return 1; // Завершаем программу с ошибкой
        }

        totalPassengers -= passengersExited;

        cout << "Сколько пассажиров зашло на остановке? ";
        cin >> passengersEntered;

        totalPassengers += passengersEntered;
        totalIncome += passengersEntered * TICKET_PRICE;

        cout << "Отправляемся с остановки \"" << stops[i] << "\". В салоне пассажиров: " << totalPassengers << endl;
        cout << "-----------Едем---------" << endl;
    }

    // Расчет расходов
    int driverSalary = totalIncome / 4;
    int fuelExpenses = totalIncome / 5;
    int taxExpenses = totalIncome / 5;
    int repairExpenses = totalIncome / 5;
    int totalExpenses = driverSalary + fuelExpenses + taxExpenses + repairExpenses;
    int profit = totalIncome - totalExpenses;

    // Вывод информации
    cout << "Всего заработали: " << totalIncome << " руб." << endl;
    cout << "Зарплата водителя: " << driverSalary << " руб." << endl;
    cout << "Расходы на топливо: " << fuelExpenses << " руб." << endl;
    cout << "Налоги: " << taxExpenses << " руб." << endl;
    cout << "Расходы на ремонт машины: " << repairExpenses << " руб." << endl;
    cout << "Итого доход: " << profit << " руб." << endl;

    return 0;
}