#include <javax/swing/UIClientPropertyKey.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;

namespace javax {
	namespace swing {

$Class* UIClientPropertyKey::load$($String* name, bool initialize) {
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"javax.swing.UIClientPropertyKey"
	};
	$loadClass(UIClientPropertyKey, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(UIClientPropertyKey);
	});
	return class$;
}

$Class* UIClientPropertyKey::class$ = nullptr;

	} // swing
} // javax