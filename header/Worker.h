//
// Created by evanmeek on 19-5-23.
//
#pragma once    //防止重定义
#include <iostream>
using namespace std;

class Worker {
public:
    //显示职工信息
    virtual void showInfo()=0;
    //获取职工部门
    virtual string getDeptName()=0;

public:
    //职工编号j
    int id;
    //职工姓名
    string name;
    //部门编号
    int deptID;
};


