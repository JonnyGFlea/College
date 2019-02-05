#ifndef _OBJECT3D_H
#define _OBJECT3D_H

class Object3D {
    public:
        Object3D() {};
        Object3D(const std::string& n) {name = n;};
        virtual ~Object3D() {};
        void setName(const std::string& nn) {name = nn;};
        std::string getName() const {return name;};
        virtual double volume() const = 0;
    protected:
        std::string name;
};

class Sphere : public Object3D {
    public:
        Sphere() {};
        Sphere(const std::string& n, double r) : Object3D(n) {radius = r;};
        ~Sphere() {};
        void setRadius(double r) {radius = r;};
        double getRadius() const {return radius;};
        double volume() const;
    protected:
        double radius;
};

class Cylinder : public Sphere {
    public:
        Cylinder() {};
        Cylinder(const std::string& n, double r, double h) : Sphere(n, r) {height = h;};
        ~Cylinder() {};
        void setHeight(double h) {height = h;};
        double getHeight() const {return height;};
        double volume() const;
    protected:
        double height;
};

class RectPrism : public virtual Object3D {
    public:
        RectPrism() {};
        RectPrism(const std::string& n, double w, double l, double h) : Object3D(n) {width = w; length = l; height = h;};
        ~RectPrism() {};
        void setWidth(double w) {width = w;};
        void setLength(double l) {length = l;};
        void setHeight(double h){height = h;};
        double getWidth() const {return width;};
        double getLength() const {return length;};
        double getHeight() const {return height;};
        double volume() const;
    protected:
        double width;
        double length;
        double height;
};

class Cube : public RectPrism {
    public:
        Cube() {};
        Cube(const std::string& n, double s) : RectPrism(n, s, s, s) {};
        ~Cube() {};
};

#endif // _OBJECT3D_H
