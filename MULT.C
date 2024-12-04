#INCLUDE <STDIO.H>
#INCLUDE <STRING.H>
#INCLUDE <STDLIB.H>


INT MAIN(INT ARGC, CHAR* ARGV[]) {
    INT I;
    FOR (I = 0; I < ARGC; I++) {
        PRINTF("ARGV[%D]: %S\N", I, ARGV[I]);
    }

    INT RESULT = 1;
    FOR (I = 1; I < ARGC; I++) {
        INT X = STRTOL(ARGV[I], NULL, 10);
        RESULT = RESULT * X;
    }
    PRINTF("MULTIPLICATION RESULT IS %D\N", RESULT);
    RETURN 0;
}