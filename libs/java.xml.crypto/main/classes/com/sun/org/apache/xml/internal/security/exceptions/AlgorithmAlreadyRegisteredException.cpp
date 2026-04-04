#include <com/sun/org/apache/xml/internal/security/exceptions/AlgorithmAlreadyRegisteredException.h>
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
							namespace exceptions {

void AlgorithmAlreadyRegisteredException::init$() {
	$XMLSecurityException::init$();
}

void AlgorithmAlreadyRegisteredException::init$($String* msgID) {
	$XMLSecurityException::init$(msgID);
}

void AlgorithmAlreadyRegisteredException::init$($String* msgID, $ObjectArray* exArgs) {
	$XMLSecurityException::init$(msgID, exArgs);
}

void AlgorithmAlreadyRegisteredException::init$($Exception* originalException, $String* msgID) {
	$XMLSecurityException::init$(originalException, msgID);
}

void AlgorithmAlreadyRegisteredException::init$($String* msgID, $Exception* originalException) {
	AlgorithmAlreadyRegisteredException::init$(originalException, msgID);
}

void AlgorithmAlreadyRegisteredException::init$($Exception* originalException, $String* msgID, $ObjectArray* exArgs) {
	$XMLSecurityException::init$(originalException, msgID, exArgs);
}

void AlgorithmAlreadyRegisteredException::init$($String* msgID, $ObjectArray* exArgs, $Exception* originalException) {
	AlgorithmAlreadyRegisteredException::init$(originalException, msgID, exArgs);
}

AlgorithmAlreadyRegisteredException::AlgorithmAlreadyRegisteredException() {
}

AlgorithmAlreadyRegisteredException::AlgorithmAlreadyRegisteredException(const AlgorithmAlreadyRegisteredException& e) : $XMLSecurityException(e) {
}

void AlgorithmAlreadyRegisteredException::throw$() {
	throw *this;
}

$Class* AlgorithmAlreadyRegisteredException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(AlgorithmAlreadyRegisteredException, serialVersionUID)},
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
		{"<init>", "()V", nullptr, $PUBLIC, $method(AlgorithmAlreadyRegisteredException, init$, void)},
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(AlgorithmAlreadyRegisteredException, init$, void, $String*)},
		{"<init>", "(Ljava/lang/String;[Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(AlgorithmAlreadyRegisteredException, init$, void, $String*, $ObjectArray*)},
		{"<init>", "(Ljava/lang/Exception;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(AlgorithmAlreadyRegisteredException, init$, void, $Exception*, $String*)},
		{"<init>", "(Ljava/lang/String;Ljava/lang/Exception;)V", nullptr, $PUBLIC | $DEPRECATED, $method(AlgorithmAlreadyRegisteredException, init$, void, $String*, $Exception*), nullptr, nullptr, init$methodAnnotations$$$4},
		{"<init>", "(Ljava/lang/Exception;Ljava/lang/String;[Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(AlgorithmAlreadyRegisteredException, init$, void, $Exception*, $String*, $ObjectArray*)},
		{"<init>", "(Ljava/lang/String;[Ljava/lang/Object;Ljava/lang/Exception;)V", nullptr, $PUBLIC | $DEPRECATED, $method(AlgorithmAlreadyRegisteredException, init$, void, $String*, $ObjectArray*, $Exception*), nullptr, nullptr, init$methodAnnotations$$$6},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.org.apache.xml.internal.security.exceptions.AlgorithmAlreadyRegisteredException",
		"com.sun.org.apache.xml.internal.security.exceptions.XMLSecurityException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(AlgorithmAlreadyRegisteredException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AlgorithmAlreadyRegisteredException);
	});
	return class$;
}

$Class* AlgorithmAlreadyRegisteredException::class$ = nullptr;

							} // exceptions
						} // security
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com