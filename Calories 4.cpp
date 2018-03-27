#include<bits/stdc++.h>
using namespace std;

int main()
{

    cout<<"Welcome to Harris-Benedict Program"<<endl;
    cout<<"Please Enter your Gender"<<endl;
    cout<<"1- Male "<<endl;
    cout<<"2- Female"<<endl;
    float h,w,a,bmr,bar=230;
    int x,o;
    bool fail;
    cin >>x;
    while ((x!=1) && (x!=2)){
        cout<<"Choose from 1 or 2"<<endl;
        cin>>x;
    }
    cout <<"Enter your height in cm: "<<endl;
    cin>>h ;
    h=h/2.54;
    cout<<"Enter your weight in kg: "<<endl;
    cin>>w;
    w=w*2.2046;
    cout<<"Enter your age: "<<endl;
    cin>>a;
    if (x==1)
        bmr=66 +(6.3*w)+(12.9 * h) - (6.8 *a);
    else if  (x==2)
        bmr=655+(4.3 * w) +( 4.7 * h) -(4.7 * a);
    o=bmr/bar;
    cout<<"You should consume "<<o<<" chocolate bars";
    return 0;
}
