cmake_minimum_required(VERSION 3.14)
project(gazoz VERSION 1.0.1 DESCRIPTION "gazoz game engine")
set(CMAKE_C_STANDARD 99)
include(GNUInstallDirs)
set(CMAKE_INSTALL_PREFIX /usr)
add_library(gazoz SHARED src/window.c src/application.c include/renderer.h src/renderer.c include/common.h)

set_target_properties(gazoz PROPERTIES
        VERSION ${PROJECT_VERSION}
        SOVERSION 1
        )
configure_file(gazoz.pc.in gazoz.pc @ONLY)
target_include_directories(gazoz PRIVATE include)
install(TARGETS gazoz
        LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
        )
FILE(GLOB includes "include/*.h")
install(FILES ${includes} DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/${CMAKE_PROJECT_NAME}/)
install(FILES ${CMAKE_BINARY_DIR}/gazoz.pc
        DESTINATION ${CMAKE_INSTALL_DATAROOTDIR}/pkgconfig)
