# ESP32 base project

## Additional component configuration

Install the esp-aws-iot component.

```
mkdir components
git clone -b "release/202406.01-LTS" --recursive https://github.com/espressif/esp-aws-iot components/esp-aws-iot
```

## Issues and fixes

### Mbedtls configuration under sdkconfig

```
CONFIG_MBEDTLS_THREADING_C=y
CONFIG_MBEDTLS_THREADING_ALT=n
CONFIG_MBEDTLS_THREADING_PTHREAD=y
```

### Component components/esp-aws-iot/libraries/aws-iot-core-mqtt-file-streams-embedded-c requires [CBOR](https://intel.github.io/tinycbor/current/)(see [issue](https://github.com/espressif/esp-aws-iot/issues/211))

Alternative is to only use json stream instead of CBOR. The [documentation](https://github.com/aws/aws-iot-core-mqtt-file-streams-embedded-c/blob/main/README.md) states so.

Temporary fix is to forego CBOR. Apply patch under: 

```
cd components/esp-aws-iot/libraries/aws-iot-core-mqtt-file-streams-embedded-c/aws-iot-core-mqtt-file-streams-embedded-c
git apply ../../../../../patch/disable-cbor-aws-iot-core-mqtt-file-streams-embedded-c.patch
```