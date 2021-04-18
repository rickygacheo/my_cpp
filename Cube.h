class Cube {
    friend int main();
    public:
    int getArea();
    int getH();
    void setEdge(int width, int heght, int length);
    private:
    int length;
    int height;
    int width;
    void setLength(int length);

    private:
    void setEdge(int width, int height) {
        (*this).length = length;
        this->height = height;
        (*this).width = width;
    }

};