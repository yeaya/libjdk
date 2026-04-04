#include <javax/naming/RefAddr.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace naming {

void RefAddr::init$($String* addrType) {
	$set(this, addrType, addrType);
}

$String* RefAddr::getType() {
	return this->addrType;
}

bool RefAddr::equals(Object$* obj) {
	$useLocalObjectStack();
	if ((obj != nullptr) && ($instanceOf(RefAddr, obj))) {
		$var(RefAddr, target, $cast(RefAddr, obj));
		if ($nc(this->addrType)->compareTo(target->addrType) == 0) {
			$var($Object, thisobj, this->getContent());
			$var($Object, thatobj, target->getContent());
			if ($equals(thisobj, thatobj)) {
				return true;
			}
			if (thisobj != nullptr) {
				return thisobj->equals(thatobj);
			}
		}
	}
	return false;
}

int32_t RefAddr::hashCode() {
	int32_t var$0 = 0;
	if (getContent() == nullptr) {
		var$0 = $nc(this->addrType)->hashCode();
	} else {
		int32_t var$1 = $nc(this->addrType)->hashCode();
		var$0 = var$1 + $$nc(getContent())->hashCode();
	}
	return var$0;
}

$String* RefAddr::toString() {
	$useLocalObjectStack();
	$var($StringBuilder, str, $new($StringBuilder, $$str({"Type: "_s, this->addrType, "\n"_s})));
	str->append($$str({"Content: "_s, $(getContent()), "\n"_s}));
	return (str->toString());
}

RefAddr::RefAddr() {
}

$Class* RefAddr::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"addrType", "Ljava/lang/String;", nullptr, $PROTECTED, $field(RefAddr, addrType)},
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(RefAddr, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PROTECTED, $method(RefAddr, init$, void, $String*)},
		{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(RefAddr, equals, bool, Object$*)},
		{"getContent", "()Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(RefAddr, getContent, $Object*)},
		{"getType", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(RefAddr, getType, $String*)},
		{"hashCode", "()I", nullptr, $PUBLIC, $virtualMethod(RefAddr, hashCode, int32_t)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(RefAddr, toString, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER | $ABSTRACT,
		"javax.naming.RefAddr",
		"java.lang.Object",
		"java.io.Serializable",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(RefAddr, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(RefAddr);
	});
	return class$;
}

$Class* RefAddr::class$ = nullptr;

	} // naming
} // javax