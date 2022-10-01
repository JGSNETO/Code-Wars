enum tool {ROCK, PAPER, SCISSORS};
enum outcome {P1_WON, P2_WON, DRAW};

enum outcome rps (enum tool p1, enum tool p2){
  
  if(p1==ROCK && p2 == PAPER ){
    return P2_WON;
  }if(p1==ROCK && p2 == SCISSORS){
    return P1_WON;
  }if(p1 == PAPER && p2 == SCISSORS){
	  return P2_WON;
  }if(p1 == PAPER && p2 == ROCK){
    return P1_WON;
  }if(p1 == SCISSORS && p2 == ROCK){
    return P2_WON;
  }if(p1 == SCISSORS && p2 == PAPER){
    return P1_WON;
  }if(p1 == ROCK && p2 == ROCK ){
    return DRAW;
  }if(p1 == SCISSORS && p2 == SCISSORS){
    return DRAW;
  }if(p1 == PAPER && p2 == PAPER){
    return DRAW;
  }

  #include <criterion/criterion.h>

// enum tool {ROCK, PAPER, SCISSORS};
// enum outcome {P1_WON, P2_WON, DRAW};

// extern void do_test (enum tool p1, enum tool p2, enum outcome expected);

// Test(tests_suite, every_matchup)
// {
// 	do_test(ROCK,     ROCK,     DRAW);
// 	do_test(ROCK,     PAPER,    P2_WON);
// 	do_test(ROCK,     SCISSORS, P1_WON);

// 	do_test(PAPER,    ROCK,     P1_WON);
// 	do_test(PAPER,    PAPER,    DRAW);
// 	do_test(PAPER,    SCISSORS, P2_WON);

// 	do_test(SCISSORS, ROCK,     P2_WON);
// 	do_test(SCISSORS, PAPER,    P1_WON);
// 	do_test(SCISSORS, SCISSORS, DRAW);
// }

enum tool {ROCK, PAPER, SCISSORS};
enum outcome {P1_WON, P2_WON, DRAW};

enum outcome rps (enum tool p1, enum tool p2)
{
  return (enum outcome [3][3]) {
    [ROCK]     = {[ROCK] = DRAW,   [PAPER] = P2_WON, [SCISSORS] = P1_WON},
    [PAPER]    = {[ROCK] = P1_WON, [PAPER] = DRAW,   [SCISSORS] = P2_WON},
    [SCISSORS] = {[ROCK] = P2_WON, [PAPER] = P1_WON, [SCISSORS] = DRAW},
  }[p1][p2];
}