#include <com/sun/org/apache/xml/internal/security/keys/keyresolver/implementations/PrivateKeyResolver.h>

#include <com/sun/org/apache/xml/internal/security/exceptions/XMLSecurityException.h>
#include <com/sun/org/apache/xml/internal/security/keys/content/X509Data.h>
#include <com/sun/org/apache/xml/internal/security/keys/content/x509/XMLX509Certificate.h>
#include <com/sun/org/apache/xml/internal/security/keys/content/x509/XMLX509IssuerSerial.h>
#include <com/sun/org/apache/xml/internal/security/keys/content/x509/XMLX509SKI.h>
#include <com/sun/org/apache/xml/internal/security/keys/content/x509/XMLX509SubjectName.h>
#include <com/sun/org/apache/xml/internal/security/keys/keyresolver/KeyResolverSpi.h>
#include <com/sun/org/apache/xml/internal/security/keys/storage/StorageResolver.h>
#include <com/sun/org/apache/xml/internal/security/utils/Constants.h>
#include <com/sun/org/apache/xml/internal/security/utils/ElementProxy.h>
#include <com/sun/org/apache/xml/internal/security/utils/XMLUtils.h>
#include <com/sun/org/slf4j/internal/Logger.h>
#include <com/sun/org/slf4j/internal/LoggerFactory.h>
#include <java/security/GeneralSecurityException.h>
#include <java/security/Key.h>
#include <java/security/KeyStore.h>
#include <java/security/KeyStoreException.h>
#include <java/security/PrivateKey.h>
#include <java/security/PublicKey.h>
#include <java/security/cert/Certificate.h>
#include <java/security/cert/CertificateEncodingException.h>
#include <java/security/cert/CertificateException.h>
#include <java/security/cert/X509Certificate.h>
#include <java/util/Arrays.h>
#include <java/util/Enumeration.h>
#include <javax/crypto/SecretKey.h>
#include <org/w3c/dom/Document.h>
#include <org/w3c/dom/Element.h>
#include <org/w3c/dom/Node.h>
#include <jcpp.h>

#undef LOG
#undef _TAG_KEYNAME
#undef _TAG_X509DATA

using $XMLSecurityException = ::com::sun::org::apache::xml::internal::security::exceptions::XMLSecurityException;
using $X509Data = ::com::sun::org::apache::xml::internal::security::keys::content::X509Data;
using $XMLX509Certificate = ::com::sun::org::apache::xml::internal::security::keys::content::x509::XMLX509Certificate;
using $XMLX509IssuerSerial = ::com::sun::org::apache::xml::internal::security::keys::content::x509::XMLX509IssuerSerial;
using $XMLX509SKI = ::com::sun::org::apache::xml::internal::security::keys::content::x509::XMLX509SKI;
using $XMLX509SubjectName = ::com::sun::org::apache::xml::internal::security::keys::content::x509::XMLX509SubjectName;
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
using $GeneralSecurityException = ::java::security::GeneralSecurityException;
using $Key = ::java::security::Key;
using $KeyStore = ::java::security::KeyStore;
using $KeyStoreException = ::java::security::KeyStoreException;
using $PrivateKey = ::java::security::PrivateKey;
using $PublicKey = ::java::security::PublicKey;
using $Certificate = ::java::security::cert::Certificate;
using $CertificateEncodingException = ::java::security::cert::CertificateEncodingException;
using $CertificateException = ::java::security::cert::CertificateException;
using $X509Certificate = ::java::security::cert::X509Certificate;
using $Arrays = ::java::util::Arrays;
using $Enumeration = ::java::util::Enumeration;
using $SecretKey = ::javax::crypto::SecretKey;
using $Element = ::org::w3c::dom::Element;
using $Node = ::org::w3c::dom::Node;

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

