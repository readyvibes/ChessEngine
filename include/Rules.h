#ifndef CHESSRULES_H
#define CHESSRULES_H

#include "ChessBoard.h"
#include <vector>

struct Move {
    Rank fromRank, toRank;
    File fromFile, toFile;
    Piece promotionPiece = EMPTY;
    bool isCapture = false;
    bool isCastling = false;
    bool isEnPassant = false;
};

class ChessRules {
    private:
        static std::vector<Move> generateLegalMoves(const ChessBoard& board, bool isWhiteTurn);
        static bool isValidMove(const ChessBoard& board, const Move& move, bool isWhiteTurn);
        static bool isInCheck(const ChessBoard& board, bool isWhiteKing);
        static bool isCheckmate(const ChessBoard& board, bool isWhiteTurn);
        static bool isStalemate(const ChessBoard& board, bool isWhiteTurn);
};


#endif