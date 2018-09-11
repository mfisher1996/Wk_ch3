// Implementation file for Wk_ch3.hpp classes and methods.

#include "Wk_ch3.hpp"

template <class elemType>
bool arrayListType<elemType>::isEmpty() const{
	return (length == 0);
}

bool arrayListType<elemType>::isFull() const{
	return (length == maxSize);
}

int arrayListType<elemType>::