$FieldInfo _PrivateKeyResolver_FieldInfo_[] = {
	{"LOG", "Lcom/sun/org/slf4j/internal/Logger;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(PrivateKeyResolver, LOG)},
	{"keyStore", "Ljava/security/KeyStore;", nullptr, $PRIVATE | $FINAL, $field(PrivateKeyResolver, keyStore)},
	{"password", "[C", nullptr, $PRIVATE | $FINAL, $field(PrivateKeyResolver, password)},
	{}
};

$MethodInfo _PrivateKeyResolver_MethodInfo_[] = {
	{"<init>", "(Ljava/security/KeyStore;[C)V", nullptr, $PUBLIC, $method(PrivateKeyResolver, init$, void, $KeyStore*, $chars*)},
	{"engineCanResolve", "(Lorg/w3c/dom/Element;Ljava/lang/String;Lcom/sun/org/apache/xml/internal/security/keys/storage/StorageResolver;)Z", nullptr, $PROTECTED, $virtualMethod(PrivateKeyResolver, engineCanResolve, bool, $Element*, $String*, $StorageResolver*)},
	{"engineResolvePrivateKey", "(Lorg/w3c/dom/Element;Ljava/lang/String;Lcom/sun/org/apache/xml/internal/security/keys/storage/StorageResolver;Z)Ljava/security/PrivateKey;", nullptr, $PUBLIC, $virtualMethod(PrivateKeyResolver, engineResolvePrivateKey, $PrivateKey*, $Element*, $String*, $StorageResolver*, bool), "com.sun.org.apache.xml.internal.security.keys.keyresolver.KeyResolverException"},
	{"engineResolvePublicKey", "(Lorg/w3c/dom/Element;Ljava/lang/String;Lcom/sun/org/apache/xml/internal/security/keys/storage/StorageResolver;Z)Ljava/security/PublicKey;", nullptr, $PROTECTED, $virtualMethod(PrivateKeyResolver, engineResolvePublicKey, $PublicKey*, $Element*, $String*, $StorageResolver*, bool), "com.sun.org.apache.xml.internal.security.keys.keyresolver.KeyResolverException"},
	{"engineResolveSecretKey", "(Lorg/w3c/dom/Element;Ljava/lang/String;Lcom/sun/org/apache/xml/internal/security/keys/storage/StorageResolver;Z)Ljavax/crypto/SecretKey;", nullptr, $PROTECTED, $virtualMethod(PrivateKeyResolver, engineResolveSecretKey, $SecretKey*, $Element*, $String*, $StorageResolver*, bool), "com.sun.org.apache.xml.internal.security.keys.keyresolver.KeyResolverException"},
	{"engineResolveX509Certificate", "(Lorg/w3c/dom/Element;Ljava/lang/String;Lcom/sun/org/apache/xml/internal/security/keys/storage/StorageResolver;Z)Ljava/security/cert/X509Certificate;", nullptr, $PROTECTED, $virtualMethod(PrivateKeyResolver, engineResolveX509Certificate, $X509Certificate*, $Element*, $String*, $StorageResolver*, bool), "com.sun.org.apache.xml.internal.security.keys.keyresolver.KeyResolverException"},
	{"resolveX509Certificate", "(Lcom/sun/org/apache/xml/internal/security/keys/content/x509/XMLX509Certificate;)Ljava/security/PrivateKey;", nullptr, $PRIVATE, $method(PrivateKeyResolver, resolveX509Certificate, $PrivateKey*, $XMLX509Certificate*), "com.sun.org.apache.xml.internal.security.exceptions.XMLSecurityException,java.security.KeyStoreException"},
	{"resolveX509Data", "(Lorg/w3c/dom/Element;Ljava/lang/String;)Ljava/security/PrivateKey;", nullptr, $PRIVATE, $method(PrivateKeyResolver, resolveX509Data, $PrivateKey*, $Element*, $String*)},
	{"resolveX509IssuerSerial", "(Lcom/sun/org/apache/xml/internal/security/keys/content/x509/XMLX509IssuerSerial;)Ljava/security/PrivateKey;", nullptr, $PRIVATE, $method(PrivateKeyResolver, resolveX509IssuerSerial, $PrivateKey*, $XMLX509IssuerSerial*), "java.security.KeyStoreException"},
	{"resolveX509SKI", "(Lcom/sun/org/apache/xml/internal/security/keys/content/x509/XMLX509SKI;)Ljava/security/PrivateKey;", nullptr, $PRIVATE, $method(PrivateKeyResolver, resolveX509SKI, $PrivateKey*, $XMLX509SKI*), "com.sun.org.apache.xml.internal.security.exceptions.XMLSecurityException,java.security.KeyStoreException"},
	{"resolveX509SubjectName", "(Lcom/sun/org/apache/xml/internal/security/keys/content/x509/XMLX509SubjectName;)Ljava/security/PrivateKey;", nullptr, $PRIVATE, $method(PrivateKeyResolver, resolveX509SubjectName, $PrivateKey*, $XMLX509SubjectName*), "java.security.KeyStoreException"},
	{}
};

$ClassInfo _PrivateKeyResolver_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.security.keys.keyresolver.implementations.PrivateKeyResolver",
	"com.sun.org.apache.xml.internal.security.keys.keyresolver.KeyResolverSpi",
	nullptr,
	_PrivateKeyResolver_FieldInfo_,
	_PrivateKeyResolver_MethodInfo_
};

