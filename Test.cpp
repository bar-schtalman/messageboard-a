#include "doctest.h"
#include "Direction.hpp"
#include "Board.hpp"
using namespace ariel;
using namespace std;
const string letters = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijk lmnopqrstuvwxyz.,!@#$%^&*()_-+={}[]<>?|/~";
const int MAX_SIZE = 88;


 
string random_string(int n)
{

string ran = "";
for (int i = 0 ; i < n ; i ++) 
ran += letters.at(rand() % MAX_SIZE);
return ran;
}

TEST_CASE("random size Horizontal post and read"){
    Board board;
    for(int i = 0 ; i < 100 ; i ++){
    unsigned int row = rand() % 500;
    unsigned int col = rand() % 500;
    string msg = random_string(rand()%300);       
    board.post (row,col,Direction::Horizontal,msg);
    CHECK (board.read(row,col,Direction::Horizontal,2) == msg );
    }
};

TEST_CASE("random size Vertical post and read"){
    Board board;
    for(int i = 0 ; i < 100 ; i ++){
    unsigned int row = rand() % 500;
    unsigned int col = rand() % 500;
    string msg = random_string(rand()%300);       
    board.post (row,col,Direction::Vertical,msg);
    CHECK (board.read(row,col,Direction::Vertical,2) == msg );
    }
};

TEST_CASE("empty messageboard"){
    Board board;
    for(int i = 0 ; i < 100 ; i ++){
    unsigned int row = rand() % 500;
    unsigned int col = rand() % 500;       
    CHECK (board.read(row,col,Direction::Vertical,4) == "____" );
    }
};


