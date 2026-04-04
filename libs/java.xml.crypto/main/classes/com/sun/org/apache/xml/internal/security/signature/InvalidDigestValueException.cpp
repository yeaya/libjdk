#include <com/sun/org/apache/xml/internal/security/signature/InvalidDigestValueException.h>
#include <com/sun/org/apache/xml/internal/security/signature/XMLSignatureException.h>
#include <jcpp.h>

using $XMLSignatureException = ::com::sun::org::apache::xml::internal::security::signature::XMLSignatureException;
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
							namespace signature {

void InvalidDigestValueException::init$() {
	$XMLSignatureException::init$();
}

void InvalidDigestValueException::init$($String* msgID) {
	$XMLSignatureException::init$(msgID);
}

void InvalidDigestValueException::init$($String* msgID, $ObjectArray* exArgs) {
	$XMLSignatureException::init$(msgID, exArgs);
}

void InvalidDigestValueException::init$($Exception* originalException, $String* msgID) {
	$XMLSignatureException::init$(originalException, msgID);
}

void InvalidDigestValueException::init$($String* msgID, $Exception* originalException) {
	InvalidDigestValueException::init$(originalException, msgID);
}

void InvalidDigestValueException::init$($Exception* originalException, $String* msgID, $ObjectArray* exArgs) {
	$XMLSignatureException::init$(originalException, msgID, exArgs);
}

void InvalidDigestValueException::init$($String* msgID, $ObjectArray* exArgs, $Exception* originalException) {
	InvalidDigestValueException::init$(originalException, msgID, exArgs);
}

InvalidDigestValueException::InvalidDigestValueException() {
}

InvalidDigestValueException::InvalidDigestValueException(const InvalidDigestValueException& e) : $XMLSignatureException(e) {
}

void InvalidDigestValueException::throw$() {
	throw *this;
}

$Class* InvalidDigestValueException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(InvalidDigestValueException, serialVersionUID)},
		{}
	};
	$CompoundAttribute init$methodAnnotations$$$4[] = {
		{"Ljava/lang/Deprecated;", nullptr},
		{}
	};
	$CompoundAttribute init$methodAnnotations$$$6[] = {
		{"Ljava/lang/Deprecated;", nullptr},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(InvalidDigestValueException, init$, void)},
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(InvalidDigestValueException, init$, void, $String*)},
		{"<init>", "(Ljava/lang/String;[Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(InvalidDigestValueException, init$, void, $String*, $ObjectArray*)},
		{"<init>", "(Ljava/lang/Exception;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(InvalidDigestValueException, init$, void, $Exception*, $String*)},
		{"<init>", "(Ljava/lang/String;Ljava/lang/Exception;)V", nullptr, $PUBLIC | $DEPRECATED, $method(InvalidDigestValueException, init$, void, $String*, $Exception*), nullptr, nullptr, init$methodAnnotations$$$4},
		{"<init>", "(Ljava/lang/Exception;Ljava/lang/String;[Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(InvalidDigestValueException, init$, void, $Exception*, $String*, $ObjectArray*)},
		{"<init>", "(Ljava/lang/String;[Ljava/lang/Object;Ljava/lang/Exception;)V", nullptr, $PUBLIC | $DEPRECATED, $method(InvalidDigestValueException, init$, void, $String*, $ObjectArray*, $Exception*), nullptr, nullptr, init$methodAnnotations$$$6},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.org.apache.xml.internal.security.signature.InvalidDigestValueException",
		"com.sun.org.apache.xml.internal.security.signature.XMLSignatureException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(InvalidDigestValueException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(InvalidDigestValueException);
	});
	return class$;
}

$Class* InvalidDigestValueException::class$ = nullptr;

							} // signature
						} // security
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com