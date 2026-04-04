#include <com/sun/org/apache/xml/internal/security/transforms/InvalidTransformException.h>
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
							namespace transforms {

void InvalidTransformException::init$() {
	$XMLSecurityException::init$();
}

void InvalidTransformException::init$($String* msgId) {
	$XMLSecurityException::init$(msgId);
}

void InvalidTransformException::init$($String* msgId, $ObjectArray* exArgs) {
	$XMLSecurityException::init$(msgId, exArgs);
}

void InvalidTransformException::init$($Exception* originalException, $String* msgId) {
	$XMLSecurityException::init$(originalException, msgId);
}

void InvalidTransformException::init$($String* msgID, $Exception* originalException) {
	InvalidTransformException::init$(originalException, msgID);
}

void InvalidTransformException::init$($Exception* originalException, $String* msgId, $ObjectArray* exArgs) {
	$XMLSecurityException::init$(originalException, msgId, exArgs);
}

void InvalidTransformException::init$($String* msgID, $ObjectArray* exArgs, $Exception* originalException) {
	InvalidTransformException::init$(originalException, msgID, exArgs);
}

InvalidTransformException::InvalidTransformException() {
}

InvalidTransformException::InvalidTransformException(const InvalidTransformException& e) : $XMLSecurityException(e) {
}

void InvalidTransformException::throw$() {
	throw *this;
}

$Class* InvalidTransformException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(InvalidTransformException, serialVersionUID)},
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
		{"<init>", "()V", nullptr, $PUBLIC, $method(InvalidTransformException, init$, void)},
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(InvalidTransformException, init$, void, $String*)},
		{"<init>", "(Ljava/lang/String;[Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(InvalidTransformException, init$, void, $String*, $ObjectArray*)},
		{"<init>", "(Ljava/lang/Exception;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(InvalidTransformException, init$, void, $Exception*, $String*)},
		{"<init>", "(Ljava/lang/String;Ljava/lang/Exception;)V", nullptr, $PUBLIC | $DEPRECATED, $method(InvalidTransformException, init$, void, $String*, $Exception*), nullptr, nullptr, init$methodAnnotations$$$4},
		{"<init>", "(Ljava/lang/Exception;Ljava/lang/String;[Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(InvalidTransformException, init$, void, $Exception*, $String*, $ObjectArray*)},
		{"<init>", "(Ljava/lang/String;[Ljava/lang/Object;Ljava/lang/Exception;)V", nullptr, $PUBLIC | $DEPRECATED, $method(InvalidTransformException, init$, void, $String*, $ObjectArray*, $Exception*), nullptr, nullptr, init$methodAnnotations$$$6},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.org.apache.xml.internal.security.transforms.InvalidTransformException",
		"com.sun.org.apache.xml.internal.security.exceptions.XMLSecurityException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(InvalidTransformException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(InvalidTransformException);
	});
	return class$;
}

$Class* InvalidTransformException::class$ = nullptr;

							} // transforms
						} // security
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com