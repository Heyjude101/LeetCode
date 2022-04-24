class UndergroundSystem {
public:
    map<int , pair<string , int>> mp1;
    map<pair<string , string> , pair<double , int>> mp2;
    UndergroundSystem() {
        
    }
    
    void checkIn(int id, string stationName, int t) {
        mp1[id] = {stationName , t};
    }
    
    void checkOut(int id, string endStation, int t) {
        string startS = mp1[id].first;
        double startT = mp1[id].second;
        if(mp2.find({startS , endStation}) != mp2.end()){
            double prev =  mp2[{startS , endStation}].first;
            int count =  mp2[{startS , endStation}].second;
            double newVal = ((prev*count) + (t- startT))/(count + 1);
            mp2[{startS , endStation}] = {newVal , count+1}; 
        }
        else{
            mp2[{startS , endStation}] = {t - startT , 1};
        }
    }
    
    double getAverageTime(string startStation, string endStation) {
        return mp2[{startStation , endStation}].first; 
    }
};

/**
 * Your UndergroundSystem object will be instantiated and called as such:
 * UndergroundSystem* obj = new UndergroundSystem();
 * obj->checkIn(id,stationName,t);
 * obj->checkOut(id,stationName,t);
 * double param_3 = obj->getAverageTime(startStation,endStation);
 */