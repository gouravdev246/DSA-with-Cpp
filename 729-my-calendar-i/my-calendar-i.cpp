class MyCalendar {
public:
    vector<pair<int ,int>> temps = {{0 , 0}} ; 
    MyCalendar() {
        
    }
    
    bool book(int startTime, int endTime) {
        bool res = true ;
        for(auto& temp : temps){
            if (startTime < temp.second && temp.first < endTime) {
                return false;
            }
        }
        temps.push_back({startTime, endTime});
        return true;
    }
};

/**
 * Your MyCalendar object will be instantiated and called as such:
 * MyCalendar* obj = new MyCalendar();
 * bool param_1 = obj->book(startTime,endTime);
 */