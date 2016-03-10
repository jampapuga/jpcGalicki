// Sprawdzić, wykonując odpowiednie testy,
// jak działają operacje rzutowania z typów
// ,,mniejszych'' do ,,większych'' i odwrotnie.
// Na przykład, czemu są równe:
//    * (int)FLT_MAX
//    * (int)DBL_MAX
//    * (double)LDBL_MAX

#include <stdio.h>
#include <limits.h>
#include <float.h>
void main()
{
printf("FLT_MAX do (int)FLT_MAX:\n%e do %i\n", FLT_MAX, (int)FLT_MAX);
printf("DBL_MAX do (int)DBL_MAX:\n%e do %i\n", DBL_MAX, (int)DBL_MAX);
printf("LDBL_MAX do (double)LDBL_MAX:\n%Le do %e\n", LDBL_MAX, (double)LDBL_MAX);
}
