# --- Kartonagnick/compile                                      [CMakeLists.txt]
# [2025-11-06][08:10:00] 001 Kartonagnick PRE
# [2025-11-06][06:16:06] register repo on github
# [2025-11-06][04:38:47] birthday of the project
################################################################################

set(gARTIFACT_PREFIX "{PROJECT_VERSION}")

set(gARTIFACT_SUFFIX 
    "{COMPILER_TAG}-{BUILD_TYPE}-{ADDRESS_MODEL}-{RUNTIME_CPP}"
)

#-------------------------------------------------------------------------------

if (CMAKE_VERSION GREATER_EQUAL 4.0.0)
  cmake_minimum_required(VERSION 3.5)
else()
  cmake_minimum_required(VERSION 3.1)
endif()

include("${CMAKE_CURRENT_LIST_DIR}/setup.cmake")
cmake_scenario("minimalist")
project("${gPROJECT_NAME}" CXX)

#---[general]-------------------------------------------------------------------

make_target(MASTER)

#---[test]----------------------------------------------------------------------

make_target(PATH_TO_SOURCES "test")

################################################################################
################################################################################
