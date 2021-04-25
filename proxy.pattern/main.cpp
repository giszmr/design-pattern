#include <stdio.h>
#include "image.h"
#include "real_image.h"
#include "proxy_image.h"

int main(int argc, char *argv[])
{
    IImage *Image = new CProxyImage("CV0041111_ZhuMengri.jpg");
    Image->Display();

    printf("\n");
    Image->Display();
    
    printf("\n");
    delete Image;

    return 0;
}
