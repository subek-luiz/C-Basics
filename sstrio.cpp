 // sstrio.cpp
 // string class input/output
 #include <iostream>
 #include <string>
 using namespace std;

 int main()
 {
    string fullname, nickname, address;
    string greeting("Hello, ");

    cout << "Enter your full name: ";
    getline(cin,fullname);
    cout << "Your full name is: " << fullname << endl;

    cout << "Enter your nickname: ";
    cin >> nickname;
    
    greeting += nickname;
    cout << greeting << endl;

    cout << "Enter your address on seperate lines\n";
    cout << "Terminate with '$' \n";

    getline(cin,address,'$');
    cout << "Your address is: " << address << endl;
     
    return 0;
 }
 