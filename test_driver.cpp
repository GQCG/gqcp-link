/**
 *  Test driver
 */

#include <gqcp/gqcp.hpp>

int main() {
    GQCP::Nucleus nucleus (GQCP::elements::elementToAtomicNumber("N"), -1/2, 0, 0);
    return 0;
}
