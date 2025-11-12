#include<iostream>
using namespace std;

int main(){
    int n, m;
    cin>>n>>m;
    

    int arr1[n], arr2[m];
    int mergedArr[n + m];

    for (int i = 0; i < n; i++){
        cin>>arr1[i];
    }
    cout<<"Array 1: ";
    for (int i = 0; i < n; i++){
        cout<<arr1[i]<<" ";
    }
    cout<<endl;

    
    for (int i = 0; i < m; i++){
        cin>>arr2[i];
    }

    cout<<"Array 2: ";
    for (int i = 0; i < m; i++){
        cout<<arr2[i]<<" ";
    }
    cout<<endl;

    for (int i = 0; i < n; i++){
        mergedArr[i] = arr1[i];
    }

    for (int i = 0; i < m; i++){
        mergedArr[n + i] = arr2[i];
    }

    cout<<"Merged Array: ";
    for (int i = 0; i < n + m; i++){
        cout<<mergedArr[i]<<" ";
    }

}