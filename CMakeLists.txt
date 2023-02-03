### --- Dirs --- ###
#Initial find dir
RECURSIVE_FIND_DIR(INCLUDE_DIRS "${PROJECT_SOURCE_DIR}/libraries/codal-nimble/porting/npl/inc" "*.h")
list(APPEND INCLUDE_DIRS "${PROJECT_SOURCE_DIR}/libraries/codal-nimble/inc")

#Add the rest of header files

#Add sys
RECURSIVE_FIND_DIR(SYS_DIRS "${PROJECT_SOURCE_DIR}/libraries/codal-nimble/porting/nimble/include/" "*.h" )
list(APPEND INCLUDE_DIRS ${SYS_DIRS})

#Add nimble
list(APPEND INCLUDE_DIRS "${PROJECT_SOURCE_DIR}/libraries/codal-nimble/nimble/include/nimble")
#Add host
# list(APPEND INCLUDE_DIRS "${PROJECT_SOURCE_DIR}/libraries/codal-nimble/nimble/host/include/host/")
#Add host services
RECURSIVE_FIND_DIR(HOST_DIRS "${PROJECT_SOURCE_DIR}/libraries/codal-nimble/nimble/host/include/host" "*.h" )
list(APPEND INCLUDE_DIRS ${HOST_DIRS})
#Add cotroller
RECURSIVE_FIND_DIR(CONTROLLER_DIRS "${PROJECT_SOURCE_DIR}/libraries/codal-nimble/nimble/controller/include/controller" "*.h" )
list(APPEND INCLUDE_DIRS ${CONTROLLER_DIRS})

list(APPEND INCLUDE_DIRS "${PROJECT_SOURCE_DIR}/libraries/codal-nimble/nimble/drivers/native/include/ble")

# list(APPEND INCLUDE_DIRS "${PROJECT_SOURCE_DIR}/libraries/codal-nimble/nimble/host/services/tps/include")

# list(APPEND INCLUDE_DIRS "${PROJECT_SOURCE_DIR}/libraries/codal-nimble/nimble/host/util")
#Add transport
list(APPEND INCLUDE_DIRS "${PROJECT_SOURCE_DIR}/libraries/codal-nimble/nimble/transport/nimble")
list(APPEND INCLUDE_DIRS "${PROJECT_SOURCE_DIR}/libraries/codal-nimble/nimble/transport/nimble/transport")
# list(APPEND INCLUDE_DIRS "${PROJECT_SOURCE_DIR}/libraries/codal-nimble/nimble/transport/socket/include")

RECURSIVE_FIND_DIR(TINY_DIRS "${PROJECT_SOURCE_DIR}/libraries/codal-nimble/ext/tinycrypt/include/tinycrypt" "*.h" )
list(APPEND INCLUDE_DIRS ${TINY_DIRS})
### --- Files --- ###

#Initial find source files
RECURSIVE_FIND_FILE(SOURCE_FILES "${PROJECT_SOURCE_DIR}/libraries/codal-nimble/porting/npl/src/" "*.c")
#Add sys
RECURSIVE_FIND_FILE(SYS_FILES "${PROJECT_SOURCE_DIR}/libraries/codal-nimble/porting/nimble/src/" "*.c" )
# list(APPEND SOURCE_FILES  "${PROJECT_SOURCE_DIR}/libraries/codal-nimble/porting/nimble/src/endian")
# list(APPEND SOURCE_FILES  "${PROJECT_SOURCE_DIR}/libraries/codal-nimble/porting/nimble/src/mem")
# list(APPEND SOURCE_FILES  "${PROJECT_SOURCE_DIR}/libraries/codal-nimble/porting/nimble/src/nimble_port")
# list(APPEND SOURCE_FILES  "${PROJECT_SOURCE_DIR}/libraries/codal-nimble/porting/nimble/src/os_cputime_pwr2")
# list(APPEND SOURCE_FILES  "${PROJECT_SOURCE_DIR}/libraries/codal-nimble/porting/nimble/src/os_cputime")
# list(APPEND SOURCE_FILES  "${PROJECT_SOURCE_DIR}/libraries/codal-nimble/porting/nimble/src/os_mbuf")
# list(APPEND SOURCE_FILES  "${PROJECT_SOURCE_DIR}/libraries/codal-nimble/porting/nimble/src/os_mempool")
# list(APPEND SOURCE_FILES  "${PROJECT_SOURCE_DIR}/libraries/codal-nimble/porting/nimble/src/os_msys_init")
#Add host
# RECURSIVE_FIND_FILE(HOST_FILES "${PROJECT_SOURCE_DIR}/libraries/codal-nimble/nimble/host/services/**/src" "*.c" )
# list(APPEND SOURCE_FILES ${HOST_FILES})
RECURSIVE_FIND_FILE(HOST_FILES "${PROJECT_SOURCE_DIR}/libraries/codal-nimble/nimble/host/src" "*.c" ) #<-- this?

