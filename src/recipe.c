#include<stdio.h>
#include<stdlib.h>
/*Simple test as of right now.  */
int main( int argc, char *argv[] ){
    int sys;
    for (sys=0; sys<2; sys++ ){
        int sysio;
        FILE *file = fopen( argv[1], "r" );
        while ( ( sysio = fgetc( file ) ) != EOF){
            printf("%c", sysio);
        }
        fclose( file );
    }
}
