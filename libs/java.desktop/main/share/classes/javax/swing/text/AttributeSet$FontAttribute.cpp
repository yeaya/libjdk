#include <javax/swing/text/AttributeSet$FontAttribute.h>
#include <javax/swing/text/AttributeSet.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;

namespace javax {
	namespace swing {
		namespace text {

$Class* AttributeSet$FontAttribute::load$($String* name, bool initialize) {
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.text.AttributeSet$FontAttribute", "javax.swing.text.AttributeSet", "FontAttribute", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"javax.swing.text.AttributeSet$FontAttribute",
		nullptr,
		nullptr,
		nullptr,
		nullptr,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.text.AttributeSet"
	};
	$loadClass(AttributeSet$FontAttribute, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AttributeSet$FontAttribute);
	});
	return class$;
}

$Class* AttributeSet$FontAttribute::class$ = nullptr;

		} // text
	} // swing
} // javax