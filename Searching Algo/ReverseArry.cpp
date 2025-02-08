// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;


void reverseArry(int arr[], int sz){
    int start=0,  end= sz-1;
    
    while(start < end){
        swap(arr[start], arr[end]);
        start ++;
        end --;
    }
}

int main()  {
    int arr[] = {1, 2, 3, 4, 5, 6};
    int sz = 6;
    
    reverseArry(arr, sz);
    
    for(int i = 0; i<sz; i++){
        cout<< arr[i] << " ";
    }
    cout<<endl;
}