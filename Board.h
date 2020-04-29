//
// Created by thong on 4/12/20.
//

#ifndef AI_BOARD_H
#define AI_BOARD_H


class Board {
private:

    unsigned char grid[8][8];  // card value
    unsigned char log[8][8];   // card player
    unsigned char board_size;

public:
    explicit Board(int size);

    void reset();

    int get_size() const;
    int get_cell(int row, int col);
    int is_empty(int row, int col) const;
    int num_empty() const;

    bool check_at(int row, int col);
    void check_all();
    bool can_put_card(int row, int col);
    bool put_card(int row, int col, int val, int player);
    void print_board();

    int get_largest_card(int player);
    int get_score(int player);
};


#endif //AI_BOARD_H