# list(APPEND SOURCE_FILES  "${PROJECT_SOURCE_DIR}/libraries/codal-nimble/nimble/host/src/ble_hs")
# list(APPEND SOURCE_FILES  "${PROJECT_SOURCE_DIR}/libraries/codal-nimble/nimble/host/src/ble_hs_mqueue")
# list(APPEND SOURCE_FILES  "${PROJECT_SOURCE_DIR}/libraries/codal-nimble/nimble/host/src/ble_hs_stop")
# list(APPEND SOURCE_FILES  "${PROJECT_SOURCE_DIR}/libraries/codal-nimble/nimble/host/src/ble_gap")
#Add controller
RECURSIVE_FIND_FILE(CONTROLLER_FILES "${PROJECT_SOURCE_DIR}/libraries/codal-nimble/nimble/controller/src" "*.c" ) 
#Add transport
RECURSIVE_FIND_FILE(TRANSPORT_FILES "${PROJECT_SOURCE_DIR}/libraries/codal-nimble/nimble/transport/src/" "*.c" )
# list(APPEND SOURCE_FILES "${PROJECT_SOURCE_DIR}/libraries/codal-nimble/nimble/transport/socket/src/ble_hci_socket")
# message("${SOURCE_FILES}")
RECURSIVE_FIND_FILE(TINY_FILES "${PROJECT_SOURCE_DIR}/libraries/codal-nimble/ext/tinycrypt/src" "*.c" )
# message(halo)
# message()

message( "${SOURCE_FILES}" )

### --- Rest of cmake --- ###

#execute_process(WORKING_DIRECTORY "." COMMAND "git" "log" "--pretty=format:%h" "-n" "1" OUTPUT_VARIABLE git_hash)
#execute_process(WORKING_DIRECTORY "." COMMAND "git" "rev-parse" "--abbrev-ref" "HEAD" OUTPUT_VARIABLE git_branch OUTPUT_STRIP_TRAILING_WHITESPACE)

#if ("${git_branch}" STREQUAL "master")
#    set(CODAL_VERSION_STRING "${CODAL_VERSION_STRING}")
#else()
#    set(CODAL_VERSION_STRING "${CODAL_VERSION_STRING}-${git_branch}-g${git_hash}")
#endif()

#set(CODAL_VERSION_FLAGS "-DCODAL_VERSION=\\\"${CODAL_VERSION_STRING}\\\"")

#set (CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} ${CODAL_VERSION_FLAGS}")

# add them
include_directories(${INCLUDE_DIRS})

add_library(codal-nimble
    ${SOURCE_FILES}

    # NimBLE internal components
    ${SYS_FILES}
    ${HOST_FILES}
    ${CONTROLLER_FILES}
    ${TRANSPORT_FILES}
    ${TINY_FILES}
)

target_link_libraries(
    codal-nimble
    codal-core
)

target_include_directories(codal-nimble PUBLIC ${INCLUDE_DIRS})