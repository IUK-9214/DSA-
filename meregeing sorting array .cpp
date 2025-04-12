#include<iostream>
#include<vector>
using namespace std;
class Solution {
    public:
        void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
            int x=m-1; //set to the last index of nums1 array;
            int y=n-1;//set to the last index of the nums2 array;
            int k=m+n-1;//set to the last of the merege array
            while(x>=0&&y>=0){//loop will run upto whne x and y is equally to 0;
                if (nums1[x]>nums2[y]){
                    nums1[k--]=nums1[x--]; //adding to the last of the array 
                }
                else{
                    nums1[k--]=nums2[y--];
                }
                while(y>=0){
                    nums1[k--]=nums2[y--];
                }
            }
        }
    };
int main (){

    return 0;
}