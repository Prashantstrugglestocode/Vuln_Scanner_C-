#pragma once
#include <string>


struct HttpResponse {
    long status_code;
    std::string body;

}

class HttpClient {
public:
        HttpClient(long timeout_secs = 5);
        HttpResponse get(std::string& url);
        HttpResponse post(std::string& url, const std::string& data);
private:
     long timeout_;
}