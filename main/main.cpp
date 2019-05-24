#include <iostream>
#include <vector>
#include "../header/WorkerManager.h"
#include "../header/Worker.h"
#include "../header/Employee.h"
#include "../header/Manager.h"
#include "../header/Boss.h"


using namespace std;

int main() {
    //实例化职工管理系统
    WorkerManager wm;
    //用户的选择
    int choose(-1), isExit(1);
    while (isExit) {
        vector<int> c;
        //显示菜单
        wm.show_menu();
        cout << "请选择:";
        cin >> choose;
        switch (choose) {
            //退出系统
            case 0: {
                wm.exitSystem();
                isExit=0;
                break;
            }
                //新增
            case 1: {
                wm.addWorker();
                break;
            }
                //显示所有职工人员信息
            case 2: {
                wm.showWorkerInfo();
                break;
            }
                //修改
            case 3: {
                wm.updateWorker();
                break;
            }
                //查找
            case 4: {
                wm.findWorker();
                break;
            }
                //删除
            case 5: {

                break;
            }
                //排序
            case 6: {
                break;
            }
                //清空
            case 7: {
                break;
            }
            default: {
                system("clear");
                break;
            }
        }

    }

}
