INCLUDE(FindHelpers)

FIND_PACKAGE_HELPER(Squish squish.h)

IF(SQUISH_FOUND)
  IF(NOT SQUISH_FIND_QUIETLY)
    MESSAGE(STATUS "Found Squish: ${SQUISH_LIBRARIES}")
  ENDIF()
  FILE(STRINGS ${SQUISH_INCLUDE_DIR}/squish.h METRIC REGEX "metric = 0")
  IF(METRIC)
    SET(SQUISH_COMPRESS_HAS_METRIC ON)
    SET(SQUISH_DEFINITIONS -DSQUISH_COMPRESS_HAS_METRIC)
  ENDIF()
ENDIF()
