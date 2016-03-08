#ifndef MODEL_HPP
#define MODEL_HPP

#include <forward_list>
#include <thread>
#include <cassert>

class Model {
public:
    typedef void(* DeleteFunctionType)(void);
private:
    static std::forward_list<DeleteFunctionType> * deleteFunctions_ ;
    static std::thread::id modelID_;
    static std::forward_list<DeleteFunctionType> * getDeleteFunctions() {
        if (deleteFunctions_ ) {return deleteFunctions_;}
        modelID_ = std::this_thread::get_id();
        deleteFunctions_=new std::forward_list<DeleteFunctionType>;
        deleteFunctions_->push_front([]() {
            delete deleteFunctions_;
            deleteFunctions_=nullptr;
        });
        return deleteFunctions_;
    }
public:

    static const std::thread::id & getThreadID() {
        getDeleteFunctions();
        return modelID_;
    }

    static void addDeleteFunction(DeleteFunctionType fun_) {
        getDeleteFunctions()->push_front(fun_);
        assert( std::this_thread::get_id()==modelID_ );
    }

    static void deleteModel() {
        if (deleteFunctions_) {
            const auto end__ = deleteFunctions_->end();
            auto begin__=deleteFunctions_->begin();
            auto run__=begin__;
            for (;(run__=begin__++),begin__!=end__;) {
                if (*run__) { (*run__)(); }
            }
            if (*run__) { (*run__)(); }
        }
    }

};


#include<iostream>
int main() {
    Model::addDeleteFunction([]() {std::cout<<"0"<<std::endl; });
    Model::addDeleteFunction([]() {std::cout<<"1"<<std::endl; });
    Model::addDeleteFunction([]() {std::cout<<"2"<<std::endl; });
    Model::deleteModel();
    system("pause");
}

std::forward_list<Model::DeleteFunctionType> * Model::deleteFunctions_=nullptr;
std::thread::id Model::modelID_;


#endif // MODEL_HPP
