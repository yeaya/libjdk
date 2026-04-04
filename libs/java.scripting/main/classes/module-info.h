//$ module java.scripting
::java::lang::RequiresDirective _java$scripting_ModuleInfo_Requires_[] = {
    {"java.base", ""},
    {}
};

::java::lang::ExportsDirective _java$scripting_ModuleInfo_Exports_[] = {
    {"javax.script", nullptr},
    {}
};

::java::lang::OpensDirective _java$scripting_ModuleInfo_Opens_[] = {
    {}
};

::java::lang::UsesDirective _java$scripting_ModuleInfo_Uses_[] = {
    {"javax.script.ScriptEngineFactory"},
    {}
};

::java::lang::ProvidesDirective _java$scripting_ModuleInfo_Provides_[] = {
    {}
};

::java::lang::ModuleInfo _java$scripting_ModuleInfo_ = {
    "java.scripting",
    false,
    _java$scripting_ModuleInfo_Requires_,
    _java$scripting_ModuleInfo_Exports_,
    _java$scripting_ModuleInfo_Opens_,
    _java$scripting_ModuleInfo_Uses_,
    _java$scripting_ModuleInfo_Provides_
};