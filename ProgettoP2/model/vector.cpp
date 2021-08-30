/*#include "vector.h"

template<class T>
Vector<T>::Vector():cap(1), _size(0), info(new T[1]){}

template<class T>
Vector<T>::Vector(int n_ele, T val):cap(n_ele),_size(n_ele), info(new T[cap]){
    for(int i=0; i<cap; i++)
        info[i]=val;
}

template<class T>
Vector<T>::Vector(const Vector& v): cap(v.cap),_size(v.sze), info(new T[cap]){
    for(int i=0; i<_size; i++)
        info[i]=v.info[i];
}

template<class T>
Vector<T>::~Vector<T>(){delete[] info;}

template<class T>
Vector<T>& Vector<T>::operator=(const Vector<T>& v){
    if(this!=&v){
        delete[] info;
        _size=v._size;
        cap=v.cap;
        info = new T[cap];
        for(int i=0; i<_size; i++)
            info[i]=v.info[i];
    }
    return *this;
}

template<class T>
Vector<T>::iterator::iterator(): punt(nullptr){}

template<class T>
Vector<T>::iterator::iterator(T* t):punt(t){}

template<class T>
typename Vector<T>::iterator Vector<T>::iterator::operator++(int){
    Vector<T>::iterator it = *this;
    punt++;
    return it;
}

template<class T>
typename Vector<T>::iterator& Vector<T>::iterator::operator++(){
    ++punt;
    return *this;
}

template<class T>
typename Vector<T>::iterator Vector<T>::iterator::operator--(int){

}

template<class T>
typename Vector<T>::iterator& Vector<T>::iterator::operator--(){
    --punt;
    return *this;
}

template<class T>
bool Vector<T>::iterator::operator==(const iterator& it) const{return punt==it.punt;}

template<class T>
bool Vector<T>::iterator::operator!=(const iterator& it) const{return punt!=it.punt;}

template<class T>
T& Vector<T>::iterator::operator*() const{return *punt;}

template<class T>
T* Vector<T>::iterator::operator->() const{return punt;}

template<class T>
Vector<T>::const_iterator::const_iterator(const iterator& it): iter(it){}

template<class T>
Vector<T>::const_iterator::const_iterator(): iter(nullptr, false){}

template<class T>
Vector<T>::const_iterator::const_iterator(T* t): iter(t){}

template<class T>
typename Vector<T>::const_iterator Vector<T>::const_iterator::operator++(int){
    Vector<T>::const_iterator it=*this;
    iter++;
    return it;
}

template<class T>
typename Vector<T>::const_iterator& Vector<T>::const_iterator::operator++(){
    return ++iter;
}

template<class T>
typename Vector<T>::const_iterator Vector<T>::const_iterator::operator--(int){
    Vector<T>::const_iterator it=*this;
    iter--;
    return it;
}

template<class T>
typename Vector<T>::const_iterator& Vector<T>::const_iterator::operator--(){
    return --iter;
}

template<class T>
bool Vector<T>::const_iterator::operator==(const const_iterator& it) const{return iter==it.iter;}

template<class T>
bool Vector<T>::const_iterator::operator!=(const const_iterator& it) const{return iter!=it.iter;}

template<class T>
const T& Vector<T>::const_iterator::operator*() const{return iter.operator*();}

template<class T>
const T* Vector<T>::const_iterator::operator->() const{return iter.operator->();}

template<class T>
int Vector<T>::size() const{return _size;}

template<class T>
int Vector<T>::capacity() const{return cap;}

template<class T>
typename Vector<T>::iterator Vector<T>::begin() {
    return info;
}

template<class T>
typename Vector<T>::iterator Vector<T>::end() {return info+_size;}

template<class T>
typename Vector<T>::const_iterator Vector<T>::begin() const {
    return info;
}

template<class T>
typename Vector<T>::const_iterator Vector<T>::end() const {return info+_size;}

template<class T>
T& Vector<T>::operator[](unsigned int i){return info[i];}

template<class T>
const T& Vector<T>::operator[](unsigned int i) const{return info[i];}

template<class T>
void Vector<T>::push_back(const T& t){
    if(_size==cap){
        cap*=2;
        T* aux = new T[_size];
        for(int i=0;i<_size; i++)
            aux[i]= info[i];
        delete[] info;
        info = new T[cap];
        for(int i=0;i<_size; i++)
            info[i]=aux[i];
    }
    info[_size] = t;
    _size++;
}

template<class T>
void Vector<T>::pop_back(){
    if(_size>0){
        _size--;
        T* aux = new T[_size];
        for(int i=0;i<_size; i++)
            aux[i]= info[i];
        delete[] info;
        info = new T[cap];
        for(int i=0;i<_size; i++)
            info[i]=aux[i];
    }
}

template<class T>
void Vector<T>::erase(int i){
    if(i==_size-1)
        pop_back();
    else if(0<=i && i<_size-1){
        for(int j=i; j<_size-1; j++)
            info[j]=info[j+1];
        pop_back();
    }
    else
        throw "index out of range";
}

template<class T>
void Vector<T>::clear(){
    _size=0;
}

template<class T>
std::ostream& operator<<(std::ostream& os, const Vector<T>& v){
    for(typename Vector<T>::const_iterator it = v.begin(); it++; it!=v.end())
        os<<*it<<" ";
    return os;
}

*/


