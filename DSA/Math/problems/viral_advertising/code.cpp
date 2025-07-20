// This is like a chain-reaction growth.
// I kept track of how many like it each day and used that to get new viewers.

int viralAd(int startingViewers, int numDays){
    int viewers = startingViewers;
    int likesCount = 0;
    
    for(int i = 0; i < numDays; i++){
        int half = viewers / 2;
        likesCount += half;
        viewers = half * 3;
    }
    return likesCount;
}
