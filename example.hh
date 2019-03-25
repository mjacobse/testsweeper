#ifndef EXAMPLE_HH
#define EXAMPLE_HH

#include "testsweeper.hh"

// -----------------------------------------------------------------------------
class Params: public testsweeper::ParamsBase
{
public:
    const double nan = std::numeric_limits<double>::quiet_NaN();

    Params();

    // Field members are explicitly public.
    // Order here determines output order.
    // ----- test framework parameters
    testsweeper::ParamChar   check;
    testsweeper::ParamChar   ref;
    testsweeper::ParamDouble tol;
    testsweeper::ParamInt    repeat;
    testsweeper::ParamInt    verbose;
    testsweeper::ParamInt    cache;

    // ----- routine parameters
    testsweeper::ParamEnum< testsweeper::DataType > datatype_old;
    testsweeper::ParamEnum< testsweeper::DataType > datatype;
    testsweeper::ParamInt3   dim;

    // ----- output parameters
    testsweeper::ParamScientific error;
    testsweeper::ParamScientific ortho;
    testsweeper::ParamDouble     time;
    testsweeper::ParamDouble     gflops;

    testsweeper::ParamScientific ref_error;
    testsweeper::ParamScientific ref_ortho;
    testsweeper::ParamDouble     ref_time;
    testsweeper::ParamDouble     ref_gflops;

    testsweeper::ParamOkay       okay;
};

// -----------------------------------------------------------------------------
// Level 1
void test_foo( Params& params, bool run );

// -----------------------------------------------------------------------------
// Level 2
void test_bar( Params& params, bool run );

// -----------------------------------------------------------------------------
// Level 3
void test_baz( Params& params, bool run );

#endif  //  #ifndef EXAMPLE_HH
