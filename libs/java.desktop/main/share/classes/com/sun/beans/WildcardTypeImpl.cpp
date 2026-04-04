#include <com/sun/beans/WildcardTypeImpl.h>
#include <java/lang/reflect/Type.h>
#include <java/lang/reflect/WildcardType.h>
#include <java/util/Arrays.h>
#include <jcpp.h>

using $TypeArray = $Array<::java::lang::reflect::Type>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $WildcardType = ::java::lang::reflect::WildcardType;
using $Arrays = ::java::util::Arrays;

namespace com {
	namespace sun {
		namespace beans {

void WildcardTypeImpl::init$($TypeArray* upperBounds, $TypeArray* lowerBounds) {
	$set(this, upperBounds, upperBounds);
	$set(this, lowerBounds, lowerBounds);
}

$TypeArray* WildcardTypeImpl::getUpperBounds() {
	return $cast($TypeArray, $nc(this->upperBounds)->clone());
}

$TypeArray* WildcardTypeImpl::getLowerBounds() {
	return $cast($TypeArray, $nc(this->lowerBounds)->clone());
}

bool WildcardTypeImpl::equals(Object$* object) {
	$useLocalObjectStack();
	if ($instanceOf($WildcardType, object)) {
		$var($WildcardType, type, $cast($WildcardType, object));
		bool var$0 = $Arrays::equals(this->upperBounds, $(type->getUpperBounds()));
		return var$0 && $Arrays::equals(this->lowerBounds, $(type->getLowerBounds()));
	}
	return false;
}

int32_t WildcardTypeImpl::hashCode() {
	int32_t var$0 = $Arrays::hashCode(this->upperBounds);
	return var$0 ^ $Arrays::hashCode(this->lowerBounds);
}

$String* WildcardTypeImpl::toString() {
	$useLocalObjectStack();
	$var($StringBuilder, sb, nullptr);
	$var($TypeArray, bounds, nullptr);
	if ($nc(this->lowerBounds)->length == 0) {
		if ($nc(this->upperBounds)->length == 0 || $equals($Object::class$, this->upperBounds->get(0))) {
			return "?"_s;
		}
		$assign(bounds, this->upperBounds);
		$assign(sb, $new($StringBuilder, "? extends "_s));
	} else {
		$assign(bounds, this->lowerBounds);
		$assign(sb, $new($StringBuilder, "? super "_s));
	}
	for (int32_t i = 0; i < $nc(bounds)->length; ++i) {
		if (i > 0) {
			$nc(sb)->append(" & "_s);
		}
		$nc(sb)->append(($instanceOf($Class, bounds->get(i))) ? $($nc($cast($Class, bounds->get(i)))->getName()) : $($nc(bounds->get(i))->toString()));
	}
	return $nc(sb)->toString();
}

WildcardTypeImpl::WildcardTypeImpl() {
}

$Class* WildcardTypeImpl::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"upperBounds", "[Ljava/lang/reflect/Type;", nullptr, $PRIVATE | $FINAL, $field(WildcardTypeImpl, upperBounds)},
		{"lowerBounds", "[Ljava/lang/reflect/Type;", nullptr, $PRIVATE | $FINAL, $field(WildcardTypeImpl, lowerBounds)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "([Ljava/lang/reflect/Type;[Ljava/lang/reflect/Type;)V", nullptr, 0, $method(WildcardTypeImpl, init$, void, $TypeArray*, $TypeArray*)},
		{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(WildcardTypeImpl, equals, bool, Object$*)},
		{"getLowerBounds", "()[Ljava/lang/reflect/Type;", nullptr, $PUBLIC, $virtualMethod(WildcardTypeImpl, getLowerBounds, $TypeArray*)},
		{"getUpperBounds", "()[Ljava/lang/reflect/Type;", nullptr, $PUBLIC, $virtualMethod(WildcardTypeImpl, getUpperBounds, $TypeArray*)},
		{"hashCode", "()I", nullptr, $PUBLIC, $virtualMethod(WildcardTypeImpl, hashCode, int32_t)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(WildcardTypeImpl, toString, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"com.sun.beans.WildcardTypeImpl",
		"java.lang.Object",
		"java.lang.reflect.WildcardType",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(WildcardTypeImpl, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(WildcardTypeImpl);
	});
	return class$;
}

$Class* WildcardTypeImpl::class$ = nullptr;

		} // beans
	} // sun
} // com