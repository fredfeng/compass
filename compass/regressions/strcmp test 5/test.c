// strcmp test 5

 int (strcmp)(const char *s1, const char *s2)
 {
     unsigned char uc1, uc2;
     /* Move s1 and s2 to the first differing characters 
        in each string, or the ends of the strings if they
        are identical.  */
     while (*s1 != '\0' && *s1 == *s2) {
         s1++;
         s2++;
     }
     /* Compare the characters as unsigned char and
        return the difference.  */
     uc1 = (*s1);
     uc2 = (*s2);
     return ((uc1 < uc2) ? -1 : (uc1 > uc2));
 }
 
 void foo(const char* s)
 {
	int res = strcmp("tom", "tom");
	static_assert(res == 1); // wrong
 }