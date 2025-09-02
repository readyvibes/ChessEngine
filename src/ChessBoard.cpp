#include "ChessBoard.h"

ChessBoard::ChessBoard() {
    initializeStartingPosition();
}
        
Piece ChessBoard::getPiece(Rank rank, File file) const {
    return board[rank][file];
}

void ChessBoard::setPiece(Rank rank, int file, Piece piece) {
    board[rank][file] = piece;
}

bool ChessBoard::isEmpty(int rank, int file) {
    return board[rank][file] == EMPTY;
}

bool ChessBoard::isWhite(Piece piece) {
    return piece > 0 && piece <= 6;
}

bool ChessBoard::isBlack(Piece piece) {
    return piece < 0;
}

void ChessBoard::initializeStartingPosition() {
    for (int rank = 0; rank < 8; rank++) {
        for (int file = 0; file < 8; file++) {
            board[rank][file] = EMPTY;
        }
    }

    for (int file = 0; file < 8; file++) {
        board[rank2][file] = W_PAWN;
    }

    board[rank1][aFile] = W_ROOK; board[rank1][hFile] = W_ROOK;
    board[rank1][bFile] = W_KNIGHT; board[rank1][gFile] = W_KNIGHT;
    board[rank1][cFile] = W_BISHOP; board[rank1][fFile] = W_BISHOP;
    board[rank1][dFile] = W_QUEEN;
    board[rank1][eFile] = W_KING;

    board[rank8][aFile] = B_ROOK;   board[rank8][hFile] = B_ROOK;
    board[rank8][bFile] = B_KNIGHT; board[rank8][gFile] = B_KNIGHT;
    board[rank8][cFile] = B_BISHOP; board[rank8][fFile] = B_BISHOP;
    board[rank8][dFile] = B_QUEEN;
    board[rank8][eFile] = B_KING;

    for (int file = 0; file < 8; file++) {
        board[rank7][file] = B_PAWN;
    }
};