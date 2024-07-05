// times2.cpp
// converts from time24 to time12 using constructor in time12
#include<iostream>
#include<string>
using namespace std;

class time24
{
    private:
        int hours;
        int minutes;
        int seconds;
    public:
        time24() : hours(0), minutes(0), seconds(0)
        {   }
        time24(int h, int m, int s) : hours(h), minutes(m), seconds(s)
        {   }
        void display()
        {
            if (hours < 10)     cout << "0";
            cout << hours << ":";
            if (minutes < 10)   cout << "0";
            cout << minutes << ":";
            if (seconds < 10)   cout << "0";
            cout << seconds;            
        }
        int gethrs() const
        { return hours; }
        int getmin() const
        { return minutes; }
        int getsec() const
        { return seconds; }
};

class time12
{
    private:
        bool pm;
        int hrs;
        int min;
    public:
        time12() : pm(true), hrs(0), min(0)   // no-arg constructor
        {   }
        time12(time24);                        // 1-arg constructor
        time12(bool ap, int h, int m) : pm(ap), hrs(h), min(m)
        {   }
        void display()
        {
            cout << hrs << ":";
            if (min < 10)
                cout << "0";
            cout << min << " ";
            string ampm = pm ? "p.m" : "a.m";
            cout << ampm;
        }
};

time12::time12(time24 t24)
{
    int hrs24 = t24.gethrs();
    
    pm = (hrs24 < 12) ? false : true;

    min = (t24.getsec() < 30) ? t24.getmin() : t24.getmin() + 1;

    if (min == 60)
    {
        min = 0;
        hrs24++;
        if (hrs == 12 || hrs == 24)
            pm = (pm == true) ? false: true;
    }

    hrs = (hrs24 < 13) ? hrs24 : hrs24 - 12;

    if (hrs == 0)
    {
        hrs = 12; pm = false;
    }
     
};

int main()
{
    int h,m,s;

    while (true)
    {
        cout << "Enter time in 24hrs format: \n";
        cout << "Hours (0 to 23): "; cin >> h;
        if (h > 23)
            return(1);
        cout << "Minutes (0 to 59): "; cin >> m;
        cout << "Seconds: "; cin >> s;

        time24 t24(h,m,s);
        cout << "You entered: ";
        t24.display();

        time12 t12 = t24;
        cout << "\n 12 hour time: ";
        t12.display();

        cout << endl;
    }
    
    return 0;
}
