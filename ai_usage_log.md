# AI Usage Log

**Platform:** Gemini

**Model:** Gemini 2.5

---

## Interaction 1

### User

I have three temperature formats I need to convert between: C, F, K. Can you give me a table of conversion factors between all those types?

### Assistant Summary

Provided a Markdown comparison table listing exact conversion formulas between Celsius, Fahrenheit, and Kelvin, along with key reference points (absolute zero, freezing point, and boiling point of water).

---

## Interaction 2

### User

Does C respect parantheses for PEMDAS?

### Assistant Summary

Confirmed that C respects parentheses to override operator precedence according to standard arithmetic rules. Explained precedence rules in C and provided code examples demonstrating the use of parentheses and integer division behavior.

---

## Interaction 3

### User

printf("Enter the original temperature value: \n");
scanf("%d", &original_temperature);
printf("Enter the original scale (C, F, or K): \n");
scanf("%d", &original_scale);
printf("Enter the scale to convert to (C, F, or K): \n");

scanf("%d", &target_scale);

Why is this skipping over the third prompt?

### Assistant Summary

Explained that using `%d` to read character input causes `scanf` to fail and leave input in the buffer, skipping subsequent prompts. Advised changing format specifiers to `%c` for character variables and adding a leading space (`" %c"`) to skip leftover whitespace/newlines, providing corrected C code.

---

## Interaction 4

### User

What about %s?

### Assistant Summary

Explained how `%s` works in C, noting that it automatically skips leading whitespace but requires declaring string arrays instead of single `char` variables. Provided updated C code using `%s`, compared `%c` vs `%s` in a table, and explained when to use each.

---

## Interaction 5

### User

"#include <stdio.h>

int main(){
double original_temperature;
double converted_temperature;
char original_scale;
char target_scale;

```
printf("Enter the original temperature value: \n");
scanf("%d", &original_temperature);
printf("Enter the original scale (C, F, or K): \n");
scanf(" %c", &original_scale);
printf("Enter the scale to convert to (C, F, or K): \n");    
scanf(" %c", &target_scale);

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

printf("Converted temperature: %d \n", converted_temperature);
printf("Temperature category: \n");
printf("Weather advisory: \n");
return 0;

```

}" I entered 70, F, C and it outputed 67?

### Assistant Summary

Identified two bugs in the provided C program: using `%d` instead of `%lf`/`%.2f` for `double` variables in `scanf`/`printf`, and multiplying by 1.8 instead of dividing by 1.8 in Fahrenheit-to-Celsius conversions. Provided corrected code and demonstrated the correct mathematical output.

---

## Interaction 6

### User

Can you make me a makefile:"he first programming problem. Name it "task1.c" [40 points]
The second programming problem. Name it "task2.c" [40 points]
The valid Makefile to compile both programs and remove both executables: "all" and "clean" [20 points]"

### Assistant Summary

Generated a valid `Makefile` configured to compile `task1.c` into `task1`, `task2.c` into `task2`, with `all` and `clean` targets. Provided instructions on usage, tab indentation requirements, and terminal execution commands.