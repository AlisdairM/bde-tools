#include <bsls_atomic.h>
#include <bsl_iostream.h>

using namespace BloombergLP;

int main()
{
    bsls::AtomicInt aint;
    aint = 10;

    bsls::AtomicInt64 aint64;
    aint64 = 64;

    int                      value;
    bsls::AtomicPointer<int> aptr;
    aptr = 0;

    bsl::cout << "Done\n";
}
