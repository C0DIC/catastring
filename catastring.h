//
//      catastring.h
//      Created by C0DIC, 11/03/2023
//
//      Main CataString header file
//      Implemented for using in Cata programming language
//      development
//      But can be used in other cases

#ifndef CATA_STRING
#define CATA_STRING

#include <ctype.h> // isspace(), isdigit() and etc.
#include <stdlib.h> // size_t and etc.
#include <stdbool.h> // for false & true
#include <string.h> // for strlen(), strcmp() and other stuff
#include <assert.h> // for error handling

// Macro for castr_from_cstr(char *cstr)
#define CS(cstr) castr_from_cstr(cstr)
#define CS_LEN(catastr) (int)  catastr.length
#define CS_FMT(catastr) (char*)catastr.data

// CataString structure
//
// Usage example
// CataStr [name] = castr_from_cstr("Cata string!");
typedef struct 
{
    size_t length;
    const char *data;
} CataStr;

// Make cata string from cstr
CataStr castr_from_cstr(char *cstr);

// Trim string from left while cf
//
// Usage example:
// castr_ltrim(' ', CS("    Hello!"));
CataStr castr_ltrim(char cf, CataStr cs);

// Trim string from right while cf
//
// Usage example:
// castr_ltrim(' ', CS("Hello!    "));
CataStr castr_rtrim(char cf, CataStr cs);

// Trim string from left & right while cf
//
// Usage example:
// castr_trim('#', CS("####Hello!####"))
CataStr castr_trim(char cf, CataStr cs);

// Compare two CataStrings
// 1 - true
// 0 - false
bool castr_same(CataStr cs_1, CataStr cs_2);

// Check if char in CataString
// 1 - true
// 0 - false
bool castr_has(char cf, CataStr cs);

// Returns the lowser index of given character in CataString
// if it is, otherwise -1
int castr_index_of(char cf, CataStr cs);

// Cut CataString to the character if char in str
// If character not in str, returns empty CataString
CataStr castr_cutc(char cf, CataStr cs);

// Concatenate two CataStrings
CataStr castr_cat(CataStr cs_1, CataStr cs_2);

// Rerturns true (1) if starts with prefix, otherwise false (0)
bool castr_startswith(const char *prefix, CataStr cs);

// Rerturns true (1) if ends with suffix, otherwise false (0)
bool castr_endswith(const char *suffix, CataStr cs);
 
// If CataString isdigit() returns long long from it, otherwise returns 0
long long castr_to_lld(CataStr cs);


#endif /*CATA_STRING*/
