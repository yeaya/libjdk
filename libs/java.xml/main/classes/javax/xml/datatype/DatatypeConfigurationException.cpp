#include <javax/xml/datatype/DatatypeConfigurationException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace xml {
		namespace datatype {

void DatatypeConfigurationException::init$() {
	$Exception::init$();
}

void DatatypeConfigurationException::init$($String* message) {
	$Exception::init$(message);
}

void DatatypeConfigurationException::init$($String* message, $Throwable* cause) {
	$Exception::init$(message, cause);
}

void DatatypeConfigurationException::init$($Throwable* cause) {
	$Exception::init$(cause);
}

DatatypeConfigurationException::DatatypeConfigurationException() {
}

DatatypeConfigurationException::DatatypeConfigurationException(const DatatypeConfigurationException& e) : $Exception(e) {
}

void DatatypeConfigurationException::throw$() {
	throw *this;
}

$Class* DatatypeConfigurationException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(DatatypeConfigurationException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(DatatypeConfigurationException, init$, void)},
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(DatatypeConfigurationException, init$, void, $String*)},
		{"<init>", "(Ljava/lang/String;Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(DatatypeConfigurationException, init$, void, $String*, $Throwable*)},
		{"<init>", "(Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(DatatypeConfigurationException, init$, void, $Throwable*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.xml.datatype.DatatypeConfigurationException",
		"java.lang.Exception",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(DatatypeConfigurationException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DatatypeConfigurationException);
	});
	return class$;
}

$Class* DatatypeConfigurationException::class$ = nullptr;

		} // datatype
	} // xml
} // javax