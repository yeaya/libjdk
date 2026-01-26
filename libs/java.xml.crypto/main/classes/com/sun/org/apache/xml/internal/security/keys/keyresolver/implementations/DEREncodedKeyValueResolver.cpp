#include <com/sun/org/apache/xml/internal/security/keys/keyresolver/implementations/DEREncodedKeyValueResolver.h>

#include <com/sun/org/apache/xml/internal/security/exceptions/XMLSecurityException.h>
#include <com/sun/org/apache/xml/internal/security/keys/content/DEREncodedKeyValue.h>
#include <com/sun/org/apache/xml/internal/security/keys/keyresolver/KeyResolverSpi.h>
#include <com/sun/org/apache/xml/internal/security/keys/storage/StorageResolver.h>
#include <com/sun/org/apache/xml/internal/security/utils/Constants.h>
#include <com/sun/org/apache/xml/internal/security/utils/XMLUtils.h>
#include <com/sun/org/slf4j/internal/Logger.h>
#include <com/sun/org/slf4j/internal/LoggerFactory.h>
#include <java/security/PrivateKey.h>
#include <java/security/PublicKey.h>
#include <java/security/cert/X509Certificate.h>
#include <javax/crypto/SecretKey.h>
#include <org/w3c/dom/Element.h>
#include <jcpp.h>

#undef LOG
#undef _TAG_DERENCODEDKEYVALUE

