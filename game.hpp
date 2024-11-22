#include <vector>
#include <string>

class Game{
    private:
    public: 

    std::vector <std::vector <std::string>>board {{" "," "," "},
                                                  {" "," "," "},
                                                  {" "," "," "}};

    void displayBoard();

    bool checkWin();

    bool checkDraw();
    
    bool setMark(std::string playertype, int markplace);


};
