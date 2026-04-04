#include <javax/swing/text/TabExpander.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace swing {
		namespace text {

$Class* TabExpander::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"nextTabStop", "(FI)F", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TabExpander, nextTabStop, float, float, int32_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"javax.swing.text.TabExpander",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(TabExpander, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TabExpander);
	});
	return class$;
}

$Class* TabExpander::class$ = nullptr;

		} // text
	} // swing
} // javax