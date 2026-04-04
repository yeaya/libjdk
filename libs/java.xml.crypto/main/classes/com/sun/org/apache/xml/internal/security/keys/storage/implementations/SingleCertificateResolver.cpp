#include <com/sun/org/apache/xml/internal/security/keys/storage/implementations/SingleCertificateResolver.h>
#include <com/sun/org/apache/xml/internal/security/keys/storage/StorageResolverSpi.h>
#include <com/sun/org/apache/xml/internal/security/keys/storage/implementations/SingleCertificateResolver$InternalIterator.h>
#include <java/security/cert/X509Certificate.h>
#include <java/util/Iterator.h>
#include <jcpp.h>

using $StorageResolverSpi = ::com::sun::org::apache::xml::internal::security::keys::storage::StorageResolverSpi;
using $SingleCertificateResolver$InternalIterator = ::com::sun::org::apache::xml::internal::security::keys::storage::implementations::SingleCertificateResolver$InternalIterator;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $X509Certificate = ::java::security::cert::X509Certificate;
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

void SingleCertificateResolver::init$($X509Certificate* x509cert) {
	$StorageResolverSpi::init$();
	$set(this, certificate, x509cert);
}

$Iterator* SingleCertificateResolver::getIterator() {
	return $new($SingleCertificateResolver$InternalIterator, this->certificate);
}

SingleCertificateResolver::SingleCertificateResolver() {
}

$Class* SingleCertificateResolver::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"certificate", "Ljava/security/cert/X509Certificate;", nullptr, $PRIVATE | $FINAL, $field(SingleCertificateResolver, certificate)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/security/cert/X509Certificate;)V", nullptr, $PUBLIC, $method(SingleCertificateResolver, init$, void, $X509Certificate*)},
		{"getIterator", "()Ljava/util/Iterator;", "()Ljava/util/Iterator<Ljava/security/cert/Certificate;>;", $PUBLIC, $virtualMethod(SingleCertificateResolver, getIterator, $Iterator*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.org.apache.xml.internal.security.keys.storage.implementations.SingleCertificateResolver$InternalIterator", "com.sun.org.apache.xml.internal.security.keys.storage.implementations.SingleCertificateResolver", "InternalIterator", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.org.apache.xml.internal.security.keys.storage.implementations.SingleCertificateResolver",
		"com.sun.org.apache.xml.internal.security.keys.storage.StorageResolverSpi",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"com.sun.org.apache.xml.internal.security.keys.storage.implementations.SingleCertificateResolver$InternalIterator"
	};
	$loadClass(SingleCertificateResolver, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SingleCertificateResolver);
	});
	return class$;
}

$Class* SingleCertificateResolver::class$ = nullptr;

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