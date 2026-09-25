#include <stdio.h>

double temperature_conversion(char original_scale, char target_scale, double original_temperature){
    double converted_temperature = -9999;
     if(original_scale == 'C'){
        if(target_scale == 'F'){
            converted_temperature = (original_temperature * 1.8) + 32;
        }
        else if(target_scale == 'K'){
            converted_temperature = original_temperature + 273.15;
        }
        else if(target_scale = 'C'){
            converted_temperature = original_temperature;
        }
    }
    else if(original_scale == 'F'){
        if(target_scale == 'C'){
            converted_temperature = (original_temperature - 32) / 1.8;
        }
        else if(target_scale == 'K'){
            converted_temperature = ((original_temperature - 32) / 1.8) + 273.15;
        }
        else if(target_scale == 'F'){
            converted_temperature = original_temperature;
        }
    }
    else if(original_scale == 'K'){
        if(target_scale == 'F'){
            converted_temperature = ((original_temperature - 273.15) * 1.8) + 32;
        }
        else if(target_scale == 'C'){
            converted_temperature = original_temperature - 273.15;
        }
        else if(target_scale == 'K'){
            converted_temperature = original_temperature;
        }
    }
    return converted_temperature;
    
}
int main(){
    double original_temperature;
    double converted_temperature;
    double internal_temperature;
    char original_scale;
    char target_scale;


    printf("Enter the original temperature value: \n");
    scanf("%lf", &original_temperature);
    printf("Enter the original scale (C, F, or K): \n");
    scanf(" %c", &original_scale);
    printf("Enter the scale to convert to (C, F, or K): \n");    
    scanf(" %c", &target_scale);

   
    printf("Converted temperature: %.2f \n", temperature_conversion(original_scale, target_scale, original_temperature));
    internal_temperature = temperature_conversion(original_scale, 'C', original_temperature);
    
    if(internal_temperature < 0 & internal_temperature > -273.15){
        printf("Temperature category: Freezing \n");
        printf("Weather advisory: Stay Indoors!\n");
    }
    else if(internal_temperature < 10){
        printf("Temperature category: Cold\n");
        printf("Weather advisory: Bring a jacket!\n");
    }
    else if(internal_temperature < 25){
        printf("Temperature category: Comfortable\n");
        printf("Weather advisory: No additional protection needed.\n");
    }
    else if(internal_temperature < 35){
        printf("Temperature category: Hot\n");
        printf("Weather advisory: Wear shorts and short sleeve shirt!\n");
    }else if(internal_temperature >= 35){
        printf("Temperature category: Extreme Heat\n");
        printf("Weather advisory: Stay inside!\n");
    }else{
        printf("Invalid temperature\n");
    }
    
    return 0;
}