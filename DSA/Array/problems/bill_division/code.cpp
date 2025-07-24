void bonAppetit(vector<int> bill, int k, int b) {
    
    int costOfItems=0;
    for(int i=0;i<bill.size();i++){
        if(i!=k)
        costOfItems+=bill[i];
    }
    int herShare = costOfItems/2;
    if (herShare==b){
        cout<<"Bon Appetit"<<endl;
        
    }
    else{
        cout<<b-herShare;
    }

}