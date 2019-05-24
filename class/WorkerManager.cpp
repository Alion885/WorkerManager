//
// Created by evanmeek on 19-5-23.
//

#include <iostream>
#include <fstream>
#include "../header/WorkerManager.h"
#include "../header/Employee.h"
#include "../header/Manager.h"
#include "../header/Boss.h"

using namespace std;

/**
 * WorkerManager构造函数
 * @TODO 用于初始化
 */
WorkerManager::WorkerManager() {
    this->workerCount = 0;
    this->workerArr = NULL;
}

/**
 * WorkerManager析构函数
 * @TODO 释放资源
 */
WorkerManager::~WorkerManager() {}

/**
 * 新增职工
 */
void WorkerManager::addWorker() {
    cout << "请输入增加职工数量:";
    int addCount = -1;
    cin >> addCount;

    if (addCount > 0) {
        //计算新空间大小
        int newSpaceSize = this->workerCount + addCount;
        //开辟新空间
        Worker **newSpace = new Worker *[newSpaceSize];
        //将原空间内容放到新空间下
        if(workerArr!=NULL){
            for (int i = 0; i < this->workerCount; ++i) {
                newSpace[i] = workerArr[i];
            }
        }
        //录入新数据
        for (int j = 0; j < addCount; ++j) {
            int id, deptID;
            string name;
            cout << "请输入第" << j + 1 << "位职工的编号:";
            cin >> id;
            cout << "请输入第" << j + 1 << "位职工的姓名:";
            cin >> name;
            cout << "请输入选择第" << j + 1 << "位职工的职位:" << endl;
            cout << "1.普通职工" << endl << "2.经理" << endl << "3.老板" << endl;
            cin >> deptID;
            Worker *worker = NULL;
            switch (deptID) {
                case 1: {
                    worker = new Employee(id, name, deptID);
                    worker->showInfo();
                    break;
                }
                case 2: {
                    worker = new Manager(id, name, deptID);
                    break;
                }
                case 3: {
                    worker = new Boss(id, name, deptID);
                    break;
                }
                default:
                    cout << "输入有误！" << endl;
                    break;
            }
            newSpace[this->workerCount + j] = worker;
            delete worker;
        }
        //释放原空间
        delete[]workerArr;
        //更改员工数组指针的指向
        this->workerArr = newSpace;
        //更新员工个数
        this->workerCount = newSpaceSize;
        //提示信息
        save();
        cout << "新增" << addCount << "名员工成功!" << endl;
    } else {
        cout << "输入有误!" << endl;
        return;
    }
}
/**
 * 显示所有员工信息
 * @TODO 只需要遍历出员工数组的指针即可
 */
void WorkerManager::showWorkerInfo() {
//    cout<<"职工ID\t\t职工姓名\t\t职工部门"<<endl;
//    for (int i = 0; i < this->workerCount; ++i) {
//        Worker * w = this->workerArr[i];
//        w->showInfo();
//    }
}

/*
 * 展示菜单
 * @TODO 列出菜单列表，与用户进行交互
 */
void WorkerManager::show_menu() {
    cout << "---------欢迎使用职工管理系统---------" << endl;
    cout << "\t\t\t0.退出系统" << endl;
    cout << "\t\t\t1.增加职工信息" << endl;
    cout << "\t\t\t2.显示职工信息" << endl;
    cout << "\t\t\t3.修改职工信息" << endl;
    cout << "\t\t\t4.查找职工信息" << endl;
    cout << "\t\t\t5.删除职工信息" << endl;
    cout << "\t\t\t6.按照编号排序" << endl;
    cout << "\t\t\t7.清空所有职工" << endl;
    cout << "--------------------------------------------------" << endl;
}
/**
 * 保存员工信息
 * @TODO 利用fstream将用户的信息保存
 */
void WorkerManager::save() {
    //写入流对象
    ofstream ofs("empInfo.txt",ios::out);
    for (int i = 0; i < workerCount; ++i) {
        ofs<<workerArr[i]->id<<"\t\t"<<workerArr[i]->name<<"\t\t"<<workerArr[i]->id<<endl;
    }
    ofs.close();
}

void WorkerManager::exitSystem() {
    cout << "欢迎再次使用本系统" << endl;
    exit(0);
}

