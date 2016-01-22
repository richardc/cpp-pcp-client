#ifndef CPP_PCP_CLIENT_SRC_CONNECTOR_CLIENT_METADATA_H_
#define CPP_PCP_CLIENT_SRC_CONNECTOR_CLIENT_METADATA_H_

#include <string>

namespace PCPClient {

void validatePrivateKeyCertPair(const std::string& key, const std::string& crt);

std::string getCommonNameFromCert(const std::string& crt);

class ClientMetadata {
  public:
    std::string ca;
    std::string crt;
    std::string key;
    std::string client_type;
    std::string common_name;
    std::string uri;
    long connection_timeout;

    /// Throws a connection_config_error in case: the client
    /// certificate file does not exist or is invalid; it fails to
    /// retrieve the client identity from the file; the client
    /// certificate and private key are not paired
    ClientMetadata(const std::string& _client_type,
                   const std::string& _ca,
                   const std::string& _crt,
                   const std::string& _key,
                   const long& _connection_timeout);
};

}  // namespace PCPClient

#endif  // CPP_PCP_CLIENT_SRC_CONNECTOR_CLIENT_METADATA_H_
