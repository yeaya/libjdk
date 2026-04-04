#include <com/sun/org/apache/xerces/internal/impl/xs/XMLSchemaValidator$LocalIDKey.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/XMLSchemaValidator.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/identity/IdentityConstraint.h>
#include <jcpp.h>

using $IdentityConstraint = ::com::sun::org::apache::xerces::internal::impl::xs::identity::IdentityConstraint;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace xs {

void XMLSchemaValidator$LocalIDKey::init$() {
}

void XMLSchemaValidator$LocalIDKey::init$($IdentityConstraint* id, int32_t depth) {
	$set(this, fId, id);
	this->fDepth = depth;
}

int32_t XMLSchemaValidator$LocalIDKey::hashCode() {
	return $nc(this->fId)->hashCode() + this->fDepth;
}

bool XMLSchemaValidator$LocalIDKey::equals(Object$* localIDKey) {
	if ($instanceOf(XMLSchemaValidator$LocalIDKey, localIDKey)) {
		$var(XMLSchemaValidator$LocalIDKey, lIDKey, $cast(XMLSchemaValidator$LocalIDKey, localIDKey));
		return (lIDKey->fId == this->fId && lIDKey->fDepth == this->fDepth);
	}
	return false;
}

XMLSchemaValidator$LocalIDKey::XMLSchemaValidator$LocalIDKey() {
}

$Class* XMLSchemaValidator$LocalIDKey::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"fId", "Lcom/sun/org/apache/xerces/internal/impl/xs/identity/IdentityConstraint;", nullptr, $PUBLIC, $field(XMLSchemaValidator$LocalIDKey, fId)},
		{"fDepth", "I", nullptr, $PUBLIC, $field(XMLSchemaValidator$LocalIDKey, fDepth)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(XMLSchemaValidator$LocalIDKey, init$, void)},
		{"<init>", "(Lcom/sun/org/apache/xerces/internal/impl/xs/identity/IdentityConstraint;I)V", nullptr, $PUBLIC, $method(XMLSchemaValidator$LocalIDKey, init$, void, $IdentityConstraint*, int32_t)},
		{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(XMLSchemaValidator$LocalIDKey, equals, bool, Object$*)},
		{"hashCode", "()I", nullptr, $PUBLIC, $virtualMethod(XMLSchemaValidator$LocalIDKey, hashCode, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.org.apache.xerces.internal.impl.xs.XMLSchemaValidator$LocalIDKey", "com.sun.org.apache.xerces.internal.impl.xs.XMLSchemaValidator", "LocalIDKey", $PROTECTED | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"com.sun.org.apache.xerces.internal.impl.xs.XMLSchemaValidator$LocalIDKey",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.org.apache.xerces.internal.impl.xs.XMLSchemaValidator"
	};
	$loadClass(XMLSchemaValidator$LocalIDKey, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(XMLSchemaValidator$LocalIDKey);
	});
	return class$;
}

$Class* XMLSchemaValidator$LocalIDKey::class$ = nullptr;

							} // xs
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com