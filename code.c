#include<string.h>
bool scan_token(const char **p_input, const char *delimiters,
                char buf[], size_t buflen){
  /*
  The function scans the input string to determine the extent of the token using the delimiters as separators and then writes the token characters to buf , making sure to terminate with a null char. The function returns true if a token was written to buf, and false otherwise.

Specific details of the function's operation:

Your implementation of scan_token should take the same general approach as strtok, meaning it can (and should!) use the handy <string.h> functions such as strspn and strcspn, but it should not replicate the bad parts of its design, which is to say no static variables, no weird use of the input argument to pass information across a sequence of calls, and should not destroy the input string.

    The function separates the input into tokens in the same way that strtok does: it scans the input string to find the first character not contained in delimiters. This is the beginning of the token. It scans from there to find the first character contained in delimiters. This delimiter (or the end of the string if no delimiter was found) marks the end of the token.

      Note that the parameter p_input is a char **. This is a pointer argument that is being passed by reference. The client passes a pointer to the pointer to the first char of the input string. The function will update the pointer held by p_input to point to the next character following the token that was just scanned.

      buf is a fixed-length array to store the token and buflen is the length of the buffer. scan_token should not write past the end of buf. If a token does not fit in buf, the function should write buflen - 1 characters into buf, write a null byte in the last slot, and the pointer held by p_input should be updated to point to the next character following the buflen - 1 characters in the token. In other words, the next token scanned will start at the first character that would have overflowed buf.
      */
  char *first_non_del  = *p_input + strcspn(*p_input, delimeters); //finding first char not contained in delimeters
  char *first_del = first_non_del + strspn(first_non_del, delimeters); //first char contained in delimeters
  
  int token_len = first_del - first_non_del; //getting token len
  if(buflen < token_len){ //if token does not fit in buf
    
  }
  else{ //token fits in buf
  }
  
  
  for(size_t i = 0; i < n && strcmp(first_non_del; i++){
    *buf++ = *first_non_del++;
  }
}

char *strtok(char *s, const char *sep)
{
  static char *p = NULL;

  if (s == NULL && ((s = p) == NULL))
    return NULL;
  s += strspn(s, sep);
  if (!*s)
    return p = NULL;
  p = s + strcspn(s, sep);
  if (*p)
    *p++ = '\0';
  else 
    p = NULL;
  return s;
}
