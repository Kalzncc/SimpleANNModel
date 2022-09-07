#ifndef _DEBUG
#define _DEBUG

#include <iostream>
#include <string>
#include "../tools/Matrix.h"
namespace LOG {
    enum Level {
        DEBUG,
        INFO,
        WARN,
        ERROR,
        FATAL
    };

    void log(Level level, const std::string &msg);
    void _log_debug(const std::string &msg);
    // void _log_debug(const Matrix &matrix);
}

#endif