#include <iostream>
using namespace std;
void marge(int left[],int right[],int a[],int nl, int nr)
{
   //int nl=sizeof(left)/sizeof(left[0]);
    //int nr=sizeof(right)/sizeof(right[0]);

    int i=0;
    int j=0;
    int k=0;

    while(i<nl && j<nr)
    {
        if(left[i]<=right[j])
        {
            a[k]=left[i];
            i++;
        }
        else{
            a[k]=right[j];
            j++;
        }
        k++;
    }
    while(i<nl)
    {
        a[k]=left[i];
        i++;
        k++;
    }
    while(j<nr)
    {
        a[k]=right[j];
        j++;
        k++;
    }
}

void marge_sort(int a[],int n)
{
    //int n=sizeof(a)/sizeof(a[0]);
     //for(int i=0;i<n;i++)
       // cout<<a[i]<<" ";
    if(n<2)
        return;
    int mid=n/2;
    int left[mid];
    int right[n-mid];
    for (int i=0; i<mid; i++)
        left[i]=a[i];
    for (int i = mid ; i < n; i++)
        right[i - mid] = a[i];
    marge_sort(left,mid);
    marge_sort(right,n-mid);
    marge(left,right,a,mid,n-mid);

}
int main()
{
    int a[50],n,i;
    cout<<"How many elements?";
    cin>>n;
    cout<<"\nEnter array elements:";

    for(i=0;i<n;i++)
        cin>>a[i];

    marge_sort(a,n);
    cout<<"\nArray after sorting:";

    for(i=0;i<n;i++)
        cout<<a[i]<<" ";

    return 0;
}


/*
#include<iostream>
using namespace std;

void Merge(int left[], int right[], int arr[], int nL, int nR)
{

    int i = 0;
    int j = 0;
    int k = 0;

    while (i < nL && j < nR)
    {
        if (left[i] < right[j])
        {
            arr[k] = left[i];
            i = i + 1;
        }
        else
        {
            arr[k] = right[j];
            j = j + 1;
        }
        k = k + 1;
    }

    while (i < nL)
    {
        arr[k] = left[i];
        i = i + 1;
        k = k + 1;
    }

    while (j < nR)
    {
        arr[k] = right[j];
        j = j + 1;
        k = k + 1;
    }
}

void MergeSort(int arr[], int n)
{
    if (n < 2)
    {
        return;
    }

    int mid = n / 2;
    int left[mid];
    int right[n - mid];

    for (int i = 0; i < mid; i++)
    {
        left[i] = arr[i];
    }

    for (int i = mid; i < n; i++)
    {
        right[i - mid] = arr[i];
    }

    MergeSort(left, mid);
    MergeSort(right, n - mid);
    Merge(left, right, arr, mid, n - mid);
}

void PrintArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr[] = {  6,  2,  3,  1, 9, 10, 15, 13, 12, 17 };
    int n = sizeof(arr) / sizeof(arr[0]);
    MergeSort(arr, n);
    PrintArray(arr, n);
    return 0;
}*/
