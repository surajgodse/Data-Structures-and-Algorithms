#include <iostream>
using namespace std;
#include <vector>
#include <climits>

vector<int> pairSum(vector<int> nums, int target){
    vector<int> ans;
    int sz = nums.size();
    
    for(int i = 0; i<sz; i++){
        for(int j = i+1; j<sz; j++){
            if(nums[i] + nums[j] == target){
                ans.push_back(i);
                ans.push_back(j);
                return ans;
            }
        }
    }
    return ans;
}

int main()  {
    vector<int> nums ={2,7,11,15};
    int target = 9;
    
    vector<int> ans = pairSum(nums, target);
    
    cout<< ans[0] << "," << ans[1];
    return 0;
}