$Object* allocate$PrivateKeyResolver($Class* clazz) {
	return $of($alloc(PrivateKeyResolver));
}

$Logger* PrivateKeyResolver::LOG = nullptr;

void PrivateKeyResolver::init$($KeyStore* keyStore, $chars* password) {
	$KeyResolverSpi::init$();
	$set(this, keyStore, keyStore);
	$set(this, password, password);
}

bool PrivateKeyResolver::engineCanResolve($Element* element, $String* baseURI, $StorageResolver* storage) {
	$init($Constants);
	bool var$0 = $XMLUtils::elementIsInSignatureSpace(element, $Constants::_TAG_X509DATA);
	return var$0 || $XMLUtils::elementIsInSignatureSpace(element, $Constants::_TAG_KEYNAME);
}

$PublicKey* PrivateKeyResolver::engineResolvePublicKey($Element* element, $String* baseURI, $StorageResolver* storage, bool secureValidation) {
	return nullptr;
}

$X509Certificate* PrivateKeyResolver::engineResolveX509Certificate($Element* element, $String* baseURI, $StorageResolver* storage, bool secureValidation) {
	return nullptr;
}

$SecretKey* PrivateKeyResolver::engineResolveSecretKey($Element* element, $String* baseURI, $StorageResolver* storage, bool secureValidation) {
	return nullptr;
}

$PrivateKey* PrivateKeyResolver::engineResolvePrivateKey($Element* element, $String* baseURI, $StorageResolver* storage, bool secureValidation) {
	$useLocalCurrentObjectStackCache();
	$init($Constants);
	if ($XMLUtils::elementIsInSignatureSpace(element, $Constants::_TAG_X509DATA)) {
		$var($PrivateKey, privKey, resolveX509Data(element, baseURI));
		if (privKey != nullptr) {
			return privKey;
		}
	} else {
		if ($XMLUtils::elementIsInSignatureSpace(element, $Constants::_TAG_KEYNAME)) {
			$nc(PrivateKeyResolver::LOG)->debug("Can I resolve KeyName?"_s);
			$var($String, keyName, $nc($($nc(element)->getFirstChild()))->getNodeValue());
			try {
				$var($Key, key, $nc(this->keyStore)->getKey(keyName, this->password));
				if ($instanceOf($PrivateKey, key)) {
					return $cast($PrivateKey, key);
				}
			} catch ($Exception& e) {
				$nc(PrivateKeyResolver::LOG)->debug("Cannot recover the key"_s, static_cast<$Throwable*>(e));
			}
		}
	}
	return nullptr;
}

