class Solution{
    public:
    int kthElement(int arr1[], int arr2[], int n, int m, int k)
    {
        int  i = 0 , j = 0 ,ind = 0;
        int arr3[n+m];
        while( i < n && j < m){
            if(arr1[i] < arr2[j]) {
                arr3[ind++] = arr1[i++];
            }
            else arr3[ind++] = arr2[j++];
        }
        while(i < n){
             arr3[ind++] = arr1[i++];
        }
        while(j < m){
             arr3[ind++] =    arr2[j++];
        }
        return arr3[k-1];
    }
};
