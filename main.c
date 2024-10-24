#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Prototype of ft_strtrim
char *ft_strtrim(const char *s1, const char *set);

void run_test(const char *input, const char *set, const char *expected) {
    char *result = ft_strtrim(input, set);
    if (result) {
        if (strcmp(result, expected) == 0) {
            printf("Test passed: Input: \"%s\", Set: \"%s\" | Output: \"%s\"\n", input, set, result);
        } else {
            printf("Test failed: Input: \"%s\", Set: \"%s\" | Expected: \"%s\", Got: \"%s\"\n", input, set, expected, result);
        }
        free(result); // Assuming ft_strtrim allocates memory
    } else {
        printf("Test failed: Input: \"%s\", Set: \"%s\" | Output: NULL\n", input, set);
    }
}

int main() {
    // Test case 1
    run_test("  Hello, World!  ", " ", "Hello, World!");
    // Test case 2
    run_test("!!!Hello!!!", "!", "Hello");
    // Test case 3
    run_test("NoTrimNeeded", " ", "NoTrimNeeded");
    // Test case 4
    run_test("Goodbye!!!", "!", "Goodbye");
    // Test case 5
    run_test("!!!Hello", "!", "Hello");
    // Test case 6
    run_test("", " ", "");
    // Test case 7
    run_test("Hello, World!", "x", "Hello, World!");
    // Test case 8
    run_test("...Hello World!!!...", ".!", "Hello World");
    // Test case 9
    run_test("\t \n Hello World \n \t", " \t\n", "Hello World");
    // Test case 10
    run_test("abcdefg", "abcdefg", "");

    return 0;
}
