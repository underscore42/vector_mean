Basic example of calculating mean of a series of numbers.

Here are my assumptions:

- the series is coming in as a vector, float.
- the precision we are looking for is float.
- using the accumulator from the numeracy library, assuming it won't pop? the max added up
will be less than the max value for a float.
- check for zero size.

Test framework:
- read in from a CSV file.
- three examples are given, with expected outputs. This can be added to a bash script in the future.
- throws error on invalid file. warning on no file.

How to build?
gandalf@QixII:~/projects/examples/mean_example$ meson . build
The Meson build system
Version: 0.49.2
Source dir: /home/gandalf/projects/examples/mean_example
Build dir: /home/gandalf/projects/examples/mean_example/build
Build type: native build
Project name: mean
Project version: undefined
Native C++ compiler: c++ (gcc 8.3.0 "c++ (Debian 8.3.0-6) 8.3.0")
Build machine cpu family: x86_64
Build machine cpu: x86_64
Build targets in project: 1
Found ninja-1.8.2 at /usr/bin/ninja
gandalf@QixII:~/projects/examples/mean_example$ cd build/
gandalf@QixII:~/projects/examples/mean_example/build$ ninja 
[3/3] Linking target mean_test.
gandalf@QixII:~/projects/examples/mean_example/build$

How to execute? Well here are some examples.
gandalf@QixII:~/projects/examples/mean_example/build$ ./mean_test ../test/test1.csv 
16.6331
gandalf@QixII:~/projects/examples/mean_example/build$ ./mean_test ../test/test2.csv 
3
gandalf@QixII:~/projects/examples/mean_example/build$ ./mean_test ../test/test3.csv 
5.24267

