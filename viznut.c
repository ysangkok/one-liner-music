#include <stdio.h>
#include <stdlib.h>
int main() {
FILE* f = fopen("/dev/dsp","w+");
if (f == NULL) { puts("you should run with padsp"); abort(); }
for(int t=0;;t++) {
char c = t*5&(t>>7)|t*3&(t*4>>10);
        //(t*5&t>>7)|(t*3&t>>10);
size_t r = fwrite(&c,1,1,f);
if (r != 1) abort();
}
}
