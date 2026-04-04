//$ module jdk.jartool
::java::lang::RequiresDirective _jdk$jartool_ModuleInfo_Requires_[] = {
    {"java.base", ""},
    {}
};

::java::lang::ExportsDirective _jdk$jartool_ModuleInfo_Exports_[] = {
    {"com.sun.jarsigner", nullptr},
    {"jdk.security.jarsigner", nullptr},
    {}
};

::java::lang::OpensDirective _jdk$jartool_ModuleInfo_Opens_[] = {
    {}
};

::java::lang::UsesDirective _jdk$jartool_ModuleInfo_Uses_[] = {
    {}
};

::java::lang::ProvidesDirective _jdk$jartool_ModuleInfo_Provides_[] = {
    {"java.util.spi.ToolProvider", "sun.tools.jar.JarToolProvider"},
    {}
};

::java::lang::ModuleInfo _jdk$jartool_ModuleInfo_ = {
    "jdk.jartool",
    false,
    _jdk$jartool_ModuleInfo_Requires_,
    _jdk$jartool_ModuleInfo_Exports_,
    _jdk$jartool_ModuleInfo_Opens_,
    _jdk$jartool_ModuleInfo_Uses_,
    _jdk$jartool_ModuleInfo_Provides_
};