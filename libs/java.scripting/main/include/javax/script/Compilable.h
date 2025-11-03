#ifndef _javax_script_Compilable_h_
#define _javax_script_Compilable_h_
//$ interface javax.script.Compilable
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace io {
		class Reader;
	}
}
namespace javax {
	namespace script {
		class CompiledScript;
	}
}

namespace javax {
	namespace script {

class $import Compilable : public ::java::lang::Object {
	$interface(Compilable, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual ::javax::script::CompiledScript* compile($String* script) {return nullptr;}
	virtual ::javax::script::CompiledScript* compile(::java::io::Reader* script) {return nullptr;}
};

	} // script
} // javax

#endif // _javax_script_Compilable_h_