#include <stdio.h>
#include <limits.h>
#include <float.h>
#include <stdint.h>

int main(void) {
    printf("====================================================\n");
    printf("        DAY 1: DATA TYPES & MEMORY SIZES           \n");
    printf("====================================================\n\n");

    // 1. Primitive Data Types: Sizes and Format Specifiers
    char character = 'K';
    int integer = 1024;
    short short_val = 32000;
    long long_val = 1234567890L;
    float float_val = 3.14159f;
    double double_val = 2.718281828459;

    printf("--- Primitive Types & sizeof Operator ---\n");
    printf("char:        size = %zu byte(s)  | value = %c\n", sizeof(character), character);
    printf("short:       size = %zu byte(s)  | value = %d\n", sizeof(short_val), short_val);
    printf("int:         size = %zu byte(s)  | value = %d\n", sizeof(integer), integer);
    printf("long:        size = %zu byte(s)  | value = %ld\n", sizeof(long_val), long_val);
    printf("float:       size = %zu byte(s)  | value = %.5f\n", sizeof(float_val), float_val);
    printf("double:      size = %zu byte(s)  | value = %.12lf\n\n", sizeof(double_val), double_val);

    // 2. Fixed-Width Integer Types (Embedded Systems standard: stdint.h)
    uint8_t  u8_var  = 255;
    int16_t  s16_var = -32000;
    uint32_t u32_var = 4000000000U;

    printf("--- Fixed-Width Types (stdint.h) ---\n");
    printf("uint8_t:     size = %zu byte(s)  | value = %u\n", sizeof(u8_var), u8_var);
    printf("int16_t:     size = %zu byte(s)  | value = %d\n", sizeof(s16_var), s16_var);
    printf("uint32_t:    size = %zu byte(s)  | value = %u\n\n", sizeof(u32_var), u32_var);

    // 3. Range Extremes (limits.h)
    printf("--- Minimum and Maximum Limits ---\n");
    printf("INT_MIN:     %d\n", INT_MIN);
    printf("INT_MAX:     %d\n", INT_MAX);
    printf("UINT_MAX:    %u\n\n", UINT_MAX);

    // 4. Integer Overflow Behavior
    int max_int = INT_MAX;
    printf("--- Integer Overflow Demonstration ---\n");
    printf("Before overflow (INT_MAX):     %d\n", max_int);
    max_int = max_int + 1;
    printf("After adding 1 (wraparound):   %d\n", max_int);

    return 0;
}
