#ifndef CHESSBOARD_H
#define CHESSBOARD_H

#include <Pieces.h>

enum Rank {
    rank1 = 0,
    rank2 = 1,
    rank3 = 2,
    rank4 = 3,
    rank5 = 4,
    rank6 = 5,
    rank7 = 6,
    rank8 = 7
};

enum File {
    aFile = 0,
    bFile = 1,
    cFile = 2, 
    dFile = 3, 
    eFile = 4,
    fFile = 5, 
    gFile = 6,
    hFile = 7,
};

class ChessBoard {
    private: 
        Piece board[8][8];
    public:
        ChessBoard();

        Piece getPiece(Rank rank, File file) const; 
        void setPiece(Rank rank, int file, Piece piece);
        
        bool isEmpty(int rank, int file);
        bool isWhite(Piece piece); 
        bool isBlack(Piece piece); 

        void initializeStartingPosition();
};

#endif
