class Solution {
public:

//the basic version
    // int majorityElement(vector<int>& arr) {

    //     map<int,int>freq;

    //     for(int i=0;i<arr.size();i++){
    //         freq[arr[i]]++;
    //     }
    //     int num=-1;
    //     int max=INT_MIN;
    //     for(int i=0;i<arr.size();i++){
    //         if(freq[arr[i]]>max){
    //             max=freq[arr[i]];
    //             num=arr[i];
    //             if(max>arr.size()/2){
    //                 return num;
    //             }
    //         }
    //     }
    //     return num;
        
    // }


//boyer moorie
        int majorityElement(vector<int>& arr) {

      int count=0;
      int num=0;

      for(int i=0;i<arr.size();i++){
        int el=arr[i];
        if(count==0)num=el;

        if(el==num)count++;
        else count--;

      }
      return num;
        
    }
};