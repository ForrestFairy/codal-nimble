list(APPEND INCLUDE_DIRS "${PROJECT_SOURCE_DIR}/libraries/codal-nimble/inc")
RECURSIVE_FIND_FILE(SOURCE_FILES "${PROJECT_SOURCE_DIR}/libraries/codal-nimble/source/" "*.cpp")
RECURSIVE_FIND_FILE(SOURCE_FILES1 "${PROJECT_SOURCE_DIR}/libraries/codal-nimble/source/" "*.c")

# Include nimble-core
list(APPEND INCLUDE_DIRS "${PROJECT_SOURCE_DIR}/libraries/codal-nimble/lib/nimble/include")
# list(APPEND INCLUDE_DIRS "${PROJECT_SOURCE_DIR}/libraries/codal-nimble/lib/nimble/include/nimble")
list(APPEND INCLUDE_DIRS "${PROJECT_SOURCE_DIR}/libraries/codal-nimble/lib/porting/nimble/include")
list(APPEND INCLUDE_DIRS "${PROJECT_SOURCE_DIR}/libraries/codal-nimble/lib/nimble/host/include")
list(APPEND INCLUDE_DIRS "${PROJECT_SOURCE_DIR}/libraries/codal-nimble/lib/nimble/host/util/include")
list(APPEND INCLUDE_DIRS "${PROJECT_SOURCE_DIR}/libraries/codal-nimble/lib/nimble/host/store/ram/include")

# list(APPEND INCLUDE_DIRS "${PROJECT_SOURCE_DIR}/libraries/codal-nimble/lib/nimble/host/services/ans/include")
# list(APPEND INCLUDE_DIRS "${PROJECT_SOURCE_DIR}/libraries/codal-nimble/lib/nimble/host/services/bas/include")
# list(APPEND INCLUDE_DIRS "${PROJECT_SOURCE_DIR}/libraries/codal-nimble/lib/nimble/host/services/bleuart/include")
# list(APPEND INCLUDE_DIRS "${PROJECT_SOURCE_DIR}/libraries/codal-nimble/lib/nimble/host/services/dis/include")
list(APPEND INCLUDE_DIRS "${PROJECT_SOURCE_DIR}/libraries/codal-nimble/lib/nimble/host/services/gap/include")
list(APPEND INCLUDE_DIRS "${PROJECT_SOURCE_DIR}/libraries/codal-nimble/lib/nimble/host/services/gatt/include")
# list(APPEND INCLUDE_DIRS "${PROJECT_SOURCE_DIR}/libraries/codal-nimble/lib/nimble/host/services/ias/include")
# list(APPEND INCLUDE_DIRS "${PROJECT_SOURCE_DIR}/libraries/codal-nimble/lib/nimble/host/services/ipss/include")
# list(APPEND INCLUDE_DIRS "${PROJECT_SOURCE_DIR}/libraries/codal-nimble/lib/nimble/host/services/lls/include")
# list(APPEND INCLUDE_DIRS "${PROJECT_SOURCE_DIR}/libraries/codal-nimble/lib/nimble/host/services/tps/include")

list(APPEND INCLUDE_DIRS "${PROJECT_SOURCE_DIR}/libraries/codal-nimble/lib/nimble/controller/include")
list(APPEND INCLUDE_DIRS "${PROJECT_SOURCE_DIR}/libraries/codal-nimble/lib/nimble/transport/include")
list(APPEND INCLUDE_DIRS "${PROJECT_SOURCE_DIR}/libraries/codal-nimble/lib/ext/tinycrypt/include")

# list(APPEND INCLUDE_DIRS "${PROJECT_SOURCE_DIR}/libraries/codal-nimble/lib/nimble/drivers/nrf5x/include")
list(APPEND INCLUDE_DIRS "${PROJECT_SOURCE_DIR}/libraries/codal-nimble/lib/nimble/drivers/native/include")

