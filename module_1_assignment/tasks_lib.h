#ifndef ASSIGN_H
#define ASSIGN_H

#include <iostream>
#include <vector>

class TempSensor{
    private:
        std::string tempValue;
        char siUnit;
    public:
        TempSensor(std::string &tvalue,char units);    

};
class DistSensor{
    private:
        double distValue;
    public:
        DistSensor(double dvalue);

};


#endif