// First I calculated how many chocolates I could buy directly.
// Then kept exchanging wrappers for extra chocolates until I couldn’t anymore.

int chocolateFeast(int totalAmount, int cost, int wrapperReq){
    int chocolatePurchased = totalAmount / cost;
    int numWrapper = chocolatePurchased;

    while(numWrapper >= wrapperReq){
        int exchangeNumber = numWrapper / wrapperReq;
        chocolatePurchased += exchangeNumber;
        numWrapper = exchangeNumber + (numWrapper % wrapperReq);
    }
    return chocolatePurchased;
}
