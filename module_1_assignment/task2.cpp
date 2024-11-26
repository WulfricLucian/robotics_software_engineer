#include "tasks_lib.h"
using namespace std;

class Robot{
    
    public:
        void temp(string &name,int t){
            cout<<name<<" temperature : "<<t<<"C"<<endl;
            
        }
        void distance(string &name,int d){
            cout<<name<<" distance : "<<d<<"cm"<<endl;
            
        }
};
namespace robot_1{
    string name="Robot Alpha";
    Robot robotObj;
}
namespace robot_2{
    string name="Robot Beta";
    Robot robotObj;
}

int main(){

    robot_1::robotObj.temp(robot_1::name,21);
    robot_1::robotObj.distance(robot_1::name,96);

    robot_2::robotObj.temp(robot_2::name,25);
    robot_2::robotObj.distance(robot_2::name,100);
    
    return 0;
}