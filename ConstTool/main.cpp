#include "MainWindow.hpp"
#include <QApplication>

template<typename _const_T> static inline const _const_T & _as_const(const _const_T & value) {return value ;}
template<typename _const_T> static inline _const_T & _no_const(const _const_T & value) { return const_cast<_const_T &>(value); }

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}
