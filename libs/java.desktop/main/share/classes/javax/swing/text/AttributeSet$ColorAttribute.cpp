#include <javax/swing/text/AttributeSet$ColorAttribute.h>
#include <javax/swing/text/AttributeSet.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;

namespace javax {
	namespace swing {
		namespace text {

$Class* AttributeSet$ColorAttribute::load$($String* name, bool initialize) {
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.text.AttributeSet$ColorAttribute", "javax.swing.text.AttributeSet", "ColorAttribute", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"javax.swing.text.AttributeSet$ColorAttribute",
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
	$loadClass(AttributeSet$ColorAttribute, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AttributeSet$ColorAttribute);
	});
	return class$;
}

$Class* AttributeSet$ColorAttribute::class$ = nullptr;

		} // text
	} // swing
} // javax