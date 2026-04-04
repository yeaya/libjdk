#include <com/sun/org/apache/xml/internal/security/keys/storage/implementations/KeyStoreResolver.h>
#include <com/sun/org/apache/xml/internal/security/keys/storage/StorageResolverException.h>
#include <com/sun/org/apache/xml/internal/security/keys/storage/StorageResolverSpi.h>
#include <com/sun/org/apache/xml/internal/security/keys/storage/implementations/KeyStoreResolver$KeyStoreIterator.h>
#include <com/sun/org/slf4j/internal/Logger.h>
#include <com/sun/org/slf4j/internal/LoggerFactory.h>
#include <java/security/KeyStore.h>
#include <java/security/KeyStoreException.h>
#include <java/util/Enumeration.h>
#include <java/util/Iterator.h>
#include <jcpp.h>

#undef LOG

using $StorageResolverException = ::com::sun::org::apache::xml::internal::security::keys::storage::StorageResolverException;
using $StorageResolverSpi = ::com::sun::org::apache::xml::internal::security::keys::storage::StorageResolverSpi;
using $KeyStoreResolver$KeyStoreIterator = ::com::sun::org::apache::xml::internal::security::keys::storage::implementations::KeyStoreResolver$KeyStoreIterator;
using $Logger = ::com::sun::org::slf4j::internal::Logger;
using $LoggerFactory = ::com::sun::org::slf4j::internal::LoggerFactory;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $KeyStore = ::java::security::KeyStore;
using $KeyStoreException = ::java::security::KeyStoreException;
using $Iterator = ::java::util::Iterator;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace security {
							namespace keys {
								namespace storage {
									namespace implementations {

$Logger* KeyStoreResolver::LOG = nullptr;

void KeyStoreResolver::init$($KeyStore* keyStore) {
	$StorageResolverSpi::init$();
	$set(this, keyStore, keyStore);
	try {
		$nc(keyStore)->aliases();
	} catch ($KeyStoreException& ex) {
		$throwNew($StorageResolverException, ex);
	}
}

$Iterator* KeyStoreResolver::getIterator() {
	return $new($KeyStoreResolver$KeyStoreIterator, this->keyStore);
}

void KeyStoreResolver::clinit$($Class* clazz) {
	$assignStatic(KeyStoreResolver::LOG, $LoggerFactory::getLogger(KeyStoreResolver::class$));
}

KeyStoreResolver::KeyStoreResolver() {
}

$Class* KeyStoreResolver::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"LOG", "Lcom/sun/org/slf4j/internal/Logger;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(KeyStoreResolver, LOG)},
		{"keyStore", "Ljava/security/KeyStore;", nullptr, $PRIVATE | $FINAL, $field(KeyStoreResolver, keyStore)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/security/KeyStore;)V", nullptr, $PUBLIC, $method(KeyStoreResolver, init$, void, $KeyStore*), "com.sun.org.apache.xml.internal.security.keys.storage.StorageResolverException"},
		{"getIterator", "()Ljava/util/Iterator;", "()Ljava/util/Iterator<Ljava/security/cert/Certificate;>;", $PUBLIC, $virtualMethod(KeyStoreResolver, getIterator, $Iterator*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.org.apache.xml.internal.security.keys.storage.implementations.KeyStoreResolver$KeyStoreIterator", "com.sun.org.apache.xml.internal.security.keys.storage.implementations.KeyStoreResolver", "KeyStoreIterator", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.org.apache.xml.internal.security.keys.storage.implementations.KeyStoreResolver",
		"com.sun.org.apache.xml.internal.security.keys.storage.StorageResolverSpi",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"com.sun.org.apache.xml.internal.security.keys.storage.implementations.KeyStoreResolver$KeyStoreIterator"
	};
	$loadClass(KeyStoreResolver, name, initialize, &classInfo$$, KeyStoreResolver::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(KeyStoreResolver);
	});
	return class$;
}

$Class* KeyStoreResolver::class$ = nullptr;

									} // implementations
								} // storage
							} // keys
						} // security
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com