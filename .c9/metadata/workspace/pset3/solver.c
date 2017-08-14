{"filter":false,"title":"solver.c","tooltip":"/pset3/solver.c","undoManager":{"mark":0,"position":0,"stack":[[{"start":{"row":0,"column":0},"end":{"row":181,"column":1},"action":"insert","lines":["#include \"solver.h\"","","/* "," *   Find the position of the tile containing number 'tile'"," */","int","find_tile(int tile, int d, int **board)","{","    int step = 0;","    ","    // walk around the board and return the number of steps made","    for(int i = 0; i < d; i++)","    {","        for(int j = 0; j < d; j++)","        {","            if(board[i][j] == tile)","                return step;","            ","            step++;","        }","    }    ","    return -1;","}","","","/* "," *   Find the sum of the Manhattan distances of all tiles"," */","int","manhattan_distance(int tile, int d, int **board)","{","    if(tile >= d * d)","    {","        return 0;","    }","    ","    int pos = find_tile(tile, d, board);","    int y = pos % d;","    int x = (pos - y)/d;","    ","    int targety = (tile % d != 0) ? tile % d - 1 : d - 1;","    int targetx = (tile - targety)/d;","    ","    int offsetx = targetx - x;","    int offsety = targety - y;","    ","    int sum = abs(offsetx) + abs(offsety);","    sum += manhattan_distance(tile + 1, d, board);  ","    ","    return(sum);","}","","","/* "," *   Initialize search"," */","int","iterative_deepening(int **board, int d, int *moves)","{","    int threshold = manhattan_distance(1, d, board);","    int max = 0;","    bool solution = false;","    ","    while(!solution)","    {","        if(search(board, 0, &threshold, moves, &max, d, 5))","            break;","        threshold = max;","    }","    ","    return(threshold);","}","","","/* "," *   Find the position of the tile containing number 'tile'"," */","bool","search(int **board, int g, int *threshold, int *moves, int *max, int d, int move)","{    ","    // calculate manhattan distance after move","    int h = manhattan_distance(1, d, board);","    ","    // check for new max threshold","    *max = (g + h > *max) ? g + h : *max;","    ","    if(h == 0)","        return true;","    if(g + h > *threshold)","        return false;","    ","    // find coordinates of blank tile","    int posBlank = find_tile(0, d, board);","    int y = posBlank % d;","    int x = (posBlank - y)/d;","    ","    ","    // initialize movelist","    int movelist[d];  ","    for(int i = 0; i < d; i++)","        movelist[i] = 0;","    ","    // if move (up, left, right, down) is possible, movelist[i] = 1.   ","    movelist[0] = (move != 3 && x > 0) ? 1 : 0;","    movelist[1] = (move != 2 && y > 0) ? 1 : 0;","    movelist[2] = (move != 1 && y < d - 1) ? 1 : 0;","    movelist[3] = (move != 0 && x < d - 1) ? 1 : 0;         ","    ","    // for every possible move, make the move and call search on next level","    for(int i = 0; i < 4; i++)","    {","        if(movelist[i] == 1)","        {","            make_move(board, i, x, y);","            moves[g] = i;","            ","            if(search(board, g+1, threshold, moves, max, d, i))","                return true;","            ","            undo_move(board, i, x, y);","            moves[g] = -1;","        }","    }","    ","    return false;","}","","","/* "," *   Update board with given move (0 - up, 1 - left, 2 - right, 3 - down)"," */","void","make_move(int **board, int move, int x, int y)","{","    switch(move)","    {","        case 0:","            board[x][y] = board[x - 1][y];","            board[x - 1][y] = 0;   ","            break;","        case 1:","            board[x][y] = board[x][y - 1];","            board[x][y - 1] = 0;        ","            break;","        case 2:","            board[x][y] = board[x][y + 1];","            board[x][y + 1] = 0;        ","            break;","        case 3:","            board[x][y] = board[x + 1][y];","            board[x + 1][y] = 0;        ","            break;    ","    }","}","","","/* "," *   Reverse move (0 - up, 1 - left, 2 - right, 3 - down)"," */","void","undo_move(int **board, int move, int x, int y)","{","    switch(move)","    {","        case 0:","            board[x - 1][y] = board[x][y];","            board[x][y] = 0;   ","            break;","        case 1:","            board[x][y - 1] = board[x][y];","            board[x][y] = 0;        ","            break;","        case 2:","            board[x][y + 1] = board[x][y];","            board[x][y] = 0;        ","            break;","        case 3:","            board[x + 1][y] = board[x][y];","            board[x][y] = 0;        ","            break;    ","    } ","}"],"id":1}]]},"ace":{"folds":[],"scrolltop":0,"scrollleft":0,"selection":{"start":{"row":181,"column":1},"end":{"row":181,"column":1},"isBackwards":false},"options":{"guessTabSize":true,"useWrapMode":false,"wrapToView":true},"firstLineState":0},"timestamp":1456630688331,"hash":"cf1f071af4b3787e416f9e22a35447e9720040b3"}