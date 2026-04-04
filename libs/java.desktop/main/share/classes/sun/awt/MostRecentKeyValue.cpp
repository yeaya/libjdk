#include <sun/awt/MostRecentKeyValue.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace awt {

void MostRecentKeyValue::init$(Object$* k, Object$* v) {
	$set(this, key, k);
	$set(this, value, v);
}

void MostRecentKeyValue::setPair(Object$* k, Object$* v) {
	$set(this, key, k);
	$set(this, value, v);
}

MostRecentKeyValue::MostRecentKeyValue() {
}

$Class* MostRecentKeyValue::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"key", "Ljava/lang/Object;", nullptr, 0, $field(MostRecentKeyValue, key)},
		{"value", "Ljava/lang/Object;", nullptr, 0, $field(MostRecentKeyValue, value)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, 0, $method(MostRecentKeyValue, init$, void, Object$*, Object$*)},
		{"setPair", "(Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, 0, $method(MostRecentKeyValue, setPair, void, Object$*, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"sun.awt.MostRecentKeyValue",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(MostRecentKeyValue, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MostRecentKeyValue);
	});
	return class$;
}

$Class* MostRecentKeyValue::class$ = nullptr;

	} // awt
} // sun