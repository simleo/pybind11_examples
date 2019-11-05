from distutils.core import setup, Extension

import pybind11
import os


EXTRA_COMPILE_ARGS = ['-std=c++11', '-fvisibility=hidden']
PWD = os.getcwd()
EXT1_DIR = os.path.abspath(PWD + "/../ext1")

ext = Extension(
    "_ext2",
    sources=["bindings.cpp"],
    include_dirs=[
        PWD, EXT1_DIR,
        pybind11.get_include(),
        pybind11.get_include(user=True)
    ],
    library_dirs=[PWD, EXT1_DIR],
    runtime_library_dirs=[PWD, EXT1_DIR],
    libraries=["pet_user", "pet"],
    extra_compile_args=EXTRA_COMPILE_ARGS,
    undef_macros=["NDEBUG"],
)


setup(
    name="ext2",
    ext_modules=[ext]
)
