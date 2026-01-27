#include <javax/xml/parsers/ParserConfigurationException.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace xml {
		namespace parsers {

$FieldInfo _ParserConfigurationException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ParserConfigurationException, serialVersionUID)},
	{}
};

$MethodInfo _ParserConfigurationException_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(ParserConfigurationException, init$, void)},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(ParserConfigurationException, init$, void, $String*)},
	{}
};

$ClassInfo _ParserConfigurationException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.xml.parsers.ParserConfigurationException",
	"java.lang.Exception",
	nullptr,
	_ParserConfigurationException_FieldInfo_,
	_ParserConfigurationException_MethodInfo_
};

$Object* allocate$ParserConfigurationException($Class* clazz) {
	return $of($alloc(ParserConfigurationException));
}

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
	$loadClass(ParserConfigurationException, name, initialize, &_ParserConfigurationException_ClassInfo_, allocate$ParserConfigurationException);
	return class$;
}

$Class* ParserConfigurationException::class$ = nullptr;

		} // parsers
	} // xml
} // javax