#include <com/sun/org/apache/xml/internal/security/signature/ReferenceNotInitializedException.h>
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

void ReferenceNotInitializedException::init$() {
	$XMLSignatureException::init$();
}

void ReferenceNotInitializedException::init$($Exception* ex) {
	$XMLSignatureException::init$(ex);
}

void ReferenceNotInitializedException::init$($String* msgID) {
	$XMLSignatureException::init$(msgID);
}

void ReferenceNotInitializedException::init$($String* msgID, $ObjectArray* exArgs) {
	$XMLSignatureException::init$(msgID, exArgs);
}

void ReferenceNotInitializedException::init$($Exception* originalException, $String* msgID) {
	$XMLSignatureException::init$(originalException, msgID);
}

void ReferenceNotInitializedException::init$($String* msgID, $Exception* originalException) {
	ReferenceNotInitializedException::init$(originalException, msgID);
}

void ReferenceNotInitializedException::init$($Exception* originalException, $String* msgID, $ObjectArray* exArgs) {
	$XMLSignatureException::init$(originalException, msgID, exArgs);
}

void ReferenceNotInitializedException::init$($String* msgID, $ObjectArray* exArgs, $Exception* originalException) {
	ReferenceNotInitializedException::init$(originalException, msgID, exArgs);
}

ReferenceNotInitializedException::ReferenceNotInitializedException() {
}

ReferenceNotInitializedException::ReferenceNotInitializedException(const ReferenceNotInitializedException& e) : $XMLSignatureException(e) {
}

void ReferenceNotInitializedException::throw$() {
	throw *this;
}

$Class* ReferenceNotInitializedException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ReferenceNotInitializedException, serialVersionUID)},
		{}
	};
	$CompoundAttribute init$methodAnnotations$$$5[] = {
		{"Ljava/lang/Deprecated;", nullptr},
		{}
	};
	$CompoundAttribute init$methodAnnotations$$$7[] = {
		{"Ljava/lang/Deprecated;", nullptr},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ReferenceNotInitializedException, init$, void)},
		{"<init>", "(Ljava/lang/Exception;)V", nullptr, $PUBLIC, $method(ReferenceNotInitializedException, init$, void, $Exception*)},
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(ReferenceNotInitializedException, init$, void, $String*)},
		{"<init>", "(Ljava/lang/String;[Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(ReferenceNotInitializedException, init$, void, $String*, $ObjectArray*)},
		{"<init>", "(Ljava/lang/Exception;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(ReferenceNotInitializedException, init$, void, $Exception*, $String*)},
		{"<init>", "(Ljava/lang/String;Ljava/lang/Exception;)V", nullptr, $PUBLIC | $DEPRECATED, $method(ReferenceNotInitializedException, init$, void, $String*, $Exception*), nullptr, nullptr, init$methodAnnotations$$$5},
		{"<init>", "(Ljava/lang/Exception;Ljava/lang/String;[Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(ReferenceNotInitializedException, init$, void, $Exception*, $String*, $ObjectArray*)},
		{"<init>", "(Ljava/lang/String;[Ljava/lang/Object;Ljava/lang/Exception;)V", nullptr, $PUBLIC | $DEPRECATED, $method(ReferenceNotInitializedException, init$, void, $String*, $ObjectArray*, $Exception*), nullptr, nullptr, init$methodAnnotations$$$7},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.org.apache.xml.internal.security.signature.ReferenceNotInitializedException",
		"com.sun.org.apache.xml.internal.security.signature.XMLSignatureException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(ReferenceNotInitializedException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ReferenceNotInitializedException);
	});
	return class$;
}

$Class* ReferenceNotInitializedException::class$ = nullptr;

							} // signature
						} // security
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com