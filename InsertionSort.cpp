#include<bits/stdc++.h>
using namespace std;
//////////////////////////////For Static Array////////////////////////////////////////////////
void InsertionSort(int arr[], int n){
    for(int i = 1; i < n; i++){
        int temp = arr[i];
        int j = i - 1;

        while(j >= 0 && arr[j] > temp){
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = temp;
    }
}

//////////////////////////////////////////////////////////////////////////////////////////////


////////////////////////////For Dynamic Array/////////////////////////////////////////////////

void InsertionSortV(vector<int> & arr)
{
    int n = arr.size();
    for (int i = 1; i < n; i++)
    {
        int temp = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > temp)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = temp;
    }
}

//////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    vector<int> arr = {7, 4, 2, 1, 7, 5, 0};
    for(int i = 0; i < 7; i++){
        cout<< arr[i] << " ";
    }
    InsertionSortV(arr);
    cout<<endl;
    for(int i = 0; i < 7; i++){
        cout<< arr[i] << " ";
    }
    return 0;
}