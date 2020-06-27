class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int j=0,temp,i;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]!=0 && nums[j]==0)
            {
                temp=nums[i];
                nums[i]=nums[j];
                nums[j]=temp;
            }
            if(nums[j]!=0)
                j++;
        }
        cout<<"[";
        for(int i=0;i<nums.size();i++)
        {
            if(i!=nums.size()-1)
                cout<<nums[i]<<",";
            else
               cout<<nums[i]; 
        }
        
        cout<<"]";
    }
};
