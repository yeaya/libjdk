//$ module java.compiler
::java::lang::RequiresDirective _java$compiler_ModuleInfo_Requires_[] = {
    {"java.base", ""},
    {}
};

::java::lang::ExportsDirective _java$compiler_ModuleInfo_Exports_[] = {
    {"javax.annotation.processing", nullptr},
    {"javax.lang.model", nullptr},
    {"javax.lang.model.element", nullptr},
    {"javax.lang.model.type", nullptr},
    {"javax.lang.model.util", nullptr},
    {"javax.tools", nullptr},
    {}
};

::java::lang::OpensDirective _java$compiler_ModuleInfo_Opens_[] = {
    {}
};

::java::lang::UsesDirective _java$compiler_ModuleInfo_Uses_[] = {
    {"javax.tools.DocumentationTool"},
    {"javax.tools.JavaCompiler"},
    {}
};

::java::lang::ProvidesDirective _java$compiler_ModuleInfo_Provides_[] = {
    {}
};

::java::lang::ModuleInfo _java$compiler_ModuleInfo_ = {
    "java.compiler",
    false,
    _java$compiler_ModuleInfo_Requires_,
    _java$compiler_ModuleInfo_Exports_,
    _java$compiler_ModuleInfo_Opens_,
    _java$compiler_ModuleInfo_Uses_,
    _java$compiler_ModuleInfo_Provides_
};