// Implementation file for Wk_ch3.hpp classes and methods.

#include "Wk_ch3.hpp"


template <class elemType>
void arrayListType<elemType>::print() const{
    for(int i = 0; i < length; i++ )
        std::cout << list[i] << " ";
    std::cout << std::endl;
}

template <class elemType>
void arrayListType<elemType>::insertAt(int location, const elemType& insertItem){
    if(location < 0 || location > maxSize)
        std::cerr << "The position of the item to be inserted is \nout of range" <<std::endl;
    else
        if(length>= maxSize)
            std::cerr << "Cannot insert in a full list" << std::endl;
        else{
            for (int i = length; i > location; i--)
                list[i] = list[i-1];
            list[location] = insertItem;
            length++;
        }
}

template <class elemType>
void arrayListType<elemType>::insertEnd(const elemType& insertItem){
    if (length  >= maxSize)
        std::cerr << "Cannot insert into full list" << std::endl;
    else{
        list[length] = insertItem;
        length++;
    }
}

template <class elemType>
void arrayListType<elemType>::removeAt(int location, elemType& retItem){
    if (location < 0 || location >= length)
        std::cerr << "The position of the item to be inserted is \nout of range" <<std::endl;
    else{
        for (int i = location; i<length; i++)
            list[i] = list[i+1];
        length--;
    }
}

template <class elemType>
void arrayListType<elemType>::retrieveAt(int location, elemType & retItem) const{
    
    
}