$PrivateKey* PrivateKeyResolver::resolveX509Data($Element* element, $String* baseURI) {
	$useLocalCurrentObjectStackCache();
	$nc(PrivateKeyResolver::LOG)->debug("Can I resolve X509Data?"_s);
	try {
		$var($X509Data, x509Data, $new($X509Data, element, baseURI));
		int32_t len = x509Data->lengthSKI();
		for (int32_t i = 0; i < len; ++i) {
			$var($XMLX509SKI, x509SKI, x509Data->itemSKI(i));
			$var($PrivateKey, privKey, resolveX509SKI(x509SKI));
			if (privKey != nullptr) {
				return privKey;
			}
		}
		len = x509Data->lengthIssuerSerial();
		for (int32_t i = 0; i < len; ++i) {
			$var($XMLX509IssuerSerial, x509Serial, x509Data->itemIssuerSerial(i));
			$var($PrivateKey, privKey, resolveX509IssuerSerial(x509Serial));
			if (privKey != nullptr) {
				return privKey;
			}
		}
		len = x509Data->lengthSubjectName();
		for (int32_t i = 0; i < len; ++i) {
			$var($XMLX509SubjectName, x509SubjectName, x509Data->itemSubjectName(i));
			$var($PrivateKey, privKey, resolveX509SubjectName(x509SubjectName));
			if (privKey != nullptr) {
				return privKey;
			}
		}
		len = x509Data->lengthCertificate();
		for (int32_t i = 0; i < len; ++i) {
			$var($XMLX509Certificate, x509Cert, x509Data->itemCertificate(i));
			$var($PrivateKey, privKey, resolveX509Certificate(x509Cert));
			if (privKey != nullptr) {
				return privKey;
			}
		}
	} catch ($XMLSecurityException& e) {
		$nc(PrivateKeyResolver::LOG)->debug("XMLSecurityException"_s, static_cast<$Throwable*>(e));
	} catch ($KeyStoreException& e) {
		$nc(PrivateKeyResolver::LOG)->debug("KeyStoreException"_s, static_cast<$Throwable*>(e));
	}
	return nullptr;
}

$PrivateKey* PrivateKeyResolver::resolveX509SKI($XMLX509SKI* x509SKI) {
	$useLocalCurrentObjectStackCache();
	$nc(PrivateKeyResolver::LOG)->debug("Can I resolve X509SKI?"_s);
	$var($Enumeration, aliases, $nc(this->keyStore)->aliases());
	while ($nc(aliases)->hasMoreElements()) {
		$var($String, alias, $cast($String, aliases->nextElement()));
		if ($nc(this->keyStore)->isKeyEntry(alias)) {
			$var($Certificate, cert, $nc(this->keyStore)->getCertificate(alias));
			if ($instanceOf($X509Certificate, cert)) {
				$var($XMLX509SKI, certSKI, $new($XMLX509SKI, $($nc(x509SKI)->getDocument()), $cast($X509Certificate, cert)));
				if (certSKI->equals(x509SKI)) {
					$nc(PrivateKeyResolver::LOG)->debug("match !!! "_s);
					try {
						$var($Key, key, $nc(this->keyStore)->getKey(alias, this->password));
						if ($instanceOf($PrivateKey, key)) {
							return $cast($PrivateKey, key);
						}
					} catch ($Exception& e) {
						$nc(PrivateKeyResolver::LOG)->debug("Cannot recover the key"_s, static_cast<$Throwable*>(e));
					}
				}
			}
		}
	}
	return nullptr;
}

$PrivateKey* PrivateKeyResolver::resolveX509IssuerSerial($XMLX509IssuerSerial* x509Serial) {
	$useLocalCurrentObjectStackCache();
	$nc(PrivateKeyResolver::LOG)->debug("Can I resolve X509IssuerSerial?"_s);
	$var($Enumeration, aliases, $nc(this->keyStore)->aliases());
	while ($nc(aliases)->hasMoreElements()) {
		$var($String, alias, $cast($String, aliases->nextElement()));
		if ($nc(this->keyStore)->isKeyEntry(alias)) {
			$var($Certificate, cert, $nc(this->keyStore)->getCertificate(alias));
			if ($instanceOf($X509Certificate, cert)) {
				$var($XMLX509IssuerSerial, certSerial, $new($XMLX509IssuerSerial, $($nc(x509Serial)->getDocument()), $cast($X509Certificate, cert)));
				if (certSerial->equals(x509Serial)) {
					$nc(PrivateKeyResolver::LOG)->debug("match !!! "_s);
					try {
						$var($Key, key, $nc(this->keyStore)->getKey(alias, this->password));
						if ($instanceOf($PrivateKey, key)) {
							return $cast($PrivateKey, key);
						}
					} catch ($Exception& e) {
						$nc(PrivateKeyResolver::LOG)->debug("Cannot recover the key"_s, static_cast<$Throwable*>(e));
					}
				}
			}
		}
	}
	return nullptr;
}

