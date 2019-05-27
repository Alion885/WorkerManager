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
    int choose(-1), isExit(1),sys(-1);
    while(sys==-1){
      cout<<"请选择你的操作系统(1.Linux\t2.Windows):";
      cin>>sys; 
    }
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
                wm.deleteWorker();
                break;
            }
                //排序
            case 6: {
                wm.sortWorkerByID();
                break;
            }
                //清空
            case 7: {
                wm.clearAllWorker();
                break;
            }
            default: {
                system("clear");
                break;
            }
        }
        cout << "请按任意键继续..." << endl;
        if(sys==1){
          system("read -n 1");
          cout<<endl;
          system("clear");
        }else{
          system("pause");
          cout<<endl;
          system("cls");
        }
    }
}
