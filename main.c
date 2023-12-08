#include <stdio.h>
int romanToInt(char* s) {
    int count = 0;
    while (*s)
    {
        if (*s == 'M') { count += 1000; s += 1; }
        if (*s == 'D') { count += 500; s += 1; }

        if (*s == 'C' && *(s + 1) == 'M') { count += 900; s += 2; }
        else if (*s == 'C' && *(s + 1) == 'D') { count += 400; s += 2; }
        else if (*s == 'C' && *(s + 1) != 'M' && *(s + 1) != 'D') { count += 100; s += 1; }

        if (*s == 'L') { count += 50; s += 1; }

        if (*s == 'X' && *(s + 1) == 'C') { count += 90; s += 2; }
        else if (*s == 'X' && *(s + 1) == 'L') { count += 40; s += 2; }
        else if (*s == 'X' && *(s + 1) != 'C' && *(s + 1) != 'L') { count += 10; s += 1; }

        if (*s == 'V') { count += 5; s += 1; }

        if (*s == 'I' && *(s + 1) == 'X') { count += 9; s += 2; }
        else if (*s == 'I' && *(s + 1) == 'V') { count += 4; s += 2; }
        else if (*s == 'I' && *(s + 1) != 'X' && *(s + 1) != 'V') { count += 1; s += 1; continue; }
    }
    return count;
}
int main()
{
    char* s = "MCMXCIV";
    int result = romanToInt(s);
    printf("%d\n",result);
	return 0;
}
