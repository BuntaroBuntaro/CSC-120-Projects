#ifndef CLUBREWARDS_H_
#define CLUBREWARDS_H_

namespace ch4 {
    class ClubRewards {
        int books;
        int points;
        int computePoints(int inputPoints);
    public:
        void getPoints();
        void printPoints();
    };
}

#endif