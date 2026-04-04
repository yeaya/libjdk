#include <javax/swing/text/html/CSS$LayoutIterator.h>
#include <javax/swing/text/html/CSS.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace swing {
		namespace text {
			namespace html {

$Class* CSS$LayoutIterator::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"WorstAdjustmentWeight", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(CSS$LayoutIterator, WorstAdjustmentWeight)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"getAdjustmentWeight", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CSS$LayoutIterator, getAdjustmentWeight, int32_t)},
		{"getBorderWidth", "()F", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CSS$LayoutIterator, getBorderWidth, float)},
		{"getCount", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CSS$LayoutIterator, getCount, int32_t)},
		{"getLeadingCollapseSpan", "()F", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CSS$LayoutIterator, getLeadingCollapseSpan, float)},
		{"getMaximumSpan", "(F)F", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CSS$LayoutIterator, getMaximumSpan, float, float)},
		{"getMinimumSpan", "(F)F", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CSS$LayoutIterator, getMinimumSpan, float, float)},
		{"getOffset", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CSS$LayoutIterator, getOffset, int32_t)},
		{"getPreferredSpan", "(F)F", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CSS$LayoutIterator, getPreferredSpan, float, float)},
		{"getSpan", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CSS$LayoutIterator, getSpan, int32_t)},
		{"getTrailingCollapseSpan", "()F", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CSS$LayoutIterator, getTrailingCollapseSpan, float)},
		{"setIndex", "(I)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CSS$LayoutIterator, setIndex, void, int32_t)},
		{"setOffset", "(I)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CSS$LayoutIterator, setOffset, void, int32_t)},
		{"setSpan", "(I)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CSS$LayoutIterator, setSpan, void, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.text.html.CSS$LayoutIterator", "javax.swing.text.html.CSS", "LayoutIterator", $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$INTERFACE | $ABSTRACT,
		"javax.swing.text.html.CSS$LayoutIterator",
		nullptr,
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.text.html.CSS"
	};
	$loadClass(CSS$LayoutIterator, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CSS$LayoutIterator);
	});
	return class$;
}

$Class* CSS$LayoutIterator::class$ = nullptr;

			} // html
		} // text
	} // swing
} // javax