#include<iostream>
#include<string>
using namespace std;

/*
"Enter your age: "
"Enter your height: "
"Enter your bounty: "
"Your character = "
"Zoro"
"Sanji"
"Usopp"
"Chopper"
"Franky"
"Brook"
"Jinbe"
*/


int main()
{
    int age,height,bounty;
    string c;

    cout << "Enter your age: ";
    cin >> age;
        if(age<=25){
            cout << "Enter your height: ";
            cin >> height;
                if (height<100){
                    c="Chopper";
                }else{
                    if (height<180){
                        c="Usopp";
                    }else{
                        cout << "Enter your bounty: ";
                        cin >> bounty;
                            if(bounty>1100000000){
                                c="Zoro";
                            }else{
                                c="Sanji";
                            }
                    }
                }

        }else if(age<=60){
            cout << "Enter your bounty: ";
            cin >> bounty;
                if (bounty>500000000){
                    c="Jinbe";
                }else{
                    c="Franky";
                }
        }else{
            c= "Brook";
        }
cout << "Your character = " << c;
}