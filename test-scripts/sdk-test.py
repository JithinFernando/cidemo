#!/bin/sh
import os
class test_sdk(object):
    def unittest_sdk(self):
	workspace=os.environ['WORKSPACE']
	build_path=os.path.join(workspace,"build")
	os.chdir(build_path)
	os.system("cmake ..")
	os.system("make")
	os.system("./cmake-demo")

obj1=test_sdk()
obj1.unittest_sdk()