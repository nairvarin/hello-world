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
