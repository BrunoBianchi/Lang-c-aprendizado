/* fopen example */
#include <stdio.h>
int main ()
{
    
  FILE * file;
 file = fopen ("text.txt","w");
  if (file!=NULL)
  {
    fputs ("Te amo amor",file);
    fclose (file);
  }
  return 0;
}