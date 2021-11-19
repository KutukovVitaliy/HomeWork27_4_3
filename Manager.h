//
// Created by kvitadmin on 17.11.2021.
//

#ifndef HOMEWORK27_4_3_MANAGER_H
#define HOMEWORK27_4_3_MANAGER_H
#include "Worker.h"
#include <ctime>

class Manager {
private:
    int countWorkers = 1;
    Worker** workers = nullptr;

    int managerNumber;
public:
    static int gen;
    Manager();
    void SetCountWorkers(int inCountWorkers);
    ~Manager();
    int GetCountWorkers();
    Worker* GetWorkerPtr(int index);
    int GetTaskCount(int task);
    int GetFreeWorkers();
    std::string GetRandomTask();
    int SetTaskToWorkers(int task);
    int GetManagerNumber();

};

#endif //HOMEWORK27_4_3_MANAGER_H
