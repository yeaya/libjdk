#include <com/sun/org/apache/xml/internal/security/keys/keyresolver/KeyResolverException.h>

#include <com/sun/org/apache/xml/internal/security/exceptions/XMLSecurityException.h>
#include <jcpp.h>

using $XMLSecurityException = ::com::sun::org::apache::xml::internal::security::exceptions::XMLSecurityException;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
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
							namespace keys {
								namespace keyresolver {

$CompoundAttribute _KeyResolverException_MethodAnnotations_init$5[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$CompoundAttribute _KeyResolverException_MethodAnnotations_init$7[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$FieldInfo _KeyResolverException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(KeyResolverException, serialVersionUID)},
	{}
};

$MethodInfo _KeyResolverException_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(KeyResolverException, init$, void)},
	{"<init>", "(Ljava/lang/Exception;)V", nullptr, $PUBLIC, $method(KeyResolverException, init$, void, $Exception*)},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(KeyResolverException, init$, void, $String*)},
	{"<init>", "(Ljava/lang/String;[Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(KeyResolverException, init$, void, $String*, $ObjectArray*)},
	{"<init>", "(Ljava/lang/Exception;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(KeyResolverException, init$, void, $Exception*, $String*)},
	{"<init>", "(Ljava/lang/String;Ljava/lang/Exception;)V", nullptr, $PUBLIC | $DEPRECATED, $method(KeyResolverException, init$, void, $String*, $Exception*), nullptr, nullptr, _KeyResolverException_MethodAnnotations_init$5},
	{"<init>", "(Ljava/lang/Exception;Ljava/lang/String;[Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(KeyResolverException, init$, void, $Exception*, $String*, $ObjectArray*)},
	{"<init>", "(Ljava/lang/String;[Ljava/lang/Object;Ljava/lang/Exception;)V", nullptr, $PUBLIC | $DEPRECATED, $method(KeyResolverException, init$, void, $String*, $ObjectArray*, $Exception*), nullptr, nullptr, _KeyResolverException_MethodAnnotations_init$7},
	{}
};

$ClassInfo _KeyResolverException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.security.keys.keyresolver.KeyResolverException",
	"com.sun.org.apache.xml.internal.security.exceptions.XMLSecurityException",
	nullptr,
	_KeyResolverException_FieldInfo_,
	_KeyResolverException_MethodInfo_
};

$Object* allocate$KeyResolverException($Class* clazz) {
	return $of($alloc(KeyResolverException));
}

void KeyResolverException::init$() {
	$XMLSecurityException::init$();
}

void KeyResolverException::init$($Exception* ex) {
	$XMLSecurityException::init$(ex);
}

void KeyResolverException::init$($String* msgID) {
	$XMLSecurityException::init$(msgID);
}

void KeyResolverException::init$($String* msgID, $ObjectArray* exArgs) {
	$XMLSecurityException::init$(msgID, exArgs);
}

void KeyResolverException::init$($Exception* originalException, $String* msgID) {
	$XMLSecurityException::init$(originalException, msgID);
}

void KeyResolverException::init$($String* msgID, $Exception* originalException) {
	KeyResolverException::init$(originalException, msgID);
}

void KeyResolverException::init$($Exception* originalException, $String* msgID, $ObjectArray* exArgs) {
	$XMLSecurityException::init$(originalException, msgID, exArgs);
}

void KeyResolverException::init$($String* msgID, $ObjectArray* exArgs, $Exception* originalException) {
	KeyResolverException::init$(originalException, msgID, exArgs);
}

KeyResolverException::KeyResolverException() {
}

KeyResolverException::KeyResolverException(const KeyResolverException& e) : $XMLSecurityException(e) {
}

void KeyResolverException::throw$() {
	throw *this;
}

$Class* KeyResolverException::load$($String* name, bool initialize) {
	$loadClass(KeyResolverException, name, initialize, &_KeyResolverException_ClassInfo_, allocate$KeyResolverException);
	return class$;
}

$Class* KeyResolverException::class$ = nullptr;

								} // keyresolver
							} // keys
						} // security
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com