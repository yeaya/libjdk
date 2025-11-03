#include <com/sun/org/apache/xml/internal/security/parser/XMLParserException.h>

#include <com/sun/org/apache/xml/internal/security/exceptions/XMLSecurityException.h>
#include <jcpp.h>

using $XMLSecurityException = ::com::sun::org::apache::xml::internal::security::exceptions::XMLSecurityException;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace security {
							namespace parser {

$FieldInfo _XMLParserException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(XMLParserException, serialVersionUID)},
	{}
};

$MethodInfo _XMLParserException_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(XMLParserException::*)()>(&XMLParserException::init$))},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(XMLParserException::*)($String*)>(&XMLParserException::init$))},
	{"<init>", "(Ljava/lang/String;[Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(static_cast<void(XMLParserException::*)($String*,$ObjectArray*)>(&XMLParserException::init$))},
	{"<init>", "(Ljava/lang/Exception;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(XMLParserException::*)($Exception*,$String*)>(&XMLParserException::init$))},
	{"<init>", "(Ljava/lang/Exception;Ljava/lang/String;[Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(static_cast<void(XMLParserException::*)($Exception*,$String*,$ObjectArray*)>(&XMLParserException::init$))},
	{}
};

$ClassInfo _XMLParserException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.security.parser.XMLParserException",
	"com.sun.org.apache.xml.internal.security.exceptions.XMLSecurityException",
	nullptr,
	_XMLParserException_FieldInfo_,
	_XMLParserException_MethodInfo_
};

$Object* allocate$XMLParserException($Class* clazz) {
	return $of($alloc(XMLParserException));
}

void XMLParserException::init$() {
	$XMLSecurityException::init$();
}

void XMLParserException::init$($String* msgID) {
	$XMLSecurityException::init$(msgID);
}

void XMLParserException::init$($String* msgID, $ObjectArray* exArgs) {
	$XMLSecurityException::init$(msgID, exArgs);
}

void XMLParserException::init$($Exception* originalException, $String* msgID) {
	$XMLSecurityException::init$(originalException, msgID);
}

void XMLParserException::init$($Exception* originalException, $String* msgID, $ObjectArray* exArgs) {
	$XMLSecurityException::init$(originalException, msgID, exArgs);
}

XMLParserException::XMLParserException() {
}

XMLParserException::XMLParserException(const XMLParserException& e) : $XMLSecurityException(e) {
}

void XMLParserException::throw$() {
	throw *this;
}

$Class* XMLParserException::load$($String* name, bool initialize) {
	$loadClass(XMLParserException, name, initialize, &_XMLParserException_ClassInfo_, allocate$XMLParserException);
	return class$;
}

$Class* XMLParserException::class$ = nullptr;

							} // parser
						} // security
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com