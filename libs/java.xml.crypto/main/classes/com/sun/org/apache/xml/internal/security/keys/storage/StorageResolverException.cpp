#include <com/sun/org/apache/xml/internal/security/keys/storage/StorageResolverException.h>

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
								namespace storage {

$CompoundAttribute _StorageResolverException_MethodAnnotations_init$5[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$CompoundAttribute _StorageResolverException_MethodAnnotations_init$7[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$FieldInfo _StorageResolverException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(StorageResolverException, serialVersionUID)},
	{}
};

$MethodInfo _StorageResolverException_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(StorageResolverException, init$, void)},
	{"<init>", "(Ljava/lang/Exception;)V", nullptr, $PUBLIC, $method(StorageResolverException, init$, void, $Exception*)},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(StorageResolverException, init$, void, $String*)},
	{"<init>", "(Ljava/lang/String;[Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(StorageResolverException, init$, void, $String*, $ObjectArray*)},
	{"<init>", "(Ljava/lang/Exception;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(StorageResolverException, init$, void, $Exception*, $String*)},
	{"<init>", "(Ljava/lang/String;Ljava/lang/Exception;)V", nullptr, $PUBLIC | $DEPRECATED, $method(StorageResolverException, init$, void, $String*, $Exception*), nullptr, nullptr, _StorageResolverException_MethodAnnotations_init$5},
	{"<init>", "(Ljava/lang/Exception;Ljava/lang/String;[Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(StorageResolverException, init$, void, $Exception*, $String*, $ObjectArray*)},
	{"<init>", "(Ljava/lang/String;[Ljava/lang/Object;Ljava/lang/Exception;)V", nullptr, $PUBLIC | $DEPRECATED, $method(StorageResolverException, init$, void, $String*, $ObjectArray*, $Exception*), nullptr, nullptr, _StorageResolverException_MethodAnnotations_init$7},
	{}
};

$ClassInfo _StorageResolverException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.security.keys.storage.StorageResolverException",
	"com.sun.org.apache.xml.internal.security.exceptions.XMLSecurityException",
	nullptr,
	_StorageResolverException_FieldInfo_,
	_StorageResolverException_MethodInfo_
};

$Object* allocate$StorageResolverException($Class* clazz) {
	return $of($alloc(StorageResolverException));
}

void StorageResolverException::init$() {
	$XMLSecurityException::init$();
}

void StorageResolverException::init$($Exception* ex) {
	$XMLSecurityException::init$(ex);
}

void StorageResolverException::init$($String* msgID) {
	$XMLSecurityException::init$(msgID);
}

void StorageResolverException::init$($String* msgID, $ObjectArray* exArgs) {
	$XMLSecurityException::init$(msgID, exArgs);
}

void StorageResolverException::init$($Exception* originalException, $String* msgID) {
	$XMLSecurityException::init$(originalException, msgID);
}

void StorageResolverException::init$($String* msgID, $Exception* originalException) {
	StorageResolverException::init$(originalException, msgID);
}

void StorageResolverException::init$($Exception* originalException, $String* msgID, $ObjectArray* exArgs) {
	$XMLSecurityException::init$(originalException, msgID, exArgs);
}

void StorageResolverException::init$($String* msgID, $ObjectArray* exArgs, $Exception* originalException) {
	StorageResolverException::init$(originalException, msgID, exArgs);
}

StorageResolverException::StorageResolverException() {
}

StorageResolverException::StorageResolverException(const StorageResolverException& e) : $XMLSecurityException(e) {
}

void StorageResolverException::throw$() {
	throw *this;
}

$Class* StorageResolverException::load$($String* name, bool initialize) {
	$loadClass(StorageResolverException, name, initialize, &_StorageResolverException_ClassInfo_, allocate$StorageResolverException);
	return class$;
}

$Class* StorageResolverException::class$ = nullptr;

								} // storage
							} // keys
						} // security
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com