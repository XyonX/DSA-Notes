class Solution {

//this soltuion is corect
//but not effienct
//and didntr passed all the test case in leetcode
    // int maxProfit(vector<int>& prices) {
    //     int maxProfit=0;
    //     for(int i=0;i<prices.size();i++){
    //         for(int j=i+1;j<prices.size();j++){
    //             if(prices[j]-prices[i]>maxProfit){
    //                 maxProfit=prices[j]-prices[i];
    //             }
    //         }
    //     }
    //     return maxProfit;
    // }


//this one is a greedy solution and passed all the test case 
//adn optimnal
        int maxProfit(vector<int>& prices) {
        int minPrice=prices[0];
        int maxProfit=0;
        for(int i=1;i<prices.size();i++){
            maxProfit=max(maxProfit,prices[i]-minPrice);
            minPrice=min(prices[i],minPrice);
        }
        return maxProfit;
    }
};