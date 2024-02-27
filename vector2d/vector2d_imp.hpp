/**
 * CopyRight F. J. Madrid-Cuevas <fjmadrid@uco.es>
 *
 * Sólo se permite el uso de este código en la docencia de las asignaturas sobre
 * Estructuras de Datos de la Universidad de Córdoba.
 *
 * Está prohibido su uso para cualquier otro objetivo.
 */
#pragma once
#include <cassert>

#include "vector2d.hpp"

// TODO: implement the interface for the proposed ADT.

    template <typename T>
    T Vector2D<T>::y() const{return y_;}

    template <typename T>
    T Vector2D<T>::x() const{return x_;}

    template <typename T>
    void Vector2D<T>::set_x(T x) {x_ = x;}

    template <typename T>
    void Vector2D<T>::set_y(T y) {y_ = y;}

    template <typename T>
    void Vector2D<T>::add(Vector2D<T> o) 
    {
        x_ += o.x();
        y_ += o.y();
    }

    template <typename T>
    std::shared_ptr<Vector2D<T>> Vector2D<T>::create()
    {
        return std :: make_shared < Vector2D <T> >();
    }

    template <typename T>
    std::shared_ptr<Vector2D<T>> Vector2D<T>::create(T x, T y)
    {
        
        return 0;
    }

//