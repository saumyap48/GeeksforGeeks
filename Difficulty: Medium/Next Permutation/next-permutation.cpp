class Solution {
  public:
    void nextPermutation(vector<int>& arr) {
        int n=arr.size();
  int index=-1;
  for(int i=n-2; i>=0; i--){
    if(arr[i]<arr[i+1]){
      index=i;
      break;
    }
    }
      if(index==-1){
        reverse(arr.begin(),arr.end());
        return;
      }
      for(int i=n-1; i>index; i--){
        if(arr[i]>arr[index]){
       swap(arr[i],arr[index]);
       break;
        }
        }   
        reverse(arr.begin()+index+1,arr.end());
        return; 
    }

};