/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: whwang <whwang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 09:31:37 by whwang            #+#    #+#             */
/*   Updated: 2025/02/06 18:32:55 by whwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define RED "\033[1;31m"
#define GREEN "\033[1;32m"
#define YELLOW "\033[1;33m"
#define RESET "\033[0m"

char	**ft_split(char *str, char *charset);

typedef struct {
    char *name;
    char *str;
    char *charset;
    char **expected;
    int expect_null;
} TestCase;

int compare_results(char **actual, char **expected) {
    if (!actual && !expected) return 1;
    if (!actual || !expected) return 0;
    
    for (int i = 0; expected[i]; i++) {
        if (!actual[i] || strcmp(actual[i], expected[i]) != 0) {
            return 0;
        }
    }
    return actual[0] ? 1 : 0;
}

void free_result(char **result) {
    if (result) {
        for (int i = 0; result[i]; i++) {
            free(result[i]);
        }
        free(result);
    }
}

void run_test(TestCase test) {
    printf(YELLOW "━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━\n" RESET);
    printf(YELLOW "Test: %s\n" RESET, test.name);
    printf("Input:     str: '%s'\n", test.str ? test.str : "NULL");
    printf("          charset: '%s'\n", test.charset ? test.charset : "NULL");
    
    char **result = ft_split(test.str, test.charset);
    int passed = 0;
    
    if (test.expect_null) {
        passed = (result == NULL);
    } else {
        passed = compare_results(result, test.expected);
    }

    printf("Expected: ");
    if (test.expect_null) {
        printf("NULL\n");
    } else {
        printf("[");
        for (int i = 0; test.expected[i]; i++) {
            printf("\"%s\"%s", test.expected[i], test.expected[i+1] ? ", " : "");
        }
        printf("]\n");
    }

    printf("Actual:   ");
    if (result) {
        printf("[");
        for (int i = 0; result[i]; i++) {
            printf("\"%s\"%s", result[i], result[i+1] ? ", " : "");
        }
        printf("]\n");
    } else {
        printf("NULL\n");
    }

    if (passed) {
        printf(GREEN "✓ PASS" RESET "\n");
    } else {
        printf(RED "✗ FAIL" RESET "\n");
    }
    
    free_result(result);
}

// Test data - using compound literals for expected results
char *empty[] = {NULL};
char *basic[] = {"Hello", "world", "test", NULL};
char *edge_seps[] = {"StartWithSep", NULL};
char *trailing_sep[] = {"a", "b", "c", NULL};
char *multi_sep[] = {"split", "this", "string", NULL};
char *long_sep[] = {"abc", "def", NULL};

int main() {
    TestCase tests[] = {
        // Basic functionality
        {
            "Normal case",
            "Hello,,world,,test", ",,",
            basic, 0
        },
        
        // Edge cases
        {
            "Empty string input", 
            "", "xyz",
            NULL, 1
        },
        {
            "All separators", 
            "::::", ":",
            empty, 0
        },
        {
            "No separators", 
            "NoSplitsHere", "+",
            (char*[]){"NoSplitsHere", NULL}, 0
        },
        {
            "Empty charset", 
            "HelloWorld", "",
            (char*[]){"HelloWorld", NULL}, 0
        },
        {
            "Trailing separator", 
            "a,b,c,", ",",
            trailing_sep, 0
        },
        {
            "Leading separator", 
            ",StartWithSep", ",",
            edge_seps, 0
        },
        
        // Special cases
	{
            "내마음대로", 
            "Create a function that displays", "ae",
            (char*[]){"Cr", "t", " ", " function th", "t displ", "ys", NULL}, 0
        },
	
        {
            "NULL charset input", 
            "test", NULL,
            (char*[]){"test", NULL}, 0
        },
        {
            "Multiple separators", 
            "split@@@this###string", "@#",
            multi_sep, 0
        },
        {
            "Long separator", 
            "abcXXXXXdef", "XXXXX",
            long_sep, 0
        },
        {
            "Single character", 
            "a", ",",
            (char*[]){"a", NULL}, 0
        },
        {
            "Mixed whitespace", 
            "split\tthis\nstring", "\t\n",
            (char*[]){"split", "this", "string", NULL}, 0
        },
        {
            "Double separators", 
            "one||two||three", "|",
            (char*[]){"one", "two", "three", NULL}, 0
        }
    };

    for (size_t i = 0; i < sizeof(tests)/sizeof(tests[0]); i++) {
        run_test(tests[i]);
    }

    return 0;
}
