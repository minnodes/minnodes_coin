Compiling/running unit tests
------------------------------------

Unit tests will be automatically compiled if dependencies were met in configure
and tests weren't explicitly disabled.

After configuring, they can be run with 'make check'.

To run the minnodesd tests manually, launch src/test/test_minnodes .

To add more minnodesd tests, add `BOOST_AUTO_TEST_CASE` functions to the existing
.cpp files in the test/ directory or add new .cpp files that
implement new BOOST_AUTO_TEST_SUITE sections.

To run the minnodes-qt tests manually, launch src/qt/test/minnodes-qt_test

To add more minnodes-qt tests, add them to the `src/qt/test/` directory and
the `src/qt/test/test_main.cpp` file.
