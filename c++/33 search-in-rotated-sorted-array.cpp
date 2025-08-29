class Solution {
public:
    int search(vector<int>& a, int target) {
        int st = 0, end = a.size() -1 ;
        while(st<=end){
            int mid = st + (end-st)/2;
            if(a[mid] == target) return mid;
            if(a[st] <= a[mid]){// left sorted
                if(a[st] <= target && target <= a[mid]) end = mid - 1;else st = mid + 1;
            }else{ // right sorted 
                if(a[mid] <= target && target <= a[end]) st = mid + 1;else end = mid - 1;
            }
        }
        return -1;
    }
};