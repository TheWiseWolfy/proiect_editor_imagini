cmake_minimum_required (VERSION 3.23)

project ("image_editor")

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set (CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_SOURCE_DIR}/out")

#You have to set this
set(Qt5_ROOT "E:/Qt/Qt5.14.2/5.14.2/msvc2017_64")
set(OpenCV_ROOT "E:/Libraries/opencv_build_noQt/install")       

#_________________QT_______________________#
set(Qt5_DIR "${Qt5_ROOT}/lib/cmake/Qt5")


#QT Macro expansion magic
set (CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOMOC ON)                                                           
set(CMAKE_AUTORCC ON)                                                           
set(CMAKE_AUTOUIC ON)

set (CMAKE_AUTOUIC_SEARCH_PATHS "${CMAKE_SOURCE_DIR}/image_editor/ui")

#all the libraries are here
find_package(Qt5 COMPONENTS Core REQUIRED)
find_package(Qt5 COMPONENTS Widgets REQUIRED)
find_package(Qt5 COMPONENTS Gui REQUIRED)
find_package(Qt5 COMPONENTS Multimedia REQUIRED)
find_package(Qt5 COMPONENTS MultimediaWidgets REQUIRED)

#_________________OPENCV_______________________#

set(OpenCV_DIR "${OpenCV_ROOT}/x64/vc17/lib")

find_package( OpenCV REQUIRED )


# Include sub-projects and link the libs
add_subdirectory ("image_editor")

#Include directories
target_include_directories(image_editor PUBLIC "${Qt5_ROOT}/include" )
target_link_libraries(image_editor PUBLIC Qt5::Widgets Qt5::Core Qt5::Gui)

target_include_directories(image_editor PUBLIC ${OpenCV_INCLUDE_DIRS})
target_link_libraries(image_editor PUBLIC "${OpenCV_ROOT}/x64/vc17/lib/opencv_world460d.lib")


