cmake_minimum_required(VERSION 3.16.0)
include($ENV{IDF_PATH}/tools/cmake/project.cmake)

list(APPEND EXTRA_COMPONENT_DIRS 
                        "$ENV{IDF_PATH}/examples/common_components/protocol_examples_common"
                        "${CMAKE_CURRENT_LIST_DIR}/components/esp-aws-iot/libraries/Jobs-for-AWS-IoT-embedded-sdk"
                        "${CMAKE_CURRENT_LIST_DIR}/components/esp-aws-iot/libraries/Fleet-Provisioning-for-AWS-IoT-embedded-sdk"
                        "${CMAKE_CURRENT_LIST_DIR}/components/esp-aws-iot/libraries/Device-Shadow-for-AWS-IoT-embedded-sdk"
                        "${CMAKE_CURRENT_LIST_DIR}/components/esp-aws-iot/libraries/Device-Defender-for-AWS-IoT-embedded-sdk"
                        "${CMAKE_CURRENT_LIST_DIR}/components/esp-aws-iot/libraries/common/posix_compat"
                        "${CMAKE_CURRENT_LIST_DIR}/components/esp-aws-iot/libraries/backoffAlgorithm"
                        # "${CMAKE_CURRENT_LIST_DIR}/components/esp-aws-iot/libraries/aws-iot-core-mqtt-file-streams-embedded-c"
                        "${CMAKE_CURRENT_LIST_DIR}/components/esp-aws-iot/libraries/corePKCS11"
                        "${CMAKE_CURRENT_LIST_DIR}/components/esp-aws-iot/libraries/coreMQTT-Agent"
                        "${CMAKE_CURRENT_LIST_DIR}/components/esp-aws-iot/libraries/coreMQTT"
                        "${CMAKE_CURRENT_LIST_DIR}/components/esp-aws-iot/libraries/coreJSON"
                        "${CMAKE_CURRENT_LIST_DIR}/components/esp-aws-iot/libraries/coreHTTP"
)

project(test)

# idf_build_set_property(COMPILE_OPTIONS "-Wno-error" APPEND)
