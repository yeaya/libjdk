#include <sun/swing/StringUIClientPropertyKey.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace swing {

void StringUIClientPropertyKey::init$($String* key) {
	$set(this, key, key);
}

$String* StringUIClientPropertyKey::toString() {
	return this->key;
}

StringUIClientPropertyKey::StringUIClientPropertyKey() {
}

$Class* StringUIClientPropertyKey::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"key", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(StringUIClientPropertyKey, key)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(StringUIClientPropertyKey, init$, void, $String*)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(StringUIClientPropertyKey, toString, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.swing.StringUIClientPropertyKey",
		"java.lang.Object",
		"javax.swing.UIClientPropertyKey",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(StringUIClientPropertyKey, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(StringUIClientPropertyKey);
	});
	return class$;
}

$Class* StringUIClientPropertyKey::class$ = nullptr;

	} // swing
} // sun