using $XMLSecurityException = ::com::sun::org::apache::xml::internal::security::exceptions::XMLSecurityException;
using $DEREncodedKeyValue = ::com::sun::org::apache::xml::internal::security::keys::content::DEREncodedKeyValue;
using $KeyResolverSpi = ::com::sun::org::apache::xml::internal::security::keys::keyresolver::KeyResolverSpi;
using $StorageResolver = ::com::sun::org::apache::xml::internal::security::keys::storage::StorageResolver;
using $Constants = ::com::sun::org::apache::xml::internal::security::utils::Constants;
using $XMLUtils = ::com::sun::org::apache::xml::internal::security::utils::XMLUtils;
using $Logger = ::com::sun::org::slf4j::internal::Logger;
using $LoggerFactory = ::com::sun::org::slf4j::internal::LoggerFactory;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $PrivateKey = ::java::security::PrivateKey;
using $PublicKey = ::java::security::PublicKey;
using $X509Certificate = ::java::security::cert::X509Certificate;
using $SecretKey = ::javax::crypto::SecretKey;
using $Element = ::org::w3c::dom::Element;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace security {
							namespace keys {
								namespace keyresolver {
									namespace implementations {

$FieldInfo _DEREncodedKeyValueResolver_FieldInfo_[] = {
	{"LOG", "Lcom/sun/org/slf4j/internal/Logger;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(DEREncodedKeyValueResolver, LOG)},
	{}
};

$MethodInfo _DEREncodedKeyValueResolver_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(DEREncodedKeyValueResolver, init$, void)},
	{"engineCanResolve", "(Lorg/w3c/dom/Element;Ljava/lang/String;Lcom/sun/org/apache/xml/internal/security/keys/storage/StorageResolver;)Z", nullptr, $PROTECTED, $virtualMethod(DEREncodedKeyValueResolver, engineCanResolve, bool, $Element*, $String*, $StorageResolver*)},
	{"engineLookupAndResolvePrivateKey", "(Lorg/w3c/dom/Element;Ljava/lang/String;Lcom/sun/org/apache/xml/internal/security/keys/storage/StorageResolver;Z)Ljava/security/PrivateKey;", nullptr, $PUBLIC, $virtualMethod(DEREncodedKeyValueResolver, engineLookupAndResolvePrivateKey, $PrivateKey*, $Element*, $String*, $StorageResolver*, bool), "com.sun.org.apache.xml.internal.security.keys.keyresolver.KeyResolverException"},
	{"engineResolvePrivateKey", "(Lorg/w3c/dom/Element;Ljava/lang/String;Lcom/sun/org/apache/xml/internal/security/keys/storage/StorageResolver;Z)Ljava/security/PrivateKey;", nullptr, $PROTECTED, $virtualMethod(DEREncodedKeyValueResolver, engineResolvePrivateKey, $PrivateKey*, $Element*, $String*, $StorageResolver*, bool)},
	{"engineResolvePublicKey", "(Lorg/w3c/dom/Element;Ljava/lang/String;Lcom/sun/org/apache/xml/internal/security/keys/storage/StorageResolver;Z)Ljava/security/PublicKey;", nullptr, $PROTECTED, $virtualMethod(DEREncodedKeyValueResolver, engineResolvePublicKey, $PublicKey*, $Element*, $String*, $StorageResolver*, bool), "com.sun.org.apache.xml.internal.security.keys.keyresolver.KeyResolverException"},
	{"engineResolveSecretKey", "(Lorg/w3c/dom/Element;Ljava/lang/String;Lcom/sun/org/apache/xml/internal/security/keys/storage/StorageResolver;Z)Ljavax/crypto/SecretKey;", nullptr, $PROTECTED, $virtualMethod(DEREncodedKeyValueResolver, engineResolveSecretKey, $SecretKey*, $Element*, $String*, $StorageResolver*, bool), "com.sun.org.apache.xml.internal.security.keys.keyresolver.KeyResolverException"},
	{"engineResolveX509Certificate", "(Lorg/w3c/dom/Element;Ljava/lang/String;Lcom/sun/org/apache/xml/internal/security/keys/storage/StorageResolver;Z)Ljava/security/cert/X509Certificate;", nullptr, $PROTECTED, $virtualMethod(DEREncodedKeyValueResolver, engineResolveX509Certificate, $X509Certificate*, $Element*, $String*, $StorageResolver*, bool), "com.sun.org.apache.xml.internal.security.keys.keyresolver.KeyResolverException"},
	{}
};

$ClassInfo _DEREncodedKeyValueResolver_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.security.keys.keyresolver.implementations.DEREncodedKeyValueResolver",
	"com.sun.org.apache.xml.internal.security.keys.keyresolver.KeyResolverSpi",
	nullptr,
	_DEREncodedKeyValueResolver_FieldInfo_,
	_DEREncodedKeyValueResolver_MethodInfo_
};

$Object* allocate$DEREncodedKeyValueResolver($Class* clazz) {
	return $of($alloc(DEREncodedKeyValueResolver));
}

$Logger* DEREncodedKeyValueResolver::LOG = nullptr;

void DEREncodedKeyValueResolver::init$() {
	$KeyResolverSpi::init$();
}

bool DEREncodedKeyValueResolver::engineCanResolve($Element* element, $String* baseURI, $StorageResolver* storage) {
	$init($Constants);
	return $XMLUtils::elementIsInSignature11Space(element, $Constants::_TAG_DERENCODEDKEYVALUE);
}

$PublicKey* DEREncodedKeyValueResolver::engineResolvePublicKey($Element* element, $String* baseURI, $StorageResolver* storage, bool secureValidation) {
	try {
		$var($DEREncodedKeyValue, derKeyValue, $new($DEREncodedKeyValue, element, baseURI));
		return derKeyValue->getPublicKey();
	} catch ($XMLSecurityException& e) {
		$nc(DEREncodedKeyValueResolver::LOG)->debug("XMLSecurityException"_s, static_cast<$Throwable*>(e));
	}
	return nullptr;
}

$X509Certificate* DEREncodedKeyValueResolver::engineResolveX509Certificate($Element* element, $String* baseURI, $StorageResolver* storage, bool secureValidation) {
	return nullptr;
}

$SecretKey* DEREncodedKeyValueResolver::engineResolveSecretKey($Element* element, $String* baseURI, $StorageResolver* storage, bool secureValidation) {
	return nullptr;
}

$PrivateKey* DEREncodedKeyValueResolver::engineLookupAndResolvePrivateKey($Element* element, $String* baseURI, $StorageResolver* storage, bool secureValidation) {
	return nullptr;
}

$PrivateKey* DEREncodedKeyValueResolver::engineResolvePrivateKey($Element* element, $String* baseURI, $StorageResolver* storage, bool secureValidation) {
	return nullptr;
}

void clinit$DEREncodedKeyValueResolver($Class* class$) {
	$assignStatic(DEREncodedKeyValueResolver::LOG, $LoggerFactory::getLogger(DEREncodedKeyValueResolver::class$));
}

DEREncodedKeyValueResolver::DEREncodedKeyValueResolver() {
}

$Class* DEREncodedKeyValueResolver::load$($String* name, bool initialize) {
	$loadClass(DEREncodedKeyValueResolver, name, initialize, &_DEREncodedKeyValueResolver_ClassInfo_, clinit$DEREncodedKeyValueResolver, allocate$DEREncodedKeyValueResolver);
	return class$;
}

$Class* DEREncodedKeyValueResolver::class$ = nullptr;

									} // implementations
								} // keyresolver
							} // keys
						} // security
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com