/*
 * Complete the getMoneySpent function below.
 */
int getMoneySpent(vector<int> keyboards, vector<int> drives, int b) {
    /*
     * Write your code here.
     */
     

       sort(keyboards.begin(), keyboards.end(), greater<int>());

       sort(drives.begin(),drives.end());
       
       
        int maxCost=-1;
       
    for (int i = 0; i < keyboards.size(); ++i) {
        for (int j = 0; j < drives.size(); ++j) {
                int cost =keyboards[i]+drives[j];
                if(cost>b){
                    break;
                }
                maxCost=max(cost,maxCost);
            }
    }
    return maxCost;
    
}