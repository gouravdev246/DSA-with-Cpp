class ParkingSystem {
public:
    int big_slots;
    int medium_slots;
    int small_slots;

    ParkingSystem(int big, int medium, int small) {
        big_slots = big;
        medium_slots = medium;
        small_slots = small;
        
    }
    
    bool addCar(int carType) {
        if (carType == 1) {         
            if (big_slots > 0) {
                big_slots--;
                return true;
        }
    }else if (carType == 2) {  
            if (medium_slots > 0) {
                medium_slots--;
                return true;
        }
        }else if (carType == 3) { 
            if (small_slots > 0) {
                small_slots--;
                return true;
            }
        }
        return false; 
    }
};

/**
 * Your ParkingSystem object will be instantiated and called as such:
 * ParkingSystem* obj = new ParkingSystem(big, medium, small);
 * bool param_1 = obj->addCar(carType);
 */