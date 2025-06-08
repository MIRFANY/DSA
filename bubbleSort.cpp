#include <iostream>
using namespace std;

void bubbleSort(int *arr, int n)
{
    for (int i = 0; i < n ; i++)
    {
        for (int j = i + 1; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

void selectionSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int minIndex = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
        }
        swap(arr[i], arr[minIndex]);
    }
}

int partition(int arr[],int s,int e){
    int n= sizeof(arr)/sizeof(arr[0]);
    int pivot=arr[s];
    int cnt=0;
    for(int i=0;i<n;i++){
        if(arr[i]<pivot){
            cnt++;
        }
        
    }

    int pivotIndex= s+cnt;
    swap(arr[pivotIndex], arr[s]);


    int i=s,j=e;

    while(i<pivotIndex && j > pivotIndex){
        while(arr[i]<=pivot){
            i++;
    }
        while(arr[j] > pivot){
            j--;
        }
        if(i<pivotIndex && j> pivotIndex){
            swap(arr[i++], arr[j--]);
        }

    }

    return pivotIndex;
}

int quickSort(int arr[], int s, int e)
{
    if (s >= e)
    {
        return 0;
    }
    int p = partition(arr, s, e);

    quickSort(arr, s, p - 1);
    quickSort(arr, p + 1, e);

}

int partition(int arr[], int s, int e){
    int n=arr.size();
    // first we need pivot
    int pivot=arr[s];

    //now find the place of pivot elt
    int cnt=0;
    for(int i=0;i<n;i++){
        if(arr[i] < pivot){
            cnt++;
        }
    }


    //now swap the elements 
    int pivotIndex= s+cnt;
    swap(arr[i],arr[pivotIndex]);

    //left and right wala part

    int i=s,j=e;

    while( i<pivotIndex && j>pivotIndex){
        while(arr[i] <= pivot){
            i++;
        }

        while(arr[j] > pivot){
            j--;
        }

        if(i < pivotIndex && j>pivotIndex){
            swap(arr[i++], arr[j--]);
        }
        return pivotIndex;
    }


    


    //
}

int quickSort(int arr[], int s, int e){
    if(s >= e){
        return 0;
    }

    int p=partition(arr, s,e);
    quickSort(arr, s,p-1);
    quickSort(arr, p+1 , e);

}

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;


    int *arr = new int[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    quickSort(arr, 0, n - 1);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    delete[] arr;
    return 0;
}