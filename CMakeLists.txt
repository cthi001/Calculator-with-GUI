CMAKE_MINIMUM_REQUIRED(VERSION 2.8)
 
 ADD_SUBDIRECTORY(googletest)

SET(CMAKE_CXX_STANDARD 11)

 ADD_EXECUTABLE(test
	 unit_test.cpp
	 Mult.cpp
	 add.cpp
	 Div.cpp
	 Pow.cpp
	 sub.cpp
 )
ADD_EXECUTABLE(main
	main.cpp
	GUI.cpp
	add.cpp
	Mult.cpp
	sub.cpp
	Div.cpp
	Pow.cpp
	construct.cpp
	std_calculator.cpp
	std_construct.cpp
   	 stf_calculator.cpp
   	 stf_construct.cpp
	base_calculator.cpp
)


 TARGET_LINK_LIBRARIES(test gtest)
 TARGET_COMPILE_DEFINITIONS(test PRIVATE gtest_disable_pthreads=ON)
