#include <javax/swing/plaf/UIResource.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;

namespace javax {
	namespace swing {
		namespace plaf {

$Class* UIResource::load$($String* name, bool initialize) {
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"javax.swing.plaf.UIResource"
	};
	$loadClass(UIResource, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(UIResource);
	});
	return class$;
}

$Class* UIResource::class$ = nullptr;

		} // plaf
	} // swing
} // javax