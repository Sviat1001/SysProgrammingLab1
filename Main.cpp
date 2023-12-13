#include <iostream>
#include <stdexcept>
#include <string>
#include "Database.h"

using namespace std;
using namespace Records;

int displayMenu();
void addRenovation(Database& inDB);
void displayAll(Database& inDB);
void displayRepaired(Database& inDB);
void displayNotRepaired(Database& inDB);
void markRenovationAsRepaired(Database& inDB);





int main(int argc, char** argv) {
    Renovation ren1 = Renovation();


    Renovation* ren2 = new Renovation();

    delete ren2;

    Database renovationDB;
    bool done = false;

    while (!done) {
        int selection = displayMenu();
        switch (selection) {
        case 1:
            addRenovation(renovationDB);
            break;
        case 2:
            displayAll(renovationDB);
            break;
        case 3:
            displayRepaired(renovationDB);
            break;
        case 4:
            displayNotRepaired(renovationDB);
            break;
        case 5:
            markRenovationAsRepaired(renovationDB);
            break;
        case 0:
            done = true;
            break;
        default:
            cerr << "Unknown command." << endl;
        }
    }
    return 0;
}

int displayMenu() {
    int selection;
    cout << endl;
    cout << "Renovation Database" << endl;
    cout << "-------------------" << endl;
    cout << "1) Add a new renovation" << endl;
    cout << "2) List all renovations" << endl;
    cout << "3) List all repaired renovations" << endl;
    cout << "4) List all not repaired renovations" << endl;
    cout << "5) Mark a renovation as repaired" << endl;
    cout << "0) Quit" << endl;
    cout << endl;

    cout << "---> ";
    cin >> selection;
    return selection;
}

void addRenovation(Database& inDB) {
    int malfunctionCode, modelCode, partCode1, partCode2, partCode3, laborCost;
    string description, symptoms, repairMethods;

    cout << "Malfunction code? ";
    cin >> malfunctionCode;
    cout << "Model code? ";
    cin >> modelCode;
    cout << "Description? ";
    cin >> description;
    cout << "Symptoms? ";
    cin >> symptoms;
    cout << "Repair methods? ";
    cin >> repairMethods;
    cout << "Part code 1? ";
    cin >> partCode1;
    cout << "Part code 2? ";
    cin >> partCode2;
    cout << "Part code 3? ";
    cin >> partCode3;
    cout << "Labor cost? ";
    cin >> laborCost;

    try {
        inDB.addRenovation(malfunctionCode, modelCode, description, symptoms, repairMethods,
            partCode1, partCode2, partCode3, laborCost);
    }
    catch (std::exception ex) {
        cerr << "Unable to add new renovation!" << endl;
    }
}

void displayAll(Database& inDB) {
    inDB.displayAll();
}

void displayRepaired(Database& inDB) {
    inDB.displayRepaired();
}

void displayNotRepaired(Database& inDB) {
    inDB.displayUnrepaired();
}

void markRenovationAsRepaired(Database& inDB) {
    int renovationID;
    cout << "Renovation ID? ";
    cin >> renovationID;

    try {
        Renovation& renovation = inDB.getRenovation(renovationID);
        renovation.setRepaired(true);
        cout << "Renovation " << renovationID << " has been marked as repaired." << endl;
    }
    catch (std::exception ex) {
        cerr << "Unable to mark renovation as repaired!" << endl;
    }
}