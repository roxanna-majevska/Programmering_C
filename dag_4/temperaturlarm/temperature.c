#include "temperature.h"

// REQ-04
bool is_valid_temperature(int temperature){
    if (temperature >= -40 && temperature <= 85) {
        return true; 
    }else{
        return false;
    } 
    
}
// REQ-07
bool is_valid_limit(int limit) {
    if (limit >= 0 && limit <= 60) {
        return true;
    }else{
        return false;        
    }
}

// REQ-02, REQ-03, REQ-06
const char *classify_temperature(int temperature, int limit) {
    if (temperature >= limit){
        return "För varmt!"; 
    }else if (temperature <= 15) {
        return"För kallt!";
    } else {
        return "Normal";
    }
     
}
