#include <oneapi/tbb/parallel_for.h>

#include <atomic>

int main() {
    std::atomic<int> counter{};
    oneapi::tbb::parallel_for(std::size_t(0), std::size_t(1), [&](std::size_t) {
        ++counter;
    }, oneapi::tbb::simple_partitioner());
    
    return 0;
}
