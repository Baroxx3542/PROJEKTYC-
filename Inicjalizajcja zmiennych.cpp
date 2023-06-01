#include <iostream>
using namespace std;
int main()
{
    int x;
    int y;
    cout<<"Podaj liczbe a powiem ci wartosc."<<endl;
    cin>>x;

    if(x>=20){y = 30;}
    else if(x>=10){y = 20;}
    else{y = 10;}
    cout<<"Wartosc to: "<<y<<endl;

    return 0;
}

