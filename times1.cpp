//times1.cpp
//converts from time24 to time12 using operator in time24
#include<iostream>
#include<string>
#include<process.h>
using namespace std;

class time12
{
    private:
        bool pm;
        int hrs;
        int mins;
    public:
        time12() : pm(true), hrs(0), mins(0)
        {   }
        time12(bool ap, int hr, int min) : pm(ap), hrs(hr), mins(min)
        {   }
        void display()
        {
            cout << hrs <<":";
            if (mins < 10)
                cout << "0";
            cout << mins << " ";
            string am_pm = pm ? "p.m" : "a.m";
            cout << am_pm;
        } 
};

class time24
{
    private:
        int hours;                      //0 to 23
        int minutes;                    //0 to 59
        int seconds;                    //0 to 59
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
        operator time12() const;
};

time24::operator time12() const
{
    int hrs24 = hours;
    bool pm24 = hours < 12 ? false : true;

    int mins24 = seconds < 30? minutes : minutes + 1;

    if (mins24 == 60)
    {
        hrs24++;
        mins24 = 0;
    }

    if (hrs24 == 12 || hrs24 == 24)
    {
        pm24 = (pm24 == true)? false: true;
    }

    int hrs12 = (hrs24 < 13) ? hrs24 : hrs24-12;

    if (hrs12 == 0)
    {
        hrs12 = 12; pm24 = false;
    }

    return time12(pm24, hrs12, mins24);
}

int main()
{
    int hours, minutes, seconds;
    cout << "Enter time in 24 hrs format (00:00:00): \n";
    cout << "Enter Hours (0-23): "; cin >> hours;
    if (hours > 23)
        exit(1);                         // quit if hours > 23
    cout << "Enter minutes: "; cin >> minutes;
    cout << "Enter seconds: "; cin >> seconds;

    time24 t24(hours,minutes,seconds);
    cout << "You entered: ";
    t24.display();
    cout << endl;

    time12 t12 = t24;

    cout << "Time in 12-hour format: ";
    t12.display();
    cout << endl;
    return 0;
}
