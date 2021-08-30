/* #include "deepptr.h"
#include <iostream>

template<class T>
DeepPtr<T>::DeepPtr(T* t): info(t==nullptr ? nullptr : t->clone()){}

template<class T>
DeepPtr<T>::DeepPtr(const DeepPtr<T>& dp): info(dp.info==nullptr ? nullptr : new T(*(dp.info))){}

template<class T>
DeepPtr<T>::~DeepPtr(){delete info;}

template<class T>
DeepPtr<T>& DeepPtr<T>::operator=(const DeepPtr& dp){
    if(this!=&dp){
        delete info;
        info = dp.get()->clone();
    }
    return *this;
}

template<class T>
T& DeepPtr<T>::operator*(){return *info;}

template<class T>
const T& DeepPtr<T>::operator*() const{return *info;}

template<class T>
T* DeepPtr<T>::operator->(){return info;}

template<class T>
const T* DeepPtr<T>::operator->() const{return info;}

template<class T>
T& DeepPtr<T>::operator[](unsigned int i){return info[i];}

template<class T>
const T& DeepPtr<T>::operator[](unsigned int i) const{return info[i];}

template<class T>
T* DeepPtr<T>::get(){return info;}

template<class T>
const T* DeepPtr<T>::get() const{return info;}

template<class T>
void DeepPtr<T>::reset(T* ptr){
    delete info;
    info=ptr;
}

template<class T>
DeepPtr<T>::operator bool() const{return info!=nullptr;}

template<class T>
T* DeepPtr<T>::release(){
    T*aux = new T(info);
    delete info;
    return aux;
}

template<class T>
void DeepPtr<T>::swap(DeepPtr(& dp)){
    T* aux = new T(info);
    info = new T(dp.info);
    dp.info = aux;
}

template<class T>
std::ostream& operator<<(std::ostream& os, const DeepPtr<T>& dp){
    return os<<*dp;
}*/
