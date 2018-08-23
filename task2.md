Take 2 strings s1 and s2 including only letters from ato z. Return a new sorted string, the longest possible, containing distinct letters, each taken only once - coming from s1 or s2.

Examples: 
```cpp
std::string a = "xyaabbbccccdefww";
std::string b = "xxxxyyyyabklmopq";
std::string res = longest(a, b); // "abcdefklmopqwxy"

std::string a = "abcdefghijklmnopqrstuvwxyz";
std::string res = longest(a, a); // "abcdefghijklmnopqrstuvwxyz"
```
