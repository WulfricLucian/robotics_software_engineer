#include "tasks_lib.h"
using namespace std;

TempSensor :: TempSensor(string &tvalue,char units) : tempValue(tvalue),siUnit(units){

    cout<<"Current temperature of the atmosphere is : "<<tempValue<<endl;
    cout<<"Temperaure SI unit: "<<siUnit<<endl;
}

DistSensor :: DistSensor(double dvalue) : distValue(dvalue){

    cout<<"Distance recorded to the nearest obstacle is : "<<distValue<<"cm"<<endl;
}

