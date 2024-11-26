#include "tasks_lib.h"
using namespace std;

class Robot{
    private:
        int speed;
        int weight;
        int size;
        int number_of_sensors;

    public:
        Robot(int nos, int sp, int sz, int w,const string &name) : number_of_sensors(nos), speed(sp),weight(w),size(sz) {
            cout<<name<<" info..."<<endl<<"Number of sensors "<<nos<<endl<<"Robot speed in m/s = "<<sp<<endl<<"Robot size in sq mm = "<<sz<<endl<<"Robot weight = "<<w<<endl<<endl;

        }
        void moveForward(string &name){
            cout<<name<<" moving forward."<<endl;
        }
        void moveBackward(string &name){
            cout<<name<<" moving backward."<<endl;
        }
        void stop(string &name){
            cout<<name<<" stopped moving."<<endl<<endl;
            
        }
        void temp(string &name,int t){
            cout<<name<<" temperature : "<<t<<"C"<<endl;
            
        }
        void distance(string &name,int d){
            cout<<name<<" distance : "<<d<<"cm"<<endl;
            
        }
};
namespace robot_1{
    string name="Robot Alpha";
    Robot robotObj(4,2,400,5,name);
}
namespace robot_2{
    string name="Robot Beta";
    Robot robotObj(4,3,300,4,name);
}

int main(){


    robot_1::robotObj.moveForward(robot_1::name);
    robot_1::robotObj.moveBackward(robot_1::name);
    robot_1::robotObj.stop(robot_1::name);

    robot_2::robotObj.moveForward(robot_2::name);
    robot_2::robotObj.moveBackward(robot_2::name);
    robot_2::robotObj.stop(robot_2::name);

    return 0;
}