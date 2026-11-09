#include "temperature.h"

// REQ-04
bool is_valid_temperature(int temperature){
    // 1. Är temperaturen -40 eller högre OCH 85 eller lägre?
    //      ja -> return true;
    //     nej -> return false; 
    
    if (temperature >= -40 && temperature <= 85) {
        return true;
    }else{
        return false;
    }
}

// REQ-02, REQ-03, REQ-06
const char *classify_temperature(int temperature) {
    // 1. Om temperaturen 35 eller högre   -> return "För varmt!";
    // 2. Annars om den är 15 eller lägre  -> return "För kallt!";
    // 3. Annars                           -> return "Normal";

    if (temperature >= 35){ 
        return "För varmt!";       
    }else if(temperature <= 15){
        return "För kallt!";
    }else{
        return "Normal";
    }
}