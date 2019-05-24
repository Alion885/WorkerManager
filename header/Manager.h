//
// Created by evanmeek on 19-5-24.
//
#pragma once
#include <iostream>
using namespace std;
#include "Worker.h"

#ifndef WORKERMANAGER_MANAGER_H
#define WORKERMANAGER_MANAGER_H

class Manager:public Worker{
    virtual void showInfo();

    virtual string getDeptName();

public:
    Manager(int id, string name, int deptID);
};

#endif //WORKERMANAGER_MANAGER_H
