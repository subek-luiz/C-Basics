// objpart.cpp
// widget part as an object
#include <iostream>
using namespace std;

class part
{
    private:
        int modelnumber;
        int partid;
        float cost;
    public:
        void setpart(int model, int pid, float c)
        {
            modelnumber = model;
            partid = pid;
            cost = c;
        }
        void showpart()
        {
            cout << "Model number: " << modelnumber << "\t" << "PartID: " << partid << "\t" << "Cost: " << cost << endl;
        }

};

int main()
{
    part p1,p2;

    p1.setpart(350, 01, 1000.56);
    p2.setpart(500, 04, 4230.35);

    p1.showpart();
    p2.showpart();
    
    return 0;
}
