
/*Write a program for a bakery inventory.
Read N items and quantity left of each.
If quantity < 8 print “Reorder Needed”.
Count how many items need reorder.*/

#include <iostream>
using namespace std;
int main()
{
    int items,quantity;
    int reorderCount=0;
    
    cout<<"Enter number of items =";
    cin>>items;
    
    for(int i=1; i<=items; i++)//for input
    {
        cout<<"Enter quantity"<<i<<"=";
        cin>>quantity;
    
        if(quantity<8)//condition
         {
        cout<<"Reorder needed"<<endl;
        reorderCount++;
         }
    }
    cout<<"Items that need to reorder ="<<reorderCount;

    return 0;
}
