#include <stdio.h>

int main(){
    double original_temperature;
    double converted_temperature;
    char original_scale;
    char target_scale;


    printf("Enter the original temperature value: \n");
    scanf("%d", &original_temperature);
    printf("Enter the original scale (C, F, or K): \n");
    scanf("%d", &original_scale);
    printf("Enter the scale to convert to (C, F, or K): \n");    
    scanf("%d", &target_scale);

    if(original_scale == 'C'){
        if(target_scale == 'F'){
            converted_temperature = (original_temperature * 1.8) + 32;
        }
        else if(target_scale == 'K'){
            converted_temperature = original_temperature + 273.15;
        }
    }
    else if(original_scale == 'F'){
        if(target_scale == 'C'){
            converted_temperature = (original_temperature - 32) * 1.8;
        }
        else if(target_scale == 'K'){
            converted_temperature = ((original_temperature - 32) * 1.8) + 273.15;
        }  
    }
    else if(original_scale == 'K'){
        if(target_scale == 'F'){
            converted_temperature = ((original_temperature - 273.15) * 1.8) + 32;
        }
        else if(target_scale == 'C'){
            converted_temperature = original_temperature - 273.15;
        }
    }
    
    printf("Converted temperature: \n");
    printf("Temperature category: \n");
    printf("Weather advisory: \n");
    return 0;
}