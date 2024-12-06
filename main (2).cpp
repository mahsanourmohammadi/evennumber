
#include<iostream>
using namespace std;
int main()
    {
       int a;
        cout<<"are you a member of the customer club?:  ";
        cin>>a;
        int age;
        cout<<"enter your age :";
        cin>>age;
    if(age<=12)
          cout<<"ticket cost is 10 Dollers.";
        else if(age>=12 && age<=18 && a==1)
          cout<<"ticket cost is 12 Dollers.";
        else if (age>=12 && age<=18 && a!=1)
            cout<<"ticket cost is 15 Dollers.";

    if(age>18 && age<=60 && a==1)
          cout<<"ticket cost is 20 Dollers.";
        else if(age>18 && age<=60 && a!=1)
            cout<<"ticket cost is 25 Dollers.";
        else if(age>60 && a==0)
             cout<<"The ticket price has been discounted and now is 10 dollers.";


return 0;
    }
