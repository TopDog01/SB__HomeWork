#include <iostream>
#include <string>

using namespace std;

int main() {

    

    const int TICKET_PRICE = 20; // ���� ������
    const int STOPS_COUNT = 4;   // ���������� ���������
    string stops[STOPS_COUNT] = {
        "����� �������������",
        "�������� ����������",
        "������� �������������",
        "���������� ����������"
    };

    int totalPassengers = 0;       // ����� ���������� ����������
    int totalIncome = 0;           // ����� �����
    int passengersExited, passengersEntered;

    for (int i = 0; i < STOPS_COUNT; i++) {
        cout << "��������� �� ��������� \"" << stops[i] << "\". � ������ ����������: " << totalPassengers << endl;

        cout << "������� ���������� ����� �� ���������? ";
        cin >> passengersExited;

        // ��������, ��� ���������� �������� �� ��������� ������� ���������� ����������
        if (passengersExited > totalPassengers) {
            cout << "������������ ���������� � ������!" << endl;
            return 1; // ��������� ��������� � �������
        }

        totalPassengers -= passengersExited;

        cout << "������� ���������� ����� �� ���������? ";
        cin >> passengersEntered;

        totalPassengers += passengersEntered;
        totalIncome += passengersEntered * TICKET_PRICE;

        cout << "������������ � ��������� \"" << stops[i] << "\". � ������ ����������: " << totalPassengers << endl;
        cout << "-----------����---------" << endl;
    }

    // ������ ��������
    int driverSalary = totalIncome / 4;
    int fuelExpenses = totalIncome / 5;
    int taxExpenses = totalIncome / 5;
    int repairExpenses = totalIncome / 5;
    int totalExpenses = driverSalary + fuelExpenses + taxExpenses + repairExpenses;
    int profit = totalIncome - totalExpenses;

    // ����� ����������
    cout << "����� ����������: " << totalIncome << " ���." << endl;
    cout << "�������� ��������: " << driverSalary << " ���." << endl;
    cout << "������� �� �������: " << fuelExpenses << " ���." << endl;
    cout << "������: " << taxExpenses << " ���." << endl;
    cout << "������� �� ������ ������: " << repairExpenses << " ���." << endl;
    cout << "����� �����: " << profit << " ���." << endl;

    return 0;
}