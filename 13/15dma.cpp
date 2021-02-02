// dma.cpp -- DMA 클래스 매서드들

#include "14dma.h"
#include <cstring>

// baseDMA 메서드들
baseDMA::baseDMA(const char * l, int r)
{
    label = new char[std::strlen(l) + 1];
    std::strcpy(label, l);
    rating = r;
}

baseDMA::baseDMA(const baseDMA & rs)
{
    label = new char[std::strlen(rs.label) + 1];
    std::strcpy(label, rs.label);
    rating = rs.rating;
}

baseDMA::~baseDMA()
{
    delete [] label;
}

baseDMA & baseDMA::operator=(const baseDMA & rs)
{
    if (this == &rs)
        return *this;
    delete [] label;
    label = new char[std::strlen(rs.label) + 1];
    std::strcpy(label, rs.label);
    rating = rs.rating;
    return * this;
}

std::ostream & operator<<(std::ostream & os, const baseDMA & rs)
{
    os << "상표 : " << rs.label << std::endl;
    os << "등급 : " << rs.rating << std::endl;
    return os;
}

// lacksDMA 메서드들
lacksDMA::lacksDMA(const char * c, const char * l, int r)
        : baseDMA(l, r)
{
    std::strncpy(color, c, 39);
    color[39] = '\0';
}

lacksDMA::lacksDMA(const char * c, const baseDMA & rs)
        : baseDMA(rs)
{
    std::strncpy(color, c, COL_LEN - 1);
    color[COL_LEN - 1] = '\0';
}

std::ostream & operator<<(std::ostream & os, const lacksDMA & ls)
{
    os << (const baseDMA &) ls;
    os << "생상 : " << ls.color << std::endl;
    return os;
}

// hasDMA 메서드들
hasDMA::hasDMA(const char * s, const char * l, int r)
    : baseDMA(l, r)
{
    style = new char[std::strlen(s) + 1];
    std::strcpy(style, s);
}

hasDMA::hasDMA(const char * s, const baseDMA & rs)
    : baseDMA(rs)
{
    style = new char[std::strlen(s) + 1];
    std::strcpy(style, s);
}

hasDMA::hasDMA(const hasDMA & hs)
    : baseDMA(hs)           // 기초 클래스 복사 생성자를 호출한다
{
    style = new char[std::strlen(hs.style) + 1];
    std::strcpy(style, hs.style);
}

hasDMA::~hasDMA()
{
    delete [] style;
}

hasDMA & hasDMA::operator=(const hasDMA & hs)
{
    if (this == &hs)
        return *this;
        baseDMA::operator=(hs);     // 기초 클래스 부분을 복사한다
        delete [] style;            // 새로운 스타일을 준비하라
        style = new char[std::strlen(hs.style) + 1];
        std::strcpy(style, hs.style);
        return *this;
}

std::ostream & operator<<(std::ostream & os, const hasDMA & hs)
{
    os << (const baseDMA &) hs;
    os << "스타일 : " << hs.style << std::endl;
    return os;
}