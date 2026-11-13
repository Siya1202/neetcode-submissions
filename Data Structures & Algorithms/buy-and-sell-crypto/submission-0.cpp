class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit=0;
        int minprice=prices[0];
        int k=0;
        for(int i=0;i<prices.size();i++){
            if(prices[i]<minprice){
                minprice=prices[i];
                k=i;
            }
        }
        int maxprice=prices[k];
        for(int i=k;i<prices.size();i++){
            if(prices[i]>maxprice){
                maxprice=prices[i];
            }
        }
        profit=maxprice-minprice;
        return profit;
    }
};
