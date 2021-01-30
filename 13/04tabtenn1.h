// tabtenn1.h -- 탁구 기초 수업
#ifndef TABTENN1_H_
#define TABTENN1_H_
#include <string>
using std::string;
//간단한 기초 클래스
class TableTennisPlayer
{
private:
    string firstname;
    string lastname;
    bool hasTable;
public:
    TableTennisPlayer(const string & fn = "none",
                      const string & ln = "none", bool ht = false);
    void Name() const;
    bool HasTable() const { return hasTable; };
    void ResetTable(bool v) { hasTable = v; };
};

// 간단한 파생 클래스
class RatedPlayer : public TableTennisPlayer
{
private:
    unsigned int rating;
public:
    RatedPlayer(unsigned int r = 0, const string & fn = " none",
                const string & ln = "none", bool ht = false);
    RatedPlayer(unsigned int r, const TableTennisPlayer & tp);
    unsigned int Rating() { return rating; }
    void ResetRating(unsigned int r) { rating = r; }
};
#endif