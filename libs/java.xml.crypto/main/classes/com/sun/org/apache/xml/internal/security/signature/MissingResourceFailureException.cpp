#include <com/sun/org/apache/xml/internal/security/signature/MissingResourceFailureException.h>
#include <com/sun/org/apache/xml/internal/security/signature/Reference.h>
#include <com/sun/org/apache/xml/internal/security/signature/XMLSignatureException.h>
#include <jcpp.h>

using $Reference = ::com::sun::org::apache::xml::internal::security::signature::Reference;
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

void MissingResourceFailureException::init$($Reference* reference, $String* msgID) {
	$XMLSignatureException::init$(msgID);
	$set(this, uninitializedReference, reference);
}

void MissingResourceFailureException::init$($String* msgID, $Reference* reference) {
	MissingResourceFailureException::init$(reference, msgID);
}

void MissingResourceFailureException::init$($Reference* reference, $String* msgID, $ObjectArray* exArgs) {
	$XMLSignatureException::init$(msgID, exArgs);
	$set(this, uninitializedReference, reference);
}

void MissingResourceFailureException::init$($String* msgID, $ObjectArray* exArgs, $Reference* reference) {
	MissingResourceFailureException::init$(reference, msgID, exArgs);
}

void MissingResourceFailureException::init$($Exception* originalException, $Reference* reference, $String* msgID) {
	$XMLSignatureException::init$(originalException, msgID);
	$set(this, uninitializedReference, reference);
}

void MissingResourceFailureException::init$($String* msgID, $Exception* originalException, $Reference* reference) {
	MissingResourceFailureException::init$(originalException, reference, msgID);
}

void MissingResourceFailureException::init$($Exception* originalException, $Reference* reference, $String* msgID, $ObjectArray* exArgs) {
	$XMLSignatureException::init$(originalException, msgID, exArgs);
	$set(this, uninitializedReference, reference);
}

void MissingResourceFailureException::init$($String* msgID, $ObjectArray* exArgs, $Exception* originalException, $Reference* reference) {
	MissingResourceFailureException::init$(originalException, reference, msgID, exArgs);
}

void MissingResourceFailureException::setReference($Reference* reference) {
	$set(this, uninitializedReference, reference);
}

$Reference* MissingResourceFailureException::getReference() {
	return this->uninitializedReference;
}

MissingResourceFailureException::MissingResourceFailureException() {
}

MissingResourceFailureException::MissingResourceFailureException(const MissingResourceFailureException& e) : $XMLSignatureException(e) {
}

void MissingResourceFailureException::throw$() {
	throw *this;
}

$Class* MissingResourceFailureException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(MissingResourceFailureException, serialVersionUID)},
		{"uninitializedReference", "Lcom/sun/org/apache/xml/internal/security/signature/Reference;", nullptr, $PRIVATE, $field(MissingResourceFailureException, uninitializedReference)},
		{}
	};
	$CompoundAttribute init$methodAnnotations$$$1[] = {
		{"Ljava/lang/Deprecated;", nullptr},
		{}
	};
	$CompoundAttribute init$methodAnnotations$$$3[] = {
		{"Ljava/lang/Deprecated;", nullptr},
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
		{"<init>", "(Lcom/sun/org/apache/xml/internal/security/signature/Reference;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(MissingResourceFailureException, init$, void, $Reference*, $String*)},
		{"<init>", "(Ljava/lang/String;Lcom/sun/org/apache/xml/internal/security/signature/Reference;)V", nullptr, $PUBLIC | $DEPRECATED, $method(MissingResourceFailureException, init$, void, $String*, $Reference*), nullptr, nullptr, init$methodAnnotations$$$1},
		{"<init>", "(Lcom/sun/org/apache/xml/internal/security/signature/Reference;Ljava/lang/String;[Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(MissingResourceFailureException, init$, void, $Reference*, $String*, $ObjectArray*)},
		{"<init>", "(Ljava/lang/String;[Ljava/lang/Object;Lcom/sun/org/apache/xml/internal/security/signature/Reference;)V", nullptr, $PUBLIC | $DEPRECATED, $method(MissingResourceFailureException, init$, void, $String*, $ObjectArray*, $Reference*), nullptr, nullptr, init$methodAnnotations$$$3},
		{"<init>", "(Ljava/lang/Exception;Lcom/sun/org/apache/xml/internal/security/signature/Reference;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(MissingResourceFailureException, init$, void, $Exception*, $Reference*, $String*)},
		{"<init>", "(Ljava/lang/String;Ljava/lang/Exception;Lcom/sun/org/apache/xml/internal/security/signature/Reference;)V", nullptr, $PUBLIC | $DEPRECATED, $method(MissingResourceFailureException, init$, void, $String*, $Exception*, $Reference*), nullptr, nullptr, init$methodAnnotations$$$5},
		{"<init>", "(Ljava/lang/Exception;Lcom/sun/org/apache/xml/internal/security/signature/Reference;Ljava/lang/String;[Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(MissingResourceFailureException, init$, void, $Exception*, $Reference*, $String*, $ObjectArray*)},
		{"<init>", "(Ljava/lang/String;[Ljava/lang/Object;Ljava/lang/Exception;Lcom/sun/org/apache/xml/internal/security/signature/Reference;)V", nullptr, $PUBLIC | $DEPRECATED, $method(MissingResourceFailureException, init$, void, $String*, $ObjectArray*, $Exception*, $Reference*), nullptr, nullptr, init$methodAnnotations$$$7},
		{"getReference", "()Lcom/sun/org/apache/xml/internal/security/signature/Reference;", nullptr, $PUBLIC, $virtualMethod(MissingResourceFailureException, getReference, $Reference*)},
		{"setReference", "(Lcom/sun/org/apache/xml/internal/security/signature/Reference;)V", nullptr, $PUBLIC, $virtualMethod(MissingResourceFailureException, setReference, void, $Reference*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.org.apache.xml.internal.security.signature.MissingResourceFailureException",
		"com.sun.org.apache.xml.internal.security.signature.XMLSignatureException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(MissingResourceFailureException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MissingResourceFailureException);
	});
	return class$;
}

$Class* MissingResourceFailureException::class$ = nullptr;

							} // signature
						} // security
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com