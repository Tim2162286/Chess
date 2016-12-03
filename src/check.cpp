#include "check.h"
#include "ChessConstBitboards.h"
#include "MoveGenerator.h"
#include "ChessBoard.h"

Check::Check(MoveGenerator m){
  moves = m;
}
 bool Check::check(bool color) {
 	return ((bool)(moves.chessBoard[0].pieces[color][5] & moves.getAllMoves(!color)));
 }
