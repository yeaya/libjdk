#include <com/sun/org/apache/xerces/internal/impl/xs/identity/UniqueOrKey.h>

#include <com/sun/org/apache/xerces/internal/impl/xs/identity/IdentityConstraint.h>
#include <jcpp.h>

using $IdentityConstraint = ::com::sun::org::apache::xerces::internal::impl::xs::identity::IdentityConstraint;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace xs {
								namespace identity {

$MethodInfo _UniqueOrKey_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;S)V", nullptr, $PUBLIC, $method(UniqueOrKey, init$, void, $String*, $String*, $String*, int16_t)},
	{}
};

$ClassInfo _UniqueOrKey_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.impl.xs.identity.UniqueOrKey",
	"com.sun.org.apache.xerces.internal.impl.xs.identity.IdentityConstraint",
	nullptr,
	nullptr,
	_UniqueOrKey_MethodInfo_
};

$Object* allocate$UniqueOrKey($Class* clazz) {
	return $of($alloc(UniqueOrKey));
}

void UniqueOrKey::init$($String* namespace$, $String* identityConstraintName, $String* elemName, int16_t type) {
	$IdentityConstraint::init$(namespace$, identityConstraintName, elemName);
	this->type = type;
}

UniqueOrKey::UniqueOrKey() {
}

$Class* UniqueOrKey::load$($String* name, bool initialize) {
	$loadClass(UniqueOrKey, name, initialize, &_UniqueOrKey_ClassInfo_, allocate$UniqueOrKey);
	return class$;
}

$Class* UniqueOrKey::class$ = nullptr;

								} // identity
							} // xs
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com