#ifndef CPP_PCP_CLIENT_SRC_PROTOCOL_SCHEMAS_H_
#define CPP_PCP_CLIENT_SRC_PROTOCOL_SCHEMAS_H_

#include <cpp-pcp-client/validator/schema.hpp>

namespace PCPClient {
namespace Protocol {

//
// envelope
//

static const std::string ENVELOPE_SCHEMA_NAME { "envelope_schema" };
Schema EnvelopeSchema();

//
// data
//

// associate session
static const std::string ASSOCIATE_REQ_TYPE  { "http://puppetlabs.com/associate_request" };
static const std::string ASSOCIATE_RESP_TYPE { "http://puppetlabs.com/associate_response" };
// NB: associate requests don't have a data chunk
Schema AssociateResponseSchema();

// inventory
static const std::string INVENTORY_REQ_TYPE  { "http://puppetlabs.com/inventory_request" };
static const std::string INVENTORY_RESP_TYPE { "http://puppetlabs.com/inventory_response" };
Schema InventoryRequestSchema();
Schema InventoryResponseSchema();

// error
static const std::string ERROR_MSG_TYPE { "http://puppetlabs.com/error_message" };
Schema ErrorMessageSchema();

// destination report
static const std::string DESTINATION_REPORT_TYPE { "http://puppetlabs.com/destination_report" };
Schema DestinationReportSchema();

// ttl expired
static const std::string TTL_EXPIRED_TYPE { "http://puppetlabs.com/ttl_expired" };
Schema TTLExpiredSchema();

// version error
static const std::string VERSION_ERROR_TYPE { "http://puppetlabs.com/version_error" };
Schema VersionErrorSchema();

//
// debug
//

static const std::string DEBUG_SCHEMA_NAME { "debug_schema" };
Schema DebugSchema();
// TODO(ale): remove this once we implement array item constraints
static const std::string DEBUG_ITEM_SCHEMA_NAME { "debug_item_schema" };
Schema DebugItemSchema();

}  // namespace Protocol
}  // namespace PCPClient

#endif  // CPP_PCP_CLIENT_SRC_PROTOCOL_SCHEMAS_H_
