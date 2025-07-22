// 12. Find the mode of an array
//MODE OF AN ARRAY MEANS THE ELEMTS THAT APPEARS MAX NUMBER OF TIME 
//WE USE A MAP TO STRE THE DATA OF NUM OF APPEARANCE OF AN NUMBER IN AN ARRAY

int findMode(vector<int>arr){
    map<int,int>hmp;
    for(int i=0;i<arr.size();i++){
        hmp[arr[i]]++;
    }
    int maxOccur=0;
    int el=0;
    for(int i=0;i<arr.size();i++){
        if(hmp[arr[i]]>maxOccur){
            maxOccur=hmp[arr[i]];
            el=arr[i];
        }
    }
    return el;
}