from distutils.core import setup, Extension
import pybind11

EXTRA_COMPILE_ARGS = ['-std=c++11', '-fvisibility=hidden']

ext = Extension(
    "_ext",
    sources=["bindings.cpp"],
    include_dirs=[
        pybind11.get_include(),
        pybind11.get_include(user=True)
    ],
    extra_compile_args=EXTRA_COMPILE_ARGS,
    undef_macros=["NDEBUG"],
)

setup(
    name="ext",
    ext_modules=[ext]
)
