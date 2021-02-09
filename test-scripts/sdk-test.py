#!/bin/sh
import os
workspace=os.environ['WORKSPACE']
build_path=os.path.join(workspace,"build")
os.chdir(build_path)
os.system("cmake ..")
os.system("make")
os.system("./cmake-demo")