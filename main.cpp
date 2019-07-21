#include "cpp-httplib/httplib.h"
#include "sqlite_orm/include/sqlite_orm/sqlite_orm.h"
#include <fstream>
#include <sstream>
#include <string>
#include <array>

const std::string load_static(const std::string& path) {

    std::ifstream static_file(path.c_str(), std::ios::in);

    std::stringstream stream;

    stream << static_file.rdbuf();
    static_file.close();

    return stream.str();
}

int main() {

    httplib::Server svr;

    std::array<std::string, 3> routes = {"/", "/about", "/contact"};

    const std::string html = load_static("static/index.html"); 

    const std::string js = load_static("static/index.js"); 

    for(auto&& route : routes)
        svr.Get(route.c_str(), [&](const httplib::Request& req, httplib::Response& res){
            res.set_content(html, "text/html");
        });

    svr.Get("/index.js", [&](const httplib::Request& req, httplib::Response& res){
        res.set_content(js, "text/javascript");
    });

    svr.listen("0.0.0.0", 8080);
}