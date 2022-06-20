#ifndef CLUBREWARDS_H_
#define CLUBREWARDS_H_

namespace ch4 {
    class ClubRewards {
        int books;
        int points;
        void computePoints();
    public:
        void getBooks();
        void printPoints();
    };
}

#endif