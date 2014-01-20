#ifndef MULTIOS_H
#define MULTIOS_H

#include <QApplication>
#include <QDesktopWidget>

#ifdef _WIN32
  #include <limits.h>
  #include <intrin.h>
  typedef unsigned __int32  uint32_t;
#else
  #include <stdint.h>
#endif

class MultiOs{
  public:
    MultiOs();
    ~MultiOs();
    QString getScreenWidth();
    QString getScreenHeight();
    QString getSseVersion();
    QString getCoresNum();
  private:
    unsigned regs[4];
    void cpuID(unsigned,unsigned []);
};

#endif // MULTIOS_H
