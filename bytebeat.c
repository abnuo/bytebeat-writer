#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char header[] = { 46, 115, 110, 100, 0, 0, 0, 32, 1, 72, 162, 24, 0, 0, 0, 2, 0, 0, 31, 64, 0, 0, 0, 1 }; int main(int argc, char *argv[], int t) {FILE *fp;int samples = atoi(argv[1]);fp = fopen("audio.au", "w");fwrite(header, sizeof(header), 1, fp);printf("Writing started\n");for (t=0; t<samples; t++) {printf("Writing...");putc(t&t>>8, fp);}printf("Done\n");}
