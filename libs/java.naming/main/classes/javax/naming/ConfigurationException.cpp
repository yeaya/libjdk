#include <javax/naming/ConfigurationException.h>
#include <javax/naming/NamingException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamingException = ::javax::naming::NamingException;

namespace javax {
	namespace naming {

void ConfigurationException::init$($String* explanation) {
	$NamingException::init$(explanation);
}

void ConfigurationException::init$() {
	$NamingException::init$();
}

ConfigurationException::ConfigurationException() {
}

ConfigurationException::ConfigurationException(const ConfigurationException& e) : $NamingException(e) {
}

void ConfigurationException::throw$() {
	throw *this;
}

$Class* ConfigurationException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ConfigurationException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(ConfigurationException, init$, void, $String*)},
		{"<init>", "()V", nullptr, $PUBLIC, $method(ConfigurationException, init$, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.naming.ConfigurationException",
		"javax.naming.NamingException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(ConfigurationException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ConfigurationException);
	});
	return class$;
}

$Class* ConfigurationException::class$ = nullptr;

	} // naming
} // javax