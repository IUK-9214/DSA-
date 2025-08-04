class Solution {
public:
    int maxArea(vector<int>& height) {
int i =0;
int j=height.size()-1;
int maxWater=0;
while (i<j){
    int w=j-i;
    int ht=min (height[i],height[j]);
    int storeWater=w*ht;
     maxWater=max(maxWater,storeWater);
     if(height[i]<height[j]){
    i++;
     }
     else{
        j--;
     }
}
return maxWater;
    }
};