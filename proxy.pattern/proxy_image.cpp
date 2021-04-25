#include <stdio.h>
#include <string>
#include "real_image.h"
#include "proxy_image.h"


CProxyImage::CProxyImage(string fileName)
    :m_FileName(fileName)
{
}

CProxyImage::~CProxyImage()
{
    printf("delete m_RealImage\n");
    delete m_RealImage;
}

void CProxyImage::Display()
{
    if (m_RealImage == NULL)
    {
        m_RealImage = new CRealImage(m_FileName);
    }
    m_RealImage->Display();
}
