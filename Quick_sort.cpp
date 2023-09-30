
#include <iostream>

using namespace std;

void quick_sort(int[],int,int);
int partition(int[],int,int);
int main()
{
    int a[50],n,i;
    cout<<"How many elements?";
    cin>>n;
    cout<<"\nEnter array elements:";

    for(i=0;i<n;i++)
        cin>>a[i];

    quick_sort(a,0,n-1);
    cout<<"\nArray after sorting:";

    for(i=0;i<n;i++)
        cout<<a[i]<<" ";

    return 0;
}
void quick_sort(int a[],int start,int ed)
{
   int pindex;
   if(start<ed)
   {
    pindex=partition(a,start,ed);
    quick_sort(a,start,pindex-1);
    quick_sort(a,pindex+1,ed);
   }
}
int partition(int a[],int start,int ed)
{
    int pindex=start;
    int pviot = a[ed];
    int i;
    for(i=start;i<ed;i++)
    {
        if(a[i]<=pviot)
            {
                swap(a[i],a[pindex]);
                pindex++;
            }
    }
    swap(a[pindex],a[ed]);
    return pindex;
}
