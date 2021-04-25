#ifndef REAL_IMAGE_H
#define REAL_IMAGE_H

#include <string>
#include "image.h"

using std::string;

class CRealImage : public IImage{
    public:
        CRealImage(string fileName);
        void Display();
    private:
        string m_FileName;
        void LoadFromDisk(string m_FileName);
};

#endif
