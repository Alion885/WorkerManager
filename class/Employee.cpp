//
// Created by evanmeek on 19-5-23.
//

#include "../header/Employee.h"

void Employee::showInfo() {
    cout << id << "\t\t\t\t\t" << name << "\t\t\t\t" << getDeptName() << endl;
}

string Employee::getDeptName() {
    return "员工";
}

Employee::Employee(int id, string name, int deptID) {
    this->id = id;
    this->name = name;
    this->deptID = deptID;
}

