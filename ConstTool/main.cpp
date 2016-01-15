#include "MainWindow.hpp"
#include <QApplication>

#include <type_traits>
template<typename _const_T> static inline const _const_T & _as_const(const _const_T & value) {return value ;}
template<typename _const_T> static inline auto & _no_const(_const_T & value) {return const_cast<  std::remove_const_t< std::remove_reference_t<_const_T> > &>(value); }

//auto _as_const=[](const auto & value)->auto & {return static_cast<std::add_const_t< std::remove_reference_t< decltype(value) > > &>(value);  };
//auto _no_const=[](auto & value)->auto & { return const_cast<std::remove_const_t< std::remove_reference_t< decltype(value) > > &>(value); };

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    MainWindow w;
    _no_const(w).show();

    return a.exec();
}
