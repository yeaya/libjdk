//$ module java.sql
::java::lang::RequiresDirective _java$sql_ModuleInfo_Requires_[] = {
    {"java.base", ""},
    {"java.logging", "TRANSITIVE"},
    {"java.transaction.xa", "TRANSITIVE"},
    {"java.xml", "TRANSITIVE"},
    {}
};

::java::lang::ExportsDirective _java$sql_ModuleInfo_Exports_[] = {
    {"java.sql", nullptr},
    {"javax.sql", nullptr},
    {}
};

::java::lang::OpensDirective _java$sql_ModuleInfo_Opens_[] = {
    {}
};

::java::lang::UsesDirective _java$sql_ModuleInfo_Uses_[] = {
    {"java.sql.Driver"},
    {}
};

::java::lang::ProvidesDirective _java$sql_ModuleInfo_Provides_[] = {
    {}
};

::java::lang::ModuleInfo _java$sql_ModuleInfo_ = {
    "java.sql",
    false,
    _java$sql_ModuleInfo_Requires_,
    _java$sql_ModuleInfo_Exports_,
    _java$sql_ModuleInfo_Opens_,
    _java$sql_ModuleInfo_Uses_,
    _java$sql_ModuleInfo_Provides_
};