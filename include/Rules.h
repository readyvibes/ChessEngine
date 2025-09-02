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
        // Individual piece movement rules
        static std::vector<Move> generatePawnMoves(const ChessBoard& board, Rank rank, File file, bool isWhite);
        static std::vector<Move> generateKnightMoves(const ChessBoard& board, Rank rank, File file, bool isWhite);
        static std::vector<Move> generateBishopMoves(const ChessBoard& board, Rank rank, File file, bool isWhite);
        static std::vector<Move> generateRookMoves(const ChessBoard& board, Rank rank, File file, bool isWhite);
        static std::vector<Move> generateQueenMoves(const ChessBoard& board, Rank rank, File file, bool isWhite);
        static std::vector<Move> generateKingMoves(const ChessBoard& board, Rank rank, File file, bool isWhite);
    public:
        static std::vector<Move> generateLegalMoves(const ChessBoard& board, bool isWhiteTurn);
        static bool isValidMove(const ChessBoard& board, const Move& move, bool isWhiteTurn);
        static bool isInCheck(const ChessBoard& board, bool isWhiteKing);
        static bool isCheckmate(const ChessBoard& board, bool isWhiteTurn);
        static bool isStalemate(const ChessBoard& board, bool isWhiteTurn);
};


#endif