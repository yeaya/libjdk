#include <com/sun/org/apache/xml/internal/security/keys/keyresolver/KeyResolver$ResolverIterator.h>

#include <com/sun/org/apache/xml/internal/security/keys/keyresolver/KeyResolver.h>
#include <com/sun/org/apache/xml/internal/security/keys/keyresolver/KeyResolverSpi.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <jcpp.h>

using $KeyResolverSpi = ::com::sun::org::apache::xml::internal::security::keys::keyresolver::KeyResolverSpi;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
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
								namespace keyresolver {

$FieldInfo _KeyResolver$ResolverIterator_FieldInfo_[] = {
	{"res", "Ljava/util/List;", "Ljava/util/List<Lcom/sun/org/apache/xml/internal/security/keys/keyresolver/KeyResolverSpi;>;", $PRIVATE, $field(KeyResolver$ResolverIterator, res)},
	{"it", "Ljava/util/Iterator;", "Ljava/util/Iterator<Lcom/sun/org/apache/xml/internal/security/keys/keyresolver/KeyResolverSpi;>;", $PRIVATE, $field(KeyResolver$ResolverIterator, it)},
	{}
};

$MethodInfo _KeyResolver$ResolverIterator_MethodInfo_[] = {
	{"<init>", "(Ljava/util/List;)V", "(Ljava/util/List<Lcom/sun/org/apache/xml/internal/security/keys/keyresolver/KeyResolverSpi;>;)V", $PUBLIC, $method(KeyResolver$ResolverIterator, init$, void, $List*)},
	{"hasNext", "()Z", nullptr, $PUBLIC, $virtualMethod(KeyResolver$ResolverIterator, hasNext, bool)},
	{"next", "()Lcom/sun/org/apache/xml/internal/security/keys/keyresolver/KeyResolverSpi;", nullptr, $PUBLIC, $virtualMethod(KeyResolver$ResolverIterator, next, $Object*)},
	{"remove", "()V", nullptr, $PUBLIC, $virtualMethod(KeyResolver$ResolverIterator, remove, void)},
	{}
};

$InnerClassInfo _KeyResolver$ResolverIterator_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xml.internal.security.keys.keyresolver.KeyResolver$ResolverIterator", "com.sun.org.apache.xml.internal.security.keys.keyresolver.KeyResolver", "ResolverIterator", $STATIC},
	{}
};

$ClassInfo _KeyResolver$ResolverIterator_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.org.apache.xml.internal.security.keys.keyresolver.KeyResolver$ResolverIterator",
	"java.lang.Object",
	"java.util.Iterator",
	_KeyResolver$ResolverIterator_FieldInfo_,
	_KeyResolver$ResolverIterator_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/Iterator<Lcom/sun/org/apache/xml/internal/security/keys/keyresolver/KeyResolverSpi;>;",
	nullptr,
	_KeyResolver$ResolverIterator_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.org.apache.xml.internal.security.keys.keyresolver.KeyResolver"
};

$Object* allocate$KeyResolver$ResolverIterator($Class* clazz) {
	return $of($alloc(KeyResolver$ResolverIterator));
}

void KeyResolver$ResolverIterator::init$($List* list) {
	$set(this, res, list);
	$set(this, it, $nc(this->res)->iterator());
}

bool KeyResolver$ResolverIterator::hasNext() {
	return $nc(this->it)->hasNext();
}

$Object* KeyResolver$ResolverIterator::next() {
	$var($KeyResolverSpi, resolver, $cast($KeyResolverSpi, $nc(this->it)->next()));
	if (resolver == nullptr) {
		$throwNew($RuntimeException, "utils.resolver.noClass"_s);
	}
	return $of(resolver);
}

void KeyResolver$ResolverIterator::remove() {
	$throwNew($UnsupportedOperationException, "Can\'t remove resolvers using the iterator"_s);
}

KeyResolver$ResolverIterator::KeyResolver$ResolverIterator() {
}

$Class* KeyResolver$ResolverIterator::load$($String* name, bool initialize) {
	$loadClass(KeyResolver$ResolverIterator, name, initialize, &_KeyResolver$ResolverIterator_ClassInfo_, allocate$KeyResolver$ResolverIterator);
	return class$;
}

$Class* KeyResolver$ResolverIterator::class$ = nullptr;

								} // keyresolver
							} // keys
						} // security
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com