//
// Created by evanmeek on 19-5-23.
//

#include "Worker.h"

class WorkerManager {
public:
    //展示菜单
    void show_menu();

    //析构函数
    ~WorkerManager();

    //构造函数
    WorkerManager();

    //退出系统
    void exitSystem();

    //新增职工
    void addWorker();

    //显示所有员工信息
    void showWorkerInfo();

    //保存员工信息
    void save();
private:
    //员工总数
    int workerCount;

    //员工数组指针
    Worker ** workerArr;


};
