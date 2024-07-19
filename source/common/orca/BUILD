load("//bazel:envoy_build_system.bzl", "envoy_package")
load(
    "//third_party/envoy/src/bazel:envoy_build_system.bzl",
    "envoy_cc_library",
    "envoy_package",
)

licenses(["notice"])  # Apache 2

envoy_package()

envoy_cc_library(
    name = "orca_parser",
    srcs = ["orca_parser.cc"],
    hdrs = ["orca_parser.h"],
    compatible_with = ["//buildenv/target:gce"],
    external_deps = [
        "abseil_status",
        "abseil_strings",
        "abseil_statusor",
        "fmtlib",
    ],
    visibility = ["//third_party/envoy:envoy_visible"],
    deps = [
        "//third_party/envoy/src/envoy/http:header_map_interface",
        "//third_party/envoy/src/envoy/json:json_object_interface",
        "//third_party/envoy/src/source/common/common:base64_lib",
        "//third_party/envoy/src/source/common/http:header_utility_lib",
        "//third_party/envoy/src/source/common/json:json_loader_lib",
        "//third_party/envoy/src/source/common/protobuf:utility_lib_header",
        "//third_party/udpa/xds/data/orca/v3:pkg_cc_proto",
    ],
)
