//
// Created by afshari9978 on 5/3/21.
//

#ifndef MULTICOREPROJECT_CANDLE_H
#define MULTICOREPROJECT_CANDLE_H


class Candle {
public:
    bool isAscending;
    int openMatchPreviousOpenFrom;
    int openMatchPreviousOpenTo;
    int closeMatchPreviousOpenFrom;
    int closeMatchPreviousOpenTo;
    int openMatchPreviousCloseFrom;
    int openMatchPreviousCloseTo;
    int closeMatchPreviousCloseFrom;
    int closeMatchPreviousCloseTo;

    Candle(bool isAscending, int openMatchPreviousOpen[2], int closeMatchPreviousOpen[2], int openMatchPreviousClose[2],
           int closeMatchPreviousClose[2]);

    bool openMatchPreviousOpenAvailable();
    bool closeMatchPreviousOpenAvailable();
    bool openMatchPreviousCloseAvailable();
    bool closeMatchPreviousCloseAvailable();
};


#endif //MULTICOREPROJECT_CANDLE_H
