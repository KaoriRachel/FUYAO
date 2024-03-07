#ifndef MEDIA_MICROSERVICES_UTILS_H
#define MEDIA_MICROSERVICES_UTILS_H

#include <string>
#include <fstream>
#include <iostream>
#include <nlohmann/json.hpp>
#include <utility>

namespace Finra {
    using json = nlohmann::json;

    inline std::string GetEnvVariable(std::string_view name,
                                      std::string default_value = "") {
        char *value = getenv(std::string(name).c_str());
        return value != nullptr ? value : std::move(default_value);
    }

    PassingMethod ChooseMessagePassingMethod() {
        auto method = GetEnvVariable("MessagePathingMethod", "IPC");
        if (method == "DRC_OVER_IPC") {
            return PassingMethod::DRC_OVER_IPC;
        } else if (method == "DRC_OVER_Fabric") {
            return PassingMethod::DRC_OVER_Fabric;
        } else if (method == "Fabric") {
            return PassingMethod::Fabric;
        } else {
            return PassingMethod::IPC;
        }
    }
} //namespace media_service

#endif //MEDIA_MICROSERVICES_UTILS_H
