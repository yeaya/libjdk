#include <com/sun/org/apache/xml/internal/security/keys/storage/implementations/KeyStoreResolver$KeyStoreIterator.h>
#include <com/sun/org/apache/xml/internal/security/keys/storage/implementations/KeyStoreResolver.h>
#include <com/sun/org/slf4j/internal/Logger.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/security/KeyStore.h>
#include <java/security/KeyStoreException.h>
#include <java/security/cert/Certificate.h>
#include <java/util/ArrayList.h>
#include <java/util/Collections.h>
#include <java/util/Enumeration.h>
#include <java/util/List.h>
#include <java/util/NoSuchElementException.h>
#include <jcpp.h>

#undef LOG

using $KeyStoreResolver = ::com::sun::org::apache::xml::internal::security::keys::storage::implementations::KeyStoreResolver;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $KeyStore = ::java::security::KeyStore;
using $KeyStoreException = ::java::security::KeyStoreException;
using $Certificate = ::java::security::cert::Certificate;
using $ArrayList = ::java::util::ArrayList;
using $Collections = ::java::util::Collections;
using $Enumeration = ::java::util::Enumeration;
using $List = ::java::util::List;
using $NoSuchElementException = ::java::util::NoSuchElementException;

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

void KeyStoreResolver$KeyStoreIterator::init$($KeyStore* keyStore) {
	$useLocalObjectStack();
	$var($List, tmpCerts, $new($ArrayList));
	try {
		$var($Enumeration, aliases, $nc(keyStore)->aliases());
		while ($nc(aliases)->hasMoreElements()) {
			$var($String, alias, $cast($String, aliases->nextElement()));
			$var($Certificate, cert, keyStore->getCertificate(alias));
			if (cert != nullptr) {
				tmpCerts->add(cert);
			}
		}
	} catch ($KeyStoreException& ex) {
		$init($KeyStoreResolver);
		$nc($KeyStoreResolver::LOG)->debug("Error reading certificates: {}"_s, $$new($ObjectArray, {$(ex->getMessage())}));
	}
	$set(this, certs, $Collections::unmodifiableList(tmpCerts));
	this->i = 0;
}

bool KeyStoreResolver$KeyStoreIterator::hasNext() {
	return this->i < $nc(this->certs)->size();
}

$Object* KeyStoreResolver$KeyStoreIterator::next() {
	if (hasNext()) {
		return $cast($Certificate, $nc(this->certs)->get(this->i++));
	}
	$throwNew($NoSuchElementException);
}

void KeyStoreResolver$KeyStoreIterator::remove() {
	$throwNew($UnsupportedOperationException, "Can\'t remove keys from KeyStore"_s);
}

KeyStoreResolver$KeyStoreIterator::KeyStoreResolver$KeyStoreIterator() {
}

$Class* KeyStoreResolver$KeyStoreIterator::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"certs", "Ljava/util/List;", "Ljava/util/List<Ljava/security/cert/Certificate;>;", $PRIVATE | $FINAL, $field(KeyStoreResolver$KeyStoreIterator, certs)},
		{"i", "I", nullptr, $PRIVATE, $field(KeyStoreResolver$KeyStoreIterator, i)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/security/KeyStore;)V", nullptr, $PUBLIC, $method(KeyStoreResolver$KeyStoreIterator, init$, void, $KeyStore*)},
		{"hasNext", "()Z", nullptr, $PUBLIC, $virtualMethod(KeyStoreResolver$KeyStoreIterator, hasNext, bool)},
		{"next", "()Ljava/security/cert/Certificate;", nullptr, $PUBLIC, $virtualMethod(KeyStoreResolver$KeyStoreIterator, next, $Object*)},
		{"remove", "()V", nullptr, $PUBLIC, $virtualMethod(KeyStoreResolver$KeyStoreIterator, remove, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.org.apache.xml.internal.security.keys.storage.implementations.KeyStoreResolver$KeyStoreIterator", "com.sun.org.apache.xml.internal.security.keys.storage.implementations.KeyStoreResolver", "KeyStoreIterator", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.org.apache.xml.internal.security.keys.storage.implementations.KeyStoreResolver$KeyStoreIterator",
		"java.lang.Object",
		"java.util.Iterator",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/util/Iterator<Ljava/security/cert/Certificate;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.org.apache.xml.internal.security.keys.storage.implementations.KeyStoreResolver"
	};
	$loadClass(KeyStoreResolver$KeyStoreIterator, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(KeyStoreResolver$KeyStoreIterator);
	});
	return class$;
}

$Class* KeyStoreResolver$KeyStoreIterator::class$ = nullptr;

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