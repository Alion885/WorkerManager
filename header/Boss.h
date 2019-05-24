//
// Created by evanmeek on 19-5-24.
//
#include <iostream>
#include "Worker.h"
using namespace std;
#ifndef WORKERMANAGER_BOSS_H
#define WORKERMANAGER_BOSS_H

class Boss:public Worker{
    virtual void showInfo();
    virtual string getDeptName();
public:
    Boss(int id,string name,int deptID);

    Boss();
};


#endif //WORKERMANAGER_BOSS_H
