#include <com/sun/org/apache/xml/internal/security/c14n/InvalidCanonicalizerException.h>

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
							namespace c14n {

$CompoundAttribute _InvalidCanonicalizerException_MethodAnnotations_init$4[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$CompoundAttribute _InvalidCanonicalizerException_MethodAnnotations_init$6[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$FieldInfo _InvalidCanonicalizerException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(InvalidCanonicalizerException, serialVersionUID)},
	{}
};

$MethodInfo _InvalidCanonicalizerException_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(InvalidCanonicalizerException, init$, void)},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(InvalidCanonicalizerException, init$, void, $String*)},
	{"<init>", "(Ljava/lang/String;[Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(InvalidCanonicalizerException, init$, void, $String*, $ObjectArray*)},
	{"<init>", "(Ljava/lang/Exception;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(InvalidCanonicalizerException, init$, void, $Exception*, $String*)},
	{"<init>", "(Ljava/lang/String;Ljava/lang/Exception;)V", nullptr, $PUBLIC | $DEPRECATED, $method(InvalidCanonicalizerException, init$, void, $String*, $Exception*), nullptr, nullptr, _InvalidCanonicalizerException_MethodAnnotations_init$4},
	{"<init>", "(Ljava/lang/Exception;Ljava/lang/String;[Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(InvalidCanonicalizerException, init$, void, $Exception*, $String*, $ObjectArray*)},
	{"<init>", "(Ljava/lang/String;[Ljava/lang/Object;Ljava/lang/Exception;)V", nullptr, $PUBLIC | $DEPRECATED, $method(InvalidCanonicalizerException, init$, void, $String*, $ObjectArray*, $Exception*), nullptr, nullptr, _InvalidCanonicalizerException_MethodAnnotations_init$6},
	{}
};

$ClassInfo _InvalidCanonicalizerException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.security.c14n.InvalidCanonicalizerException",
	"com.sun.org.apache.xml.internal.security.exceptions.XMLSecurityException",
	nullptr,
	_InvalidCanonicalizerException_FieldInfo_,
	_InvalidCanonicalizerException_MethodInfo_
};

$Object* allocate$InvalidCanonicalizerException($Class* clazz) {
	return $of($alloc(InvalidCanonicalizerException));
}

void InvalidCanonicalizerException::init$() {
	$XMLSecurityException::init$();
}

void InvalidCanonicalizerException::init$($String* msgID) {
	$XMLSecurityException::init$(msgID);
}

void InvalidCanonicalizerException::init$($String* msgID, $ObjectArray* exArgs) {
	$XMLSecurityException::init$(msgID, exArgs);
}

void InvalidCanonicalizerException::init$($Exception* originalException, $String* msgID) {
	$XMLSecurityException::init$(originalException, msgID);
}

void InvalidCanonicalizerException::init$($String* msgID, $Exception* originalException) {
	InvalidCanonicalizerException::init$(originalException, msgID);
}

void InvalidCanonicalizerException::init$($Exception* originalException, $String* msgID, $ObjectArray* exArgs) {
	$XMLSecurityException::init$(originalException, msgID, exArgs);
}

void InvalidCanonicalizerException::init$($String* msgID, $ObjectArray* exArgs, $Exception* originalException) {
	InvalidCanonicalizerException::init$(originalException, msgID, exArgs);
}

InvalidCanonicalizerException::InvalidCanonicalizerException() {
}

InvalidCanonicalizerException::InvalidCanonicalizerException(const InvalidCanonicalizerException& e) : $XMLSecurityException(e) {
}

void InvalidCanonicalizerException::throw$() {
	throw *this;
}

$Class* InvalidCanonicalizerException::load$($String* name, bool initialize) {
	$loadClass(InvalidCanonicalizerException, name, initialize, &_InvalidCanonicalizerException_ClassInfo_, allocate$InvalidCanonicalizerException);
	return class$;
}

$Class* InvalidCanonicalizerException::class$ = nullptr;

							} // c14n
						} // security
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com