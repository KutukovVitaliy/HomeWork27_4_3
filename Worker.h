//
// Created by kvitadmin on 17.11.2021.
//

#ifndef HOMEWORK27_4_3_WORKER_H
#define HOMEWORK27_4_3_WORKER_H


class Worker {
    class Manager* manager = nullptr;
    std::string currentTask;
public:
    Worker(class Manager* inManager) : manager(inManager) {currentTask = "nothing";}
    void SetTask(std::string task){ currentTask = std::move(task);}
    std::string GetTask(){return currentTask;}
};


#endif //HOMEWORK27_4_3_WORKER_H
