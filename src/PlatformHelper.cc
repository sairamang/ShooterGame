#include "PlatformHelper.h"


PlatformHelper* PlatformHelper::obj=nullptr;

PlatformHelper* PlatformHelper::getInstance()
{
    if(obj==NULL)
    {
        obj = new PlatformHelper();
    }
    return obj;
}

std::string PlatformHelper::getCurrentWorkingDir()
{
    char buf[500];
    getcwd(buf,500);
    std::string str(buf);
    return str;
}