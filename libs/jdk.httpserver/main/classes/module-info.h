//$ module jdk.httpserver
::java::lang::RequiresDirective _jdk$httpserver_ModuleInfo_Requires_[] = {
    {"java.base", ""},
    {}
};

::java::lang::ExportsDirective _jdk$httpserver_ModuleInfo_Exports_[] = {
    {"com.sun.net.httpserver", nullptr},
    {"com.sun.net.httpserver.spi", nullptr},
    {}
};

::java::lang::OpensDirective _jdk$httpserver_ModuleInfo_Opens_[] = {
    {}
};

::java::lang::UsesDirective _jdk$httpserver_ModuleInfo_Uses_[] = {
    {"com.sun.net.httpserver.spi.HttpServerProvider"},
    {}
};

::java::lang::ProvidesDirective _jdk$httpserver_ModuleInfo_Provides_[] = {
    {}
};

::java::lang::ModuleInfo _jdk$httpserver_ModuleInfo_ = {
    "jdk.httpserver",
    false,
    _jdk$httpserver_ModuleInfo_Requires_,
    _jdk$httpserver_ModuleInfo_Exports_,
    _jdk$httpserver_ModuleInfo_Opens_,
    _jdk$httpserver_ModuleInfo_Uses_,
    _jdk$httpserver_ModuleInfo_Provides_
};