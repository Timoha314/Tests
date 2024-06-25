#include <QtTest>
#include "../nod_nok_main/nod.h"
// add necessary includes here

class test_nod_nok : public QObject
{
    Q_OBJECT

public:
    test_nod_nok();
    ~test_nod_nok();

private slots:
    void test_Nod();
    void test_Nok();
};

test_nod_nok::test_nod_nok() {}

test_nod_nok::~test_nod_nok() {}

void test_nod_nok::test_Nod() {
    QCOMPARE(NOD(2,3).Nod(),1);
    QCOMPARE(NOD(0,3).Nod(),0);
    QCOMPARE(NOD(20,15).Nod(),5);
    QCOMPARE(NOD(2147483647,10).Nod(),1);
}

void test_nod_nok::test_Nok() {
    QCOMPARE(NOD(2,3).Nok(),6);
    QCOMPARE(NOD(0,3).Nok(),0);
    QCOMPARE(NOD(20,15).Nok(),60);
    QCOMPARE(NOD(2147483647,2).Nok(),4294967294);
}



QTEST_APPLESS_MAIN(test_nod_nok)

#include "tst_test_nod_nok.moc"
