class StockPrice {
public:
     map<int, int>mp, freq;
     int maxTimeStamp=-1;
     StockPrice(){

     }
     void update(int timestamp, int price){
         if(mp.find(timestamp)!=mp.end()){
             int prev=mp[timestamp];
             freq[prev]--;
             if(freq[prev]==0)
                 freq.erase(prev);

         }
         mp[timestamp]=price;
         freq[price]++;
         if(timestamp>maxTimeStamp)
            maxTimeStamp=timestamp;
     }
     int current(){
         return mp[maxTimeStamp];
     }
     int maximum(){
         return freq.rbegin()->first;
     }
    int minimum(){
        return freq.begin()->first;
    }
};
