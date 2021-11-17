//
// Created by kvitadmin on 17.11.2021.
//

#ifndef HOMEWORK27_4_3_MANAGER_H
#define HOMEWORK27_4_3_MANAGER_H
#include "Worker.h"

class Manager {
    int countWorkers;
    Worker** workers = nullptr;
    static int managerNumber;
public:
    Manager(int inCountWorkers) : countWorkers(inCountWorkers){
        ++managerNumber;
        if(countWorkers > 0){
            workers = new Worker*[countWorkers];
            for (int i =0; i < countWorkers; ++i){
                workers[i] = new Worker(this);
            }
        }
    }
    ~Worker(){delete workers; managerNumber = 0;}
};


#endif //HOMEWORK27_4_3_MANAGER_H
