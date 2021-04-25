#ifndef PROXY_IMAGE_H
#define PROXY_IMAGE_H

#include <string>
#include "image.h"
#include "real_image.h"

using std::string;

class CProxyImage : public IImage {
    public:
        CProxyImage(string fileName);
        ~CProxyImage();
        void Display();
    private:
        CRealImage *m_RealImage;
        string      m_FileName;
};

#endif
