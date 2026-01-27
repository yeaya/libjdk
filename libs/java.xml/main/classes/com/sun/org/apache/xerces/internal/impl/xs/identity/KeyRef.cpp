#include <com/sun/org/apache/xerces/internal/impl/xs/identity/KeyRef.h>

#include <com/sun/org/apache/xerces/internal/impl/xs/identity/IdentityConstraint.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/identity/UniqueOrKey.h>
#include <com/sun/org/apache/xerces/internal/xs/XSIDCDefinition.h>
#include <jcpp.h>

#undef IC_KEYREF

using $IdentityConstraint = ::com::sun::org::apache::xerces::internal::impl::xs::identity::IdentityConstraint;
using $UniqueOrKey = ::com::sun::org::apache::xerces::internal::impl::xs::identity::UniqueOrKey;
using $XSIDCDefinition = ::com::sun::org::apache::xerces::internal::xs::XSIDCDefinition;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
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

$FieldInfo _KeyRef_FieldInfo_[] = {
	{"fKey", "Lcom/sun/org/apache/xerces/internal/impl/xs/identity/UniqueOrKey;", nullptr, $PROTECTED, $field(KeyRef, fKey)},
	{}
};

$MethodInfo _KeyRef_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/impl/xs/identity/UniqueOrKey;)V", nullptr, $PUBLIC, $method(KeyRef, init$, void, $String*, $String*, $String*, $UniqueOrKey*)},
	{"getKey", "()Lcom/sun/org/apache/xerces/internal/impl/xs/identity/UniqueOrKey;", nullptr, $PUBLIC, $virtualMethod(KeyRef, getKey, $UniqueOrKey*)},
	{"getRefKey", "()Lcom/sun/org/apache/xerces/internal/xs/XSIDCDefinition;", nullptr, $PUBLIC, $virtualMethod(KeyRef, getRefKey, $XSIDCDefinition*)},
	{}
};

$ClassInfo _KeyRef_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.impl.xs.identity.KeyRef",
	"com.sun.org.apache.xerces.internal.impl.xs.identity.IdentityConstraint",
	nullptr,
	_KeyRef_FieldInfo_,
	_KeyRef_MethodInfo_
};

$Object* allocate$KeyRef($Class* clazz) {
	return $of($alloc(KeyRef));
}

void KeyRef::init$($String* namespace$, $String* identityConstraintName, $String* elemName, $UniqueOrKey* key) {
	$IdentityConstraint::init$(namespace$, identityConstraintName, elemName);
	$set(this, fKey, key);
	this->type = $XSIDCDefinition::IC_KEYREF;
}

$UniqueOrKey* KeyRef::getKey() {
	return this->fKey;
}

$XSIDCDefinition* KeyRef::getRefKey() {
	return this->fKey;
}

KeyRef::KeyRef() {
}

$Class* KeyRef::load$($String* name, bool initialize) {
	$loadClass(KeyRef, name, initialize, &_KeyRef_ClassInfo_, allocate$KeyRef);
	return class$;
}

$Class* KeyRef::class$ = nullptr;

								} // identity
							} // xs
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com