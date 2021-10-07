#include "Cube.h"

void Cube::setLength(int length) {
    this->length = length;
}

int Cube::getArea() {
    return width*height;
}

void Cube::setEdge(int width, int height, int length) {
    this->length = length;
    this->height = height;
    this->width = width;
    this->width = width;

}