// 11. Find the median of an array.
//SORT THE ARRAY FIRST
// IF THE SIZE IS ODD TEH SIMPLY RETURN THE SIZE/2 INDEXED ELEMNT
//IF THE SIZE IIS EVEN WE SEND THEAVG OF TWO MIDDLE ELEMNT BY ADDIGN THE SIZE/2 ANDSIZE/2-1 INDEXED ELEMTN THEN DOING THE AVVG
float findMedian(vector<int>arr){
    int n=arr.size();
    sort(arr.begin(),arr.end());
    if(arr.size()%2==0){
        return (arr[n/2-1]+arr[n/2])/2.0;
    }
    return arr[n/2];
}