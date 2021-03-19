#include <vector>
#include <string>
#include "Direction.hpp"
using namespace std;
namespace ariel{
    class Board{
        private:
            unsigned int board_row = 50;
            unsigned int board_col = 50;
            const string msg = " ";
            vector<vector<string>> board = {};
        public:
           
            void post(unsigned int row ,unsigned int col ,Direction d,const string &msg);
            string read(unsigned int row ,unsigned int col ,Direction d,unsigned int char_num);
            void show();
    };
}