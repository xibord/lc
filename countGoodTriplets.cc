class Solution {
public:
    int countGoodTriplets(vector<int>& arr, int a, int b, int c) {
        int count = 0;
        int n = arr.size();

        //arr[i-2]>=0 && arr[i-1] >= arr[i-2] && arr[i] >= arr[i-1] && arr[i] < n
        if (sizeof(arr) >= 3) {
            for (int i=0; i < n; i++) {
                for (int j=i+1; j < n; j++) {
                    for (int k=j+1; k < n; k++) {
                        if (abs(arr[i] - arr[j]) <= a && abs(arr[j] - arr[k]) <= b && abs(arr[i] - arr[k]) <= c) {
                            count += 1;
                        }
                    }
                }
            }
        }
        else {return 0;}

        return count;
    }
};
