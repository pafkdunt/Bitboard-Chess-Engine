// system headers
#include<stdio.h>

// define bitboard data type
#define U64 unsigned long long

/******************\
  BIT MANIPULATION
\******************/

// print bitboard
void print_bitboard(U64 bitboard)
{
    // loop over board ranks
    for (int rank = 0; rank < 8; rank++)
    {
        // loop over board files
        for (int file = 0; file < 8; file++)
        {
            // convert file + rank -> square index
            int square = rank * 8 + file; 

            //
            printf(" %d ", (bitboard & (1ULL << square)) ? 1 : 0);
        }

        // print new line every rank
        printf("\n");
    }
}


/*************\
  MAIN DRIVER
\*************/

int main()
{
    U64 bitboard = 4ULL;
    print_bitboard(bitboard);

    return 0;
}