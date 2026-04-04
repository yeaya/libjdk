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
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(InvalidCanonicalizerException, serialVersionUID)},
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
		{"<init>", "()V", nullptr, $PUBLIC, $method(InvalidCanonicalizerException, init$, void)},
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(InvalidCanonicalizerException, init$, void, $String*)},
		{"<init>", "(Ljava/lang/String;[Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(InvalidCanonicalizerException, init$, void, $String*, $ObjectArray*)},
		{"<init>", "(Ljava/lang/Exception;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(InvalidCanonicalizerException, init$, void, $Exception*, $String*)},
		{"<init>", "(Ljava/lang/String;Ljava/lang/Exception;)V", nullptr, $PUBLIC | $DEPRECATED, $method(InvalidCanonicalizerException, init$, void, $String*, $Exception*), nullptr, nullptr, init$methodAnnotations$$$4},
		{"<init>", "(Ljava/lang/Exception;Ljava/lang/String;[Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(InvalidCanonicalizerException, init$, void, $Exception*, $String*, $ObjectArray*)},
		{"<init>", "(Ljava/lang/String;[Ljava/lang/Object;Ljava/lang/Exception;)V", nullptr, $PUBLIC | $DEPRECATED, $method(InvalidCanonicalizerException, init$, void, $String*, $ObjectArray*, $Exception*), nullptr, nullptr, init$methodAnnotations$$$6},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.org.apache.xml.internal.security.c14n.InvalidCanonicalizerException",
		"com.sun.org.apache.xml.internal.security.exceptions.XMLSecurityException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(InvalidCanonicalizerException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(InvalidCanonicalizerException);
	});
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