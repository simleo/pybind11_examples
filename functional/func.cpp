#include <functional>


int func_arg(const std::function<int(int)> &f) {
    return f(10);
}
