#include <com/sun/org/apache/xml/internal/security/utils/resolver/ResourceResolverException.h>

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
							namespace utils {
								namespace resolver {

$CompoundAttribute _ResourceResolverException_MethodAnnotations_init$3[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$CompoundAttribute _ResourceResolverException_MethodAnnotations_init$5[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$FieldInfo _ResourceResolverException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ResourceResolverException, serialVersionUID)},
	{"uri", "Ljava/lang/String;", nullptr, $PRIVATE, $field(ResourceResolverException, uri)},
	{"baseURI", "Ljava/lang/String;", nullptr, $PRIVATE, $field(ResourceResolverException, baseURI)},
	{}
};

$MethodInfo _ResourceResolverException_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(ResourceResolverException, init$, void, $String*, $String*, $String*)},
	{"<init>", "(Ljava/lang/String;[Ljava/lang/Object;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(ResourceResolverException, init$, void, $String*, $ObjectArray*, $String*, $String*)},
	{"<init>", "(Ljava/lang/Exception;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(ResourceResolverException, init$, void, $Exception*, $String*, $String*, $String*)},
	{"<init>", "(Ljava/lang/String;Ljava/lang/Exception;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC | $DEPRECATED, $method(ResourceResolverException, init$, void, $String*, $Exception*, $String*, $String*), nullptr, nullptr, _ResourceResolverException_MethodAnnotations_init$3},
	{"<init>", "(Ljava/lang/Exception;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;[Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(ResourceResolverException, init$, void, $Exception*, $String*, $String*, $String*, $ObjectArray*)},
	{"<init>", "(Ljava/lang/String;[Ljava/lang/Object;Ljava/lang/Exception;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC | $DEPRECATED, $method(ResourceResolverException, init$, void, $String*, $ObjectArray*, $Exception*, $String*, $String*), nullptr, nullptr, _ResourceResolverException_MethodAnnotations_init$5},
	{"getURI", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(ResourceResolverException, getURI, $String*)},
	{"getbaseURI", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(ResourceResolverException, getbaseURI, $String*)},
	{"setURI", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(ResourceResolverException, setURI, void, $String*)},
	{"setbaseURI", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(ResourceResolverException, setbaseURI, void, $String*)},
	{}
};

$ClassInfo _ResourceResolverException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.security.utils.resolver.ResourceResolverException",
	"com.sun.org.apache.xml.internal.security.exceptions.XMLSecurityException",
	nullptr,
	_ResourceResolverException_FieldInfo_,
	_ResourceResolverException_MethodInfo_
};

$Object* allocate$ResourceResolverException($Class* clazz) {
	return $of($alloc(ResourceResolverException));
}

void ResourceResolverException::init$($String* msgID, $String* uri, $String* baseURI) {
	$XMLSecurityException::init$(msgID);
	$set(this, uri, uri);
	$set(this, baseURI, baseURI);
}

void ResourceResolverException::init$($String* msgID, $ObjectArray* exArgs, $String* uri, $String* baseURI) {
	$XMLSecurityException::init$(msgID, exArgs);
	$set(this, uri, uri);
	$set(this, baseURI, baseURI);
}

void ResourceResolverException::init$($Exception* originalException, $String* uri, $String* baseURI, $String* msgID) {
	$XMLSecurityException::init$(originalException, msgID);
	$set(this, uri, uri);
	$set(this, baseURI, baseURI);
}

void ResourceResolverException::init$($String* msgID, $Exception* originalException, $String* uri, $String* baseURI) {
	ResourceResolverException::init$(originalException, uri, baseURI, msgID);
}

void ResourceResolverException::init$($Exception* originalException, $String* uri, $String* baseURI, $String* msgID, $ObjectArray* exArgs) {
	$XMLSecurityException::init$(originalException, msgID, exArgs);
	$set(this, uri, uri);
	$set(this, baseURI, baseURI);
}

void ResourceResolverException::init$($String* msgID, $ObjectArray* exArgs, $Exception* originalException, $String* uri, $String* baseURI) {
	ResourceResolverException::init$(originalException, uri, baseURI, msgID, exArgs);
}

void ResourceResolverException::setURI($String* uri) {
	$set(this, uri, uri);
}

$String* ResourceResolverException::getURI() {
	return this->uri;
}

void ResourceResolverException::setbaseURI($String* baseURI) {
	$set(this, baseURI, baseURI);
}

$String* ResourceResolverException::getbaseURI() {
	return this->baseURI;
}

ResourceResolverException::ResourceResolverException() {
}

ResourceResolverException::ResourceResolverException(const ResourceResolverException& e) : $XMLSecurityException(e) {
}

void ResourceResolverException::throw$() {
	throw *this;
}

$Class* ResourceResolverException::load$($String* name, bool initialize) {
	$loadClass(ResourceResolverException, name, initialize, &_ResourceResolverException_ClassInfo_, allocate$ResourceResolverException);
	return class$;
}

$Class* ResourceResolverException::class$ = nullptr;

								} // resolver
							} // utils
						} // security
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com