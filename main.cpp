//Week10
// #include <iostream>
// #include <iomanip>

// using namespace std;

// #include "Time.h"

// int main(){
//     struct Time t1,t2,t3;
//     cout<<"What time was it?\n";
//     getTime(t1);
//     cout<<"What time is it now?\n";
//     getTime(t2);
//     t3=subtract(t2,t1); //t3=t2-t1
//     cout<<"Time diff is ";
//     display(t3);
// }

//Week11
#include <iostream>
#include <iomanip>

using namespace std;

#include "Time.h"

int main(){
    Time t1,t2,t3;
    // t1.set_time(5,60);
    // t2.set_time(6);
    t1.get_time();
    t2.get_time();
    t3=t2.subtract(t1);

    //t3-t2-t1
    t1.display();
    t2.display();
    t3.display();

    // cout<<"What time was it?\n";
    // //getTime(t1);
    // t1.set_time
    // cout<<"What time is it now?\n";
    // // getTime(t2);
    // t2.set_time
    // t3=subtract(t2,t1); //t3=t2-t1
    // cout<<"Time diff is ";
    // display(t3);
}
