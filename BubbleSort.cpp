#include<bits/stdc++.h>
using namespace std;


/////////////////////////////////////For Static Arr/////////////////////////////////////////////


void bubbleSort(int arr[], int n){
    bool swaped = false;
    for(int i = 0; i< n - 1; i++){
        for(int j = 0; j < n - 1 - i; j++){
            if(arr[j] > arr[j + 1]){
                swaped = true;
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
        if(!swaped){
            break;
        }
    }
}
///////////////////////////////////////////////////////////////////////////////////////////////

////////////////For Dynamic Array/////////////////////////////////////////////////////////////////

void bubbleSortV(vector<int> & arr)
{
    bool swaped = false;
    int n = arr.size();
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swaped = true;
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
        if (!swaped)
        {
            break;
        }
    }
}

//////////////////////////////////////////////////////////////////////////////////////////////////



int main()
{
    vector<int> arr = {2, 54, 23, 2, 3, 12, 1224, 3, 5, 1, 0, - 3, - 54, 1224, 23, 24, 45, 76, 43, 12};

    for(int i = 0; i < arr.size(); i++){
        cout<< arr[i] << " ";
    }

    cout<<endl;
    bubbleSortV(arr);

    for (int i = 0; i < arr.size(); i++)
    {
        cout<< arr[i] << " ";
    }

    return 0;
}