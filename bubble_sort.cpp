
#include<iostream>

using namespace std;

int main()
{
    int i,s,arr[100];

    cout<<"Enter the size of array ";
    cin>> s;
    for(i=0; i<s; i++)
        cin>>arr[i];
    //max=arr[0];
   // bool swaped;
    for(i=0; i<s; i++)
    {
      // swaped= false;
       for (int j=0; j<s-1;j++)
        {
            if(arr[j]>arr[j+1]){
            swap(arr[j],arr[j+1]);
           // swaped=true;
           }

        }
        //if(swaped==false)
           // break;
    }
     for(i=0; i<s; i++)
        cout<<" "<<arr[i];
}
