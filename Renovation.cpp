#include <iostream>
#include <string>
#include "Renovation.h"

using namespace std;

namespace Records {
    Renovation::Renovation()
    {
        malfunctionCode = -1;
        modelCode = -1;
        
    }

  
    void Renovation::setMalfunctionCode(int inMalfunctionCode)
    {
        malfunctionCode = inMalfunctionCode;
    }

    int Renovation::getMalfunctionCode()
    {
        return malfunctionCode;
    }

    void Renovation::setModelCode(int inModelCode)
    {
        modelCode = inModelCode;
    }

    int Renovation::getModelCode()
    {
        return modelCode;
    }

    void Renovation::setDescription(string inDescription)
    {
        description = inDescription;
    }

    string Renovation::getDescription()
    {
        return description;
    }

    void Renovation::setSymptoms(string inSymptoms)
    {
        symptoms = inSymptoms;
    }

    string Renovation::getSymptoms()
    {
        return symptoms;
    }

    void Renovation::setRepairMethods(string inRepairMethods)
    {
        repairMethods = inRepairMethods;
    }

    string Renovation::getRepairMethods()
    {
        return repairMethods;
    }

    void Renovation::setPartCode1(int inPartCode1)
    {
        partCode1 = inPartCode1;
    }

    int Renovation::getPartCode1()
    {
        return partCode1;
    }

    void Renovation::setPartCode2(int inPartCode2)
    {
        partCode2 = inPartCode2;
    }

    int Renovation::getPartCode2()
    {
        return partCode2;
    }

    void Renovation::setPartCode3(int inPartCode3)
    {
        partCode3 = inPartCode3;
    }

    int Renovation::getPartCode3()
    {
        return partCode3;
    }

    void Renovation::setLaborCost(int inLaborCost)
    {
        laborCost = inLaborCost;
    }

    int Renovation::getLaborCost()
    {
        return laborCost;
    }

    void Renovation::setRepaired(bool isRepaired) {
        repaired = isRepaired;
    }

    bool Renovation::getRepaired() {
        return repaired;
    }

    void Renovation::setRenovationID(int inRenovationID) {
        renovationID = inRenovationID;
    }

    int Renovation::getRenovationID() {
        return renovationID;
    }

    void Renovation::changeLaborCost(int newCost) {
        laborCost = newCost;
    }

    void Renovation::completeRepair() {
        repaired = true;
    }

    void Renovation::display() {
        cout << "Renovation Details:" << endl;
        cout << "-------------------" << endl;
        cout << "Renovation Number: " <<renovationID << endl;
        cout << "Malfunction Code: " << malfunctionCode << endl;
        cout << "Model Code: " << modelCode << endl;
        cout << "Description: " << description << endl;
        cout << "Symptoms: " << symptoms << endl;
        cout << "Repair Methods: " << repairMethods << endl;
        cout << "Code of Part 1: " << partCode1 << endl;
        cout << "Code of Part 2: " << partCode2 << endl;
        cout << "Code of Part 3: " << partCode3 << endl;
        cout << "Labor Cost: $" << laborCost << endl;
        cout << "Repaired: " << (repaired ? "Yes" : "No") << endl;
        cout << "-------------------" << endl;
    }
}
