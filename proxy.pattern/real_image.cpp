#include <stdio.h>
#include <string>
#include "real_image.h"

CRealImage::CRealImage(string fileName)
    : m_FileName(fileName)
{
    LoadFromDisk(fileName);
}

void CRealImage::Display()
{
    printf("RealImage Displaying %s\n", m_FileName.c_str());
}

void CRealImage::LoadFromDisk(string fileName)
{
    printf("RealImage Loading %s\n", fileName.c_str());
}
