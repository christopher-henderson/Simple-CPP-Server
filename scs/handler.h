#ifndef _SCS_HANDLER
#define _SCS_HANDLER

#include "scsdefs.h"
#include "dispatcher.h"

struct Handler {
    void operator() (Request &request, Response &response) {
        response = Dispatcher::handle(request);
    }

    void log(std::string dontcare){std::cout << dontcare << std::endl;}
};

#endif