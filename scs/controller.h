#ifndef _SCS_CONTROLLER
#define _SCS_CONTROLLER

#include <jsoncpp/json/json.h>

#include "scsdefs.h"

class Controller {
 public:
    virtual Json::Value* post(Request& request) {return NULL;};
    virtual Json::Value* patch(Request& request) {return NULL;};
    virtual Json::Value* put(Request& request) {return NULL;};
    virtual Json::Value* get(Request& request) {return NULL;};
    virtual Json::Value* _delete(Request& request) {return NULL;};
    virtual std::vector<std::string> getUrls() =0;
    virtual std::vector<std::string> getMethods() =0;
 private:
};

#endif // _SCS_CONTROLLER
