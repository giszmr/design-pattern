#ifndef IMAGE_H
#define IMAGE_H

class IImage {
    public:
       virtual ~IImage(){};
       virtual void Display() = 0;
};

#endif
