class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        // int i,j;
        // for (i= 0; i<=(nums.size()/2);i++){
        //     for(int j = nums.size()-1;j>= nums.size()/2;j--){
        //     if(i!=j){
        //     if(nums[i] == nums [j]) return true;
        //     }
        //     }
        // }
        //     return false;
        
        unordered_map<int,size_t> count;
        
        for (int i=0;i<nums.size();i++){
            count[nums[i]]++;
        }
        
        for(auto &c:count){
            if(c.second >= 2){
                return true;
            }
        }
        
        return false;
        
}
};
