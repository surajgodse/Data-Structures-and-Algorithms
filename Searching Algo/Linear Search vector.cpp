
#include <iostream>
using namespace std;
#include <vector>

int LinearSearch(const vector<int>numbers, int target){
    for(int i = 0; i<numbers.size(); i++){
        if(numbers[i] == target){
            return i;
        }
        
    } 
    return -1;
}

int main()  {
    vector<int> numbers = {20, 4, 5, 34, 69};
    int target = 4;
    
    cout << LinearSearch(numbers, target);
}