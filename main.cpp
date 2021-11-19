#include <iostream>
#include "Manager.h"

int main() {
    int commandQuantity, worksQuantity;
    std::cout << "Enter the command quantity: " ;
    std::cin >> commandQuantity;
    Manager* manager = new Manager[commandQuantity];
    for(int i = 0;i < commandQuantity; ++i ){
        std::cout << "Enter the workers quantity in command #" << i+1 << ": ";
        std::cin >> worksQuantity;
        manager[i].SetCountWorkers(worksQuantity);
    }
    for(int i = 0;i < commandQuantity; ++i ){
        std::cout << "Manager #" << i+1 << ": " << std::endl;
        std::cout << "manager number is " << manager[i].GetManagerNumber() << std::endl;
        for(int j =0; j < manager[i].GetCountWorkers(); ++j){
            std::cout << "workers #" << j+1 << ": " << manager[i].GetWorkerPtr(j)->GetTask() << std::endl;
        }
    }
    return 0;
}
