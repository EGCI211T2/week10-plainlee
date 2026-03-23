//Week10
// struct Time{
// 	int m,h,s;
// };


// //create 3 functions

// //1.  getTime function
// //2. subtract fuctions
// //3. display functions

// void getTime(struct Time &t){
//     cout<<"Input Time(h m s)";
//     cin>>t.h>>t.m>>t.s;
// }

// struct Time subtract (struct Time t2,struct Time t1){
//     struct Time t3; // t3 = t2 - t1
//     t3.s = t2.s - t1.s;
//     t3.m = t2.m - t1.m;
//     t3.h = t2.h - t1.h;

//     if (t3.s < 0) { //if -s, borrow 1 min
//         t3.s += 60;
//         t3.m--;
//     }
    
//     if (t3.m < 0) { //if -m, borrow 1 hr
//         t3.m += 60;
//         t3.h--;
//     }
    
//     if (t3.h < 0) { // if -t, +24 -> tomorrow
//         t3.h += 24;
//     }

//     return t3;
// }

// void display(struct Time &t) {
//     cout << setfill('0') << setw(2) << t.h << ":"
//          << setfill('0') << setw(2) << t.m << ":"
//          << setfill('0') << setw(2) << t.s << endl;
// }

//Week11
class Time{
    private:
	    int m,h,s;
    public:
        void set_time(int,int,int);
        void display();
        Time subtract(Time);

        void get_time();
        Time operator-(Time);
};

void Time::get_time(){
    cout<<"Input time:";
    cin>>h>>m>>s;
    set_time(h,m,s);
}

void Time::set_time(int a=0,int b=0,int c=0){
    if(a>24 || a<0)h=0; else h=a;
    if(b>59 || b<0)m=0; else m=b;
    if(c>59 || c<0)s=0; else s=c;
}

Time Time::subtract (Time t1){
    struct Time t3; // t3 = t2 - t1
    t3.s = s - t1.s;
    t3.m = m - t1.m;
    t3.h = h - t1.h;

    if (t3.s < 0) { //if -s, borrow 1 min
        t3.s += 60;
        t3.m--;
    }
    
    if (t3.m < 0) { //if -m, borrow 1 hr
        t3.m += 60;
        t3.h--;
    }
    
    if (t3.h < 0) { // if -t, +24 -> tomorrow
        t3.h += 24;
    }

    return t3;
}

void Time::display() {
    cout << setfill('0') << setw(2) << h << ":"
         << setfill('0') << setw(2) << m << ":"
         << setfill('0') << setw(2) << s << endl;
}