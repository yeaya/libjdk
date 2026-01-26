#include <com/sun/org/apache/xml/internal/security/c14n/CanonicalizationException.h>

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

$CompoundAttribute _CanonicalizationException_MethodAnnotations_init$5[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$CompoundAttribute _CanonicalizationException_MethodAnnotations_init$7[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$FieldInfo _CanonicalizationException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(CanonicalizationException, serialVersionUID)},
	{}
};

$MethodInfo _CanonicalizationException_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CanonicalizationException, init$, void)},
	{"<init>", "(Ljava/lang/Exception;)V", nullptr, $PUBLIC, $method(CanonicalizationException, init$, void, $Exception*)},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(CanonicalizationException, init$, void, $String*)},
	{"<init>", "(Ljava/lang/String;[Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(CanonicalizationException, init$, void, $String*, $ObjectArray*)},
	{"<init>", "(Ljava/lang/Exception;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(CanonicalizationException, init$, void, $Exception*, $String*)},
	{"<init>", "(Ljava/lang/String;Ljava/lang/Exception;)V", nullptr, $PUBLIC | $DEPRECATED, $method(CanonicalizationException, init$, void, $String*, $Exception*), nullptr, nullptr, _CanonicalizationException_MethodAnnotations_init$5},
	{"<init>", "(Ljava/lang/Exception;Ljava/lang/String;[Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(CanonicalizationException, init$, void, $Exception*, $String*, $ObjectArray*)},
	{"<init>", "(Ljava/lang/String;[Ljava/lang/Object;Ljava/lang/Exception;)V", nullptr, $PUBLIC | $DEPRECATED, $method(CanonicalizationException, init$, void, $String*, $ObjectArray*, $Exception*), nullptr, nullptr, _CanonicalizationException_MethodAnnotations_init$7},
	{}
};

$ClassInfo _CanonicalizationException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.security.c14n.CanonicalizationException",
	"com.sun.org.apache.xml.internal.security.exceptions.XMLSecurityException",
	nullptr,
	_CanonicalizationException_FieldInfo_,
	_CanonicalizationException_MethodInfo_
};

$Object* allocate$CanonicalizationException($Class* clazz) {
	return $of($alloc(CanonicalizationException));
}

void CanonicalizationException::init$() {
	$XMLSecurityException::init$();
}

void CanonicalizationException::init$($Exception* ex) {
	$XMLSecurityException::init$(ex);
}

void CanonicalizationException::init$($String* msgID) {
	$XMLSecurityException::init$(msgID);
}

void CanonicalizationException::init$($String* msgID, $ObjectArray* exArgs) {
	$XMLSecurityException::init$(msgID, exArgs);
}

void CanonicalizationException::init$($Exception* originalException, $String* msgID) {
	$XMLSecurityException::init$(originalException, msgID);
}

void CanonicalizationException::init$($String* msgID, $Exception* originalException) {
	CanonicalizationException::init$(originalException, msgID);
}

void CanonicalizationException::init$($Exception* originalException, $String* msgID, $ObjectArray* exArgs) {
	$XMLSecurityException::init$(originalException, msgID, exArgs);
}

void CanonicalizationException::init$($String* msgID, $ObjectArray* exArgs, $Exception* originalException) {
	CanonicalizationException::init$(originalException, msgID, exArgs);
}

CanonicalizationException::CanonicalizationException() {
}

CanonicalizationException::CanonicalizationException(const CanonicalizationException& e) : $XMLSecurityException(e) {
}

void CanonicalizationException::throw$() {
	throw *this;
}

$Class* CanonicalizationException::load$($String* name, bool initialize) {
	$loadClass(CanonicalizationException, name, initialize, &_CanonicalizationException_ClassInfo_, allocate$CanonicalizationException);
	return class$;
}

$Class* CanonicalizationException::class$ = nullptr;

							} // c14n
						} // security
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com