$PrivateKey* PrivateKeyResolver::resolveX509SubjectName($XMLX509SubjectName* x509SubjectName) {
	$useLocalCurrentObjectStackCache();
	$nc(PrivateKeyResolver::LOG)->debug("Can I resolve X509SubjectName?"_s);
	$var($Enumeration, aliases, $nc(this->keyStore)->aliases());
	while ($nc(aliases)->hasMoreElements()) {
		$var($String, alias, $cast($String, aliases->nextElement()));
		if ($nc(this->keyStore)->isKeyEntry(alias)) {
			$var($Certificate, cert, $nc(this->keyStore)->getCertificate(alias));
			if ($instanceOf($X509Certificate, cert)) {
				$var($XMLX509SubjectName, certSN, $new($XMLX509SubjectName, $($nc(x509SubjectName)->getDocument()), $cast($X509Certificate, cert)));
				if (certSN->equals(x509SubjectName)) {
					$nc(PrivateKeyResolver::LOG)->debug("match !!! "_s);
					try {
						$var($Key, key, $nc(this->keyStore)->getKey(alias, this->password));
						if ($instanceOf($PrivateKey, key)) {
							return $cast($PrivateKey, key);
						}
					} catch ($Exception& e) {
						$nc(PrivateKeyResolver::LOG)->debug("Cannot recover the key"_s, static_cast<$Throwable*>(e));
					}
				}
			}
		}
	}
	return nullptr;
}

$PrivateKey* PrivateKeyResolver::resolveX509Certificate($XMLX509Certificate* x509Cert) {
	$useLocalCurrentObjectStackCache();
	$nc(PrivateKeyResolver::LOG)->debug("Can I resolve X509Certificate?"_s);
	$var($bytes, x509CertBytes, $nc(x509Cert)->getCertificateBytes());
	$var($Enumeration, aliases, $nc(this->keyStore)->aliases());
	while ($nc(aliases)->hasMoreElements()) {
		$var($String, alias, $cast($String, aliases->nextElement()));
		if ($nc(this->keyStore)->isKeyEntry(alias)) {
			$var($Certificate, cert, $nc(this->keyStore)->getCertificate(alias));
			if ($instanceOf($X509Certificate, cert)) {
				$var($bytes, certBytes, nullptr);
				try {
					$assign(certBytes, $nc(cert)->getEncoded());
				} catch ($CertificateEncodingException& e1) {
					$nc(PrivateKeyResolver::LOG)->debug("Cannot recover the key"_s, static_cast<$Throwable*>(e1));
				}
				if (certBytes != nullptr && $Arrays::equals(certBytes, x509CertBytes)) {
					$nc(PrivateKeyResolver::LOG)->debug("match !!! "_s);
					try {
						$var($Key, key, $nc(this->keyStore)->getKey(alias, this->password));
						if ($instanceOf($PrivateKey, key)) {
							return $cast($PrivateKey, key);
						}
					} catch ($Exception& e) {
						$nc(PrivateKeyResolver::LOG)->debug("Cannot recover the key"_s, static_cast<$Throwable*>(e));
					}
				}
			}
		}
	}
	return nullptr;
}

void clinit$PrivateKeyResolver($Class* class$) {
	$assignStatic(PrivateKeyResolver::LOG, $LoggerFactory::getLogger(PrivateKeyResolver::class$));
}

PrivateKeyResolver::PrivateKeyResolver() {
}

$Class* PrivateKeyResolver::load$($String* name, bool initialize) {
	$loadClass(PrivateKeyResolver, name, initialize, &_PrivateKeyResolver_ClassInfo_, clinit$PrivateKeyResolver, allocate$PrivateKeyResolver);
	return class$;
}

$Class* PrivateKeyResolver::class$ = nullptr;

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