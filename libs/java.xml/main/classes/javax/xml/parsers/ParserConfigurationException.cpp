#include <javax/xml/parsers/ParserConfigurationException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace xml {
		namespace parsers {

void ParserConfigurationException::init$() {
	$Exception::init$();
}

void ParserConfigurationException::init$($String* msg) {
	$Exception::init$(msg);
}

ParserConfigurationException::ParserConfigurationException() {
}

ParserConfigurationException::ParserConfigurationException(const ParserConfigurationException& e) : $Exception(e) {
}

void ParserConfigurationException::throw$() {
	throw *this;
}

$Class* ParserConfigurationException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ParserConfigurationException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ParserConfigurationException, init$, void)},
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(ParserConfigurationException, init$, void, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.xml.parsers.ParserConfigurationException",
		"java.lang.Exception",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(ParserConfigurationException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ParserConfigurationException);
	});
	return class$;
}

$Class* ParserConfigurationException::class$ = nullptr;

		} // parsers
	} // xml
} // javax