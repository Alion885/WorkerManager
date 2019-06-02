//
// Created by evanmeek on 19-5-24.
//

#include <iostream>
#include "../header/Boss.h"

using namespace std;

Boss::Boss(int id, string name, int deptID) {
    this->id = id;
    this->name = name;
    this->deptID = deptID;
}

void Boss::showInfo() {
    cout << id << "\t\t\t" << name << "\t\t\t" << getDeptName() << endl;
}

string Boss::getDeptName() {
    return std::__cxx11::string("老板");
}


