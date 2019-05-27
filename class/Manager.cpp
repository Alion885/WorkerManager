//
// Created by evanmeek on 19-5-24.
//
#include <iostream>
#include "../header/Manager.h"

using namespace std;

void Manager::showInfo() {
    cout<<id<<"\t"<<name<<"\t"<<getDeptName()<<endl;
}

string Manager::getDeptName() {
    return string("经理");
}

Manager::Manager(int id, string name, int deptID) {
    this->id=id;
    this->name=name;
    this->deptID = deptID;
}


