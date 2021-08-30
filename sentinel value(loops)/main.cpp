//
//  main.cpp
//  sentinel value(loops)
//
//  Created by MARTIN on 30/08/2021.
//

#include <iostream>

using namespace std;
int main()
{
    int total = 0;
    int grade;
    double average;
    int counter = 0;
    
    cout<<"enter the grades here -1 to finish"<<endl;
    cin>>grade;
    
    while(grade!=-1)
    {
        total=grade+total;
        counter++;
        cout<<"enter grade here -1 to finish"<<endl;
        cin>>grade;
    }
    
    if(counter!=0)
    {
        average=total/counter;
        cout<<"average is"<<average<<endl;
    }
    else
    {
        cout<<"no grade was entered into the system"<<endl;
    }
    
    return 0;
}
