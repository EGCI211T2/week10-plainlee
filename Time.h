struct Time{
	int m,h,s;
};


//create 3 functions

//1.  getTime function
//2. subtract fuctions
//3. display functions

void getTime(struct Time &t){
    cout<<"Input Time(h m s)";
    cin>>t.h>>t.m>>t.s;
}

struct Time subtract (struct Time t2,struct Time t1){
    struct Time t3; // t3 = t2 - t1
    t3.s = t2.s - t1.s;
    t3.m = t2.m - t1.m;
    t3.h = t2.h - t1.h;

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

void display(struct Time &t) {
    cout << setfill('0') << setw(2) << t.h << ":"
         << setfill('0') << setw(2) << t.m << ":"
         << setfill('0') << setw(2) << t.s << endl;
}