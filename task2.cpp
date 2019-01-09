/***************Task 2**************/
/***********The factorial**********/
#include <iostream>
using namespace std;
 
int main()
{
    int value = 0, data = 1, i = 1;
        cout<<"Enter the value of n! : ";
        cin >> value;
    while((value < 1) || (value > 40320)){
        cout<<"Enter the value of n! : ";
        cin >> value;
    }
    while(value != data)
    {
        if(data>value)
        {
            cout<<"There is no such number whose factorial is equal " << value << endl;
            break;
        }
        i++;
        data*=i;
    }
    if(data==value)
    {
        cout<<endl<<"Result of calculations: "<<i<<endl;
    }    
    return 0;
}
