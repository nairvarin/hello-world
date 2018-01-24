int atoi(const char *s)
{
    int n=0, neg=0; 
    while (isspace(*s)) s++; //while loop is to skip all the spaces in the beginning
    switch (*s) {
        case '-': neg=1; //if the first non-space character is '-', it means it is a negative integer, so flagging 'neg' variable to 1
        case '+': s++; // if first non-space character is '+', then it is positive integer, and we can skip it and move on to other characters.
    }
    /* Compute n as a negative number to avoid overflow on INT_MIN */
    while (isdigit(*s)) //iterating through all the digits
        n = 10*n - (*s - '0');
        s++; //moving to the next digit
    return neg ? n : -n; //if neg == 1, then we just return n, if 0, then we have to return -n, which is a positive number
}
