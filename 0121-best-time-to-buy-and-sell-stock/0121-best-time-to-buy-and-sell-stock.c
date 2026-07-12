int maxProfit(int* prices, int pricesSize) {
    int buy=prices[0];
    int profit=0;
    int cp=0;
    if(pricesSize<=1){
        return 0;
    }
    for(int i=0;i< pricesSize;i++){
        if(prices[i] < buy) {
           buy = prices[i] ;
        }else{
            cp=prices[i] - buy;
            if(profit<cp){
                profit=cp;
            }
        }
    }
return profit;
}