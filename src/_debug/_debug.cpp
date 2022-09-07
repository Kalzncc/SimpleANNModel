#include "_debug.h"

void LOG::log(LOG::Level level, const std::string &msg) {
    static std::string level_str[] = {"DEBUG", "INFO", "WARN", "ERROR", "FATAL"};
    std::cout << "[" << level_str[level] <<"] " << msg << "\n"; 
}

void LOG::_log_debug(const std::string &msg) {
    std::cout <<  msg << "\n";    
}
// void LOG::_log_debug(const Matrix &matrix) {
    // for (int i = 0; i < matrix.n; i++) {
    //     if (i == 0) printf("[");
    //     else printf(" ");
    //     for (int j = 0; j < matrix.m; j++) {
    //         printf("%5d", matrix.a[i][j]);
    //     }
    //     if (i == matrix.n-1) printf("]");
    //     puts("");
    // }
// }