#include <javax/swing/text/TabableView.h>
#include <javax/swing/text/TabExpander.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $TabExpander = ::javax::swing::text::TabExpander;

namespace javax {
	namespace swing {
		namespace text {

$Class* TabableView::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getPartialSpan", "(II)F", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TabableView, getPartialSpan, float, int32_t, int32_t)},
		{"getTabbedSpan", "(FLjavax/swing/text/TabExpander;)F", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TabableView, getTabbedSpan, float, float, $TabExpander*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"javax.swing.text.TabableView",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(TabableView, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TabableView);
	});
	return class$;
}

$Class* TabableView::class$ = nullptr;

		} // text
	} // swing
} // javax