RECURSIVE_FIND_FILE(SOURCE_FILES2 "${PROJECT_SOURCE_DIR}/libraries/codal-nimble/lib/nimble/" "*.cpp")
RECURSIVE_FIND_FILE(SOURCE_FILES3 "${PROJECT_SOURCE_DIR}/libraries/codal-nimble/lib/porting/nimble/src" "*.cpp")
RECURSIVE_FIND_FILE(SOURCE_FILES4 "${PROJECT_SOURCE_DIR}/libraries/codal-nimble/lib/nimble/" "*.c")
RECURSIVE_FIND_FILE(SOURCE_FILES5 "${PROJECT_SOURCE_DIR}/libraries/codal-nimble/lib/porting/nimble/src" "*.c")

# Exlude all uninportant things
list(FILTER SOURCE_FILES4 EXCLUDE REGEX "${PROJECT_SOURCE_DIR}\/libraries\/codal-nimble\/lib\/nimble\/\/controller\/test\/*")
list(FILTER SOURCE_FILES4 EXCLUDE REGEX "${PROJECT_SOURCE_DIR}\/libraries\/codal-nimble\/lib\/nimble\/\/host\/test\/*")
list(FILTER SOURCE_FILES4 EXCLUDE REGEX "${PROJECT_SOURCE_DIR}\/libraries\/codal-nimble\/lib\/nimble\/\/host\/mesh\/*")

list(FILTER SOURCE_FILES4 EXCLUDE REGEX "${PROJECT_SOURCE_DIR}\/libraries\/codal-nimble\/lib\/nimble\/\/host\/services\/ans\/*")
list(FILTER SOURCE_FILES4 EXCLUDE REGEX "${PROJECT_SOURCE_DIR}\/libraries\/codal-nimble\/lib\/nimble\/\/host\/services\/bas\/*")
list(FILTER SOURCE_FILES4 EXCLUDE REGEX "${PROJECT_SOURCE_DIR}\/libraries\/codal-nimble\/lib\/nimble\/\/host\/services\/bleuart\/*")
list(FILTER SOURCE_FILES4 EXCLUDE REGEX "${PROJECT_SOURCE_DIR}\/libraries\/codal-nimble\/lib\/nimble\/\/host\/services\/dis\/*")
list(FILTER SOURCE_FILES4 EXCLUDE REGEX "${PROJECT_SOURCE_DIR}\/libraries\/codal-nimble\/lib\/nimble\/\/host\/services\/ias\/*")
list(FILTER SOURCE_FILES4 EXCLUDE REGEX "${PROJECT_SOURCE_DIR}\/libraries\/codal-nimble\/lib\/nimble\/\/host\/services\/ipss\/*")
list(FILTER SOURCE_FILES4 EXCLUDE REGEX "${PROJECT_SOURCE_DIR}\/libraries\/codal-nimble\/lib\/nimble\/\/host\/services\/lls\/*")
list(FILTER SOURCE_FILES4 EXCLUDE REGEX "${PROJECT_SOURCE_DIR}\/libraries\/codal-nimble\/lib\/nimble\/\/host\/services\/tps\/*")

list(FILTER SOURCE_FILES4 EXCLUDE REGEX "${PROJECT_SOURCE_DIR}\/libraries\/codal-nimble\/lib\/nimble\/\/host\/store\/config\/*")
list(FILTER SOURCE_FILES4 EXCLUDE REGEX "${PROJECT_SOURCE_DIR}\/libraries\/codal-nimble\/lib\/nimble\/\/transport\/apollo3\/*")
list(FILTER SOURCE_FILES4 EXCLUDE REGEX "${PROJECT_SOURCE_DIR}\/libraries\/codal-nimble\/lib\/nimble\/\/transport\/cdc\/*")
list(FILTER SOURCE_FILES4 EXCLUDE REGEX "${PROJECT_SOURCE_DIR}\/libraries\/codal-nimble\/lib\/nimble\/\/transport\/common\/*")
list(FILTER SOURCE_FILES4 EXCLUDE REGEX "${PROJECT_SOURCE_DIR}\/libraries\/codal-nimble\/lib\/nimble\/\/transport\/dialog_cmac\/*")
list(FILTER SOURCE_FILES4 EXCLUDE REGEX "${PROJECT_SOURCE_DIR}\/libraries\/codal-nimble\/lib\/nimble\/\/transport\/emspi\/*")
list(FILTER SOURCE_FILES4 EXCLUDE REGEX "${PROJECT_SOURCE_DIR}\/libraries\/codal-nimble\/lib\/nimble\/\/transport\/nrf5340\/*")
list(FILTER SOURCE_FILES4 EXCLUDE REGEX "${PROJECT_SOURCE_DIR}\/libraries\/codal-nimble\/lib\/nimble\/\/transport\/socket\/*")
list(FILTER SOURCE_FILES4 EXCLUDE REGEX "${PROJECT_SOURCE_DIR}\/libraries\/codal-nimble\/lib\/nimble\/\/transport\/uart\/*")
list(FILTER SOURCE_FILES4 EXCLUDE REGEX "${PROJECT_SOURCE_DIR}\/libraries\/codal-nimble\/lib\/nimble\/\/transport\/usb\/*")
list(FILTER SOURCE_FILES4 EXCLUDE REGEX "${PROJECT_SOURCE_DIR}\/libraries\/codal-nimble\/lib\/nimble\/\/drivers\/dialog_cmac\/*")
list(FILTER SOURCE_FILES4 EXCLUDE REGEX "${PROJECT_SOURCE_DIR}\/libraries\/codal-nimble\/lib\/nimble\/\/drivers\/fem\/*")
list(FILTER SOURCE_FILES4 EXCLUDE REGEX "${PROJECT_SOURCE_DIR}\/libraries\/codal-nimble\/lib\/nimble\/\/drivers\/nrf51\/*")
list(FILTER SOURCE_FILES4 EXCLUDE REGEX "${PROJECT_SOURCE_DIR}\/libraries\/codal-nimble\/lib\/nimble\/\/drivers\/nrf5340\/*")

list(FILTER SOURCE_FILES4 EXCLUDE REGEX "${PROJECT_SOURCE_DIR}\/libraries\/codal-nimble\/lib\/nimble\/\/drivers\/nrf5x\/*")
list(FILTER SOURCE_FILES4 EXCLUDE REGEX "${PROJECT_SOURCE_DIR}\/libraries\/codal-nimble\/lib\/nimble\/\/drivers\/nrf52\/*")
list(FILTER SOURCE_FILES4 EXCLUDE REGEX "${PROJECT_SOURCE_DIR}\/libraries\/codal-nimble\/lib\/nimble\/\/drivers\/nrf5x\/src\/nrf53\/*")
# list(FILTER SOURCE_FILES4 EXCLUDE REGEX "${PROJECT_SOURCE_DIR}\/libraries\/codal-nimble\/lib\/nimble\/\/drivers\/native\/*")

RECURSIVE_FIND_FILE(SOURCE_FILES6 "${PROJECT_SOURCE_DIR}/libraries/codal-nimble/lib/ext/tinycrypt/src" "*.c")
list(APPEND SOURCE_FILES ${SOURCE_FILES1})
list(APPEND SOURCE_FILES ${SOURCE_FILES2})
list(APPEND SOURCE_FILES ${SOURCE_FILES3})
list(APPEND SOURCE_FILES ${SOURCE_FILES4})
list(APPEND SOURCE_FILES ${SOURCE_FILES5})
list(APPEND SOURCE_FILES ${SOURCE_FILES6})

# message("halo")
# message("${SOURCE_FILES}")
# message("---break---")
# message("${INCLUDE_DIRS}")
# add them
include_directories(${INCLUDE_DIRS})

add_library(codal-nimble
    ${SOURCE_FILES}
)

target_link_libraries(
    codal-nimble
    codal-core
    codal-microbit-v2
    codal-nrf52
)

target_include_directories(codal-nimble PUBLIC ${INCLUDE_DIRS})