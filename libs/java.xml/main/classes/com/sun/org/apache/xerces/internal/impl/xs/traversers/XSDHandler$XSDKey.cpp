#include <com/sun/org/apache/xerces/internal/impl/xs/traversers/XSDHandler$XSDKey.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/traversers/XSDHandler.h>
#include <jcpp.h>

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
								namespace traversers {

void XSDHandler$XSDKey::init$($String* systemId, int16_t referType, $String* referNS) {
	$set(this, systemId, systemId);
	this->referType = referType;
	$set(this, referNS, referNS);
}

int32_t XSDHandler$XSDKey::hashCode() {
	return this->referNS == nullptr ? 0 : this->referNS->hashCode();
}

bool XSDHandler$XSDKey::equals(Object$* obj) {
	if (!($instanceOf(XSDHandler$XSDKey, obj))) {
		return false;
	}
	$var(XSDHandler$XSDKey, key, $cast(XSDHandler$XSDKey, obj));
	if (this->referNS != $nc(key)->referNS) {
		return false;
	}
	if (this->systemId == nullptr || !this->systemId->equals(key->systemId)) {
		return false;
	}
	return true;
}

XSDHandler$XSDKey::XSDHandler$XSDKey() {
}

$Class* XSDHandler$XSDKey::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"systemId", "Ljava/lang/String;", nullptr, 0, $field(XSDHandler$XSDKey, systemId)},
		{"referType", "S", nullptr, 0, $field(XSDHandler$XSDKey, referType)},
		{"referNS", "Ljava/lang/String;", nullptr, 0, $field(XSDHandler$XSDKey, referNS)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;SLjava/lang/String;)V", nullptr, 0, $method(XSDHandler$XSDKey, init$, void, $String*, int16_t, $String*)},
		{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(XSDHandler$XSDKey, equals, bool, Object$*)},
		{"hashCode", "()I", nullptr, $PUBLIC, $virtualMethod(XSDHandler$XSDKey, hashCode, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.org.apache.xerces.internal.impl.xs.traversers.XSDHandler$XSDKey", "com.sun.org.apache.xerces.internal.impl.xs.traversers.XSDHandler", "XSDKey", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.org.apache.xerces.internal.impl.xs.traversers.XSDHandler$XSDKey",
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
		"com.sun.org.apache.xerces.internal.impl.xs.traversers.XSDHandler"
	};
	$loadClass(XSDHandler$XSDKey, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(XSDHandler$XSDKey);
	});
	return class$;
}

$Class* XSDHandler$XSDKey::class$ = nullptr;

								} // traversers
							} // xs
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com