#include "tasks_lib.h"
using namespace std;



int main(){

    string tempSensor="23";
    char si='C';
    double distSensor=33.56;

    TempSensor alpha_temp(tempSensor,si);
    DistSensor alpha_dist(distSensor);

    return 0;
}