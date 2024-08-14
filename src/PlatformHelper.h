#ifdef __WIN32__
    #include <direct.h>
    #define FILE_SEPARATOR "\\"
#else 
    #include "unistd.h"
    #define FILE_SEPARATOR "/"
#endif
#include <string>
class PlatformHelper
{
private:
    PlatformHelper()
    {

    }
public: 
    static PlatformHelper* obj;
    static PlatformHelper* getInstance();
    std::string getCurrentWorkingDir();
};
