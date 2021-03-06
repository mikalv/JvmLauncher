#include "tst_linux.h"

LinuxTest::LinuxTest(){}

void LinuxTest::initTestCase(){
  linuxOperativeSystem = new Linux();
}

void LinuxTest::getLinuxTotalRamReturnAValidValue(){
  QVERIFY2(linuxOperativeSystem->getTotalRam().toInt() > 0, "Should be true");
}

void LinuxTest::getLinuxFreeRamReturnAValidValue(){
  QVERIFY2(linuxOperativeSystem->getFreeRam().toInt() >0, "Should be true");
}

void LinuxTest::TotalRamMustBeHigherThanFreeRam(){
  QVERIFY2(linuxOperativeSystem->getFreeRam().toInt() < linuxOperativeSystem->getTotalRam().toInt(), "Should be true");
}

void LinuxTest::MultiOsInherittedCorrectly(){
  QVERIFY2(linuxOperativeSystem->getCoresNum().toInt() > 0, "should be true");
}

void LinuxTest::UnixInherittedCorrectly(){
  QVERIFY2(!linuxOperativeSystem->getOsArchitecture().toString().isEmpty(), "should be true");
}
