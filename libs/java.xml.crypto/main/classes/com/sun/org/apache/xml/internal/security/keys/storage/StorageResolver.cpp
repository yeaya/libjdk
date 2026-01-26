#include <com/sun/org/apache/xml/internal/security/keys/storage/StorageResolver.h>

#include <com/sun/org/apache/xml/internal/security/exceptions/XMLSecurityException.h>
#include <com/sun/org/apache/xml/internal/security/keys/storage/StorageResolver$StorageResolverIterator.h>
#include <com/sun/org/apache/xml/internal/security/keys/storage/StorageResolverException.h>
#include <com/sun/org/apache/xml/internal/security/keys/storage/StorageResolverSpi.h>
#include <com/sun/org/apache/xml/internal/security/keys/storage/implementations/KeyStoreResolver.h>
#include <com/sun/org/apache/xml/internal/security/keys/storage/implementations/SingleCertificateResolver.h>
#include <com/sun/org/slf4j/internal/Logger.h>
#include <com/sun/org/slf4j/internal/LoggerFactory.h>
#include <java/security/KeyStore.h>
#include <java/security/cert/X509Certificate.h>
#include <java/util/AbstractList.h>
#include <java/util/ArrayList.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <jcpp.h>

#undef LOG

using $XMLSecurityException = ::com::sun::org::apache::xml::internal::security::exceptions::XMLSecurityException;
using $StorageResolver$StorageResolverIterator = ::com::sun::org::apache::xml::internal::security::keys::storage::StorageResolver$StorageResolverIterator;
using $StorageResolverException = ::com::sun::org::apache::xml::internal::security::keys::storage::StorageResolverException;
using $StorageResolverSpi = ::com::sun::org::apache::xml::internal::security::keys::storage::StorageResolverSpi;
using $KeyStoreResolver = ::com::sun::org::apache::xml::internal::security::keys::storage::implementations::KeyStoreResolver;
using $SingleCertificateResolver = ::com::sun::org::apache::xml::internal::security::keys::storage::implementations::SingleCertificateResolver;
using $Logger = ::com::sun::org::slf4j::internal::Logger;
using $LoggerFactory = ::com::sun::org::slf4j::internal::LoggerFactory;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $KeyStore = ::java::security::KeyStore;
using $X509Certificate = ::java::security::cert::X509Certificate;
using $AbstractList = ::java::util::AbstractList;
using $ArrayList = ::java::util::ArrayList;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace security {
							namespace keys {
								namespace storage {

$FieldInfo _StorageResolver_FieldInfo_[] = {
	{"LOG", "Lcom/sun/org/slf4j/internal/Logger;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(StorageResolver, LOG)},
	{"storageResolvers", "Ljava/util/List;", "Ljava/util/List<Lcom/sun/org/apache/xml/internal/security/keys/storage/StorageResolverSpi;>;", $PRIVATE | $FINAL, $field(StorageResolver, storageResolvers)},
	{}
};

$MethodInfo _StorageResolver_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/xml/internal/security/keys/storage/StorageResolverSpi;)V", nullptr, $PUBLIC, $method(StorageResolver, init$, void, $StorageResolverSpi*)},
	{"<init>", "(Ljava/security/KeyStore;)V", nullptr, $PUBLIC, $method(StorageResolver, init$, void, $KeyStore*)},
	{"<init>", "(Ljava/security/cert/X509Certificate;)V", nullptr, $PUBLIC, $method(StorageResolver, init$, void, $X509Certificate*)},
	{"add", "(Lcom/sun/org/apache/xml/internal/security/keys/storage/StorageResolverSpi;)V", nullptr, $PUBLIC, $virtualMethod(StorageResolver, add, void, $StorageResolverSpi*)},
	{"add", "(Ljava/security/KeyStore;)V", nullptr, $PUBLIC, $virtualMethod(StorageResolver, add, void, $KeyStore*)},
	{"add", "(Ljava/security/cert/X509Certificate;)V", nullptr, $PUBLIC, $virtualMethod(StorageResolver, add, void, $X509Certificate*)},
	{"getIterator", "()Ljava/util/Iterator;", "()Ljava/util/Iterator<Ljava/security/cert/Certificate;>;", $PUBLIC, $virtualMethod(StorageResolver, getIterator, $Iterator*)},
	{}
};

$InnerClassInfo _StorageResolver_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xml.internal.security.keys.storage.StorageResolver$StorageResolverIterator", "com.sun.org.apache.xml.internal.security.keys.storage.StorageResolver", "StorageResolverIterator", $STATIC},
	{}
};

$ClassInfo _StorageResolver_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.security.keys.storage.StorageResolver",
	"java.lang.Object",
	nullptr,
	_StorageResolver_FieldInfo_,
	_StorageResolver_MethodInfo_,
	nullptr,
	nullptr,
	_StorageResolver_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.org.apache.xml.internal.security.keys.storage.StorageResolver$StorageResolverIterator"
};

$Object* allocate$StorageResolver($Class* clazz) {
	return $of($alloc(StorageResolver));
}

$Logger* StorageResolver::LOG = nullptr;

void StorageResolver::init$($StorageResolverSpi* resolver) {
	$set(this, storageResolvers, $new($ArrayList));
	this->add(resolver);
}

void StorageResolver::init$($KeyStore* keyStore) {
	$set(this, storageResolvers, $new($ArrayList));
	this->add(keyStore);
}

void StorageResolver::init$($X509Certificate* x509certificate) {
	$set(this, storageResolvers, $new($ArrayList));
	this->add(x509certificate);
}

void StorageResolver::add($StorageResolverSpi* resolver) {
	$nc(this->storageResolvers)->add(resolver);
}

void StorageResolver::add($KeyStore* keyStore) {
	try {
		this->add(static_cast<$StorageResolverSpi*>($$new($KeyStoreResolver, keyStore)));
	} catch ($StorageResolverException& ex) {
		$nc(StorageResolver::LOG)->error("Could not add KeyStore because of: "_s, static_cast<$Throwable*>(ex));
	}
}

void StorageResolver::add($X509Certificate* x509certificate) {
	this->add(static_cast<$StorageResolverSpi*>($$new($SingleCertificateResolver, x509certificate)));
}

$Iterator* StorageResolver::getIterator() {
	return $new($StorageResolver$StorageResolverIterator, $($nc(this->storageResolvers)->iterator()));
}

void clinit$StorageResolver($Class* class$) {
	$assignStatic(StorageResolver::LOG, $LoggerFactory::getLogger(StorageResolver::class$));
}

StorageResolver::StorageResolver() {
}

$Class* StorageResolver::load$($String* name, bool initialize) {
	$loadClass(StorageResolver, name, initialize, &_StorageResolver_ClassInfo_, clinit$StorageResolver, allocate$StorageResolver);
	return class$;
}

$Class* StorageResolver::class$ = nullptr;

								} // storage
							} // keys
						} // security
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com