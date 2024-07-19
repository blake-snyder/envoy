load("//bazel:envoy_build_system.bzl", "envoy_package")
load(
    "//third_party/envoy/src/bazel:envoy_build_system.bzl",
    "envoy_cc_test",
    "envoy_package",
)

licenses(["notice"])  # Apache 2

envoy_package()

envoy_cc_test(
    name = "orca_parser_test",
    srcs = ["orca_parser_test.cc"],
    compatible_with = ["//buildenv/target:gce"],
    external_deps = [
        "abseil_status",
        "abseil_strings",
        "fmtlib",
    ],
    deps = [
        "//third_party/envoy/src/source/common/common:base64_lib",
        "//third_party/envoy/src/source/common/orca:orca_parser",
        "//third_party/envoy/src/test/test_common:status_utility_lib",
        "//third_party/envoy/src/test/test_common:utility_lib",
        "//third_party/udpa/xds/data/orca/v3:pkg_cc_proto",
    ],
)
