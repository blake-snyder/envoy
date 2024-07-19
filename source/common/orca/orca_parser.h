#pragma once

#ifndef NET_ENVOY_SOURCE_COMMON_ORCA_ORCA_PARSER_H_
#define NET_ENVOY_SOURCE_COMMON_ORCA_ORCA_PARSER_H_

#include <vector>

#include "third_party/absl/status/status.h"
#include "third_party/absl/status/statusor.h"
#include "third_party/absl/strings/string_view.h"
#include "third_party/envoy/src/envoy/http/header_map.h"
#include "third_party/udpa/xds/data/orca/v3/orca_load_report.proto.h"

namespace Envoy {
namespace Orca {

static constexpr char kEndpointLoadMetricsHeader[] = "x-endpoint-load-metrics";
static constexpr char kEndpointLoadMetricsHeaderBin[] = "x-endpoint-load-metrics-bin";
static constexpr char kEndpointLoadMetricsHeaderJson[] = "x-endpoint-load-metrics-json";

// Parses ORCA load metrics from a header map into an OrcaLoadReport proto.
// Supports native HTTP, JSON and serialized binary formats.
absl::StatusOr<xds::data::orca::v3::OrcaLoadReport>
parseOrcaLoadReportHeaders(const Envoy::Http::HeaderMap& headers);
} // namespace Orca
} // namespace Envoy

#endif // NET_ENVOY_SOURCE_COMMON_ORCA_ORCA_PARSER_H_
