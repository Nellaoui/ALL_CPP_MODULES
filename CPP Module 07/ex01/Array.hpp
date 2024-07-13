#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <stdexcept>

template <typename T>
class Array {
public:
    Array(size_t size) : size_(size), data_(new T[size]()) {}

    Array(const Array& other) : size_(other.size_), data_(new T[other.size_]) {
        for (size_t i = 0; i < size_; ++i) {
            data_[i] = other.data_[i];
        }
    }

    ~Array() {
        delete[] data_;
    }

    Array& operator=(const Array& other) {
        if (this != &other) {
            delete[] data_;
            size_ = other.size_;
            data_ = new T[size_];
            for (size_t i = 0; i < size_; ++i) {
                data_[i] = other.data_[i];
            }
        }
        return *this;
    }

    T& operator[](size_t index) {
        if (index >= size_) {
            throw std::out_of_range("Index out of range");
        }
        return data_[index];
    }

    const T& operator[](size_t index) const {
        if (index >= size_) {
            throw std::out_of_range("Index out of range");
        }
        return data_[index];
    }

    size_t size() const {
        return size_;
    }

private:
    size_t size_;
    T* data_;
};

#endif // ARRAY_HPP
