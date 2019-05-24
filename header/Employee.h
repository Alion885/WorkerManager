//
// Created by evanmeek on 19-5-23.
//
#include "Worker.h"

#ifndef WORKERMANAGER_EMPLOYEE_H
#define WORKERMANAGER_EMPLOYEE_H


class Employee : public Worker {
    //显示职工信息
    virtual void showInfo();

    //获取职工部门
    virtual string getDeptName();

public:
    //构造函数
    Employee(int id,string name,int deptID);
};

#endif //WORKERMANAGER_EMPLOYEE_H
