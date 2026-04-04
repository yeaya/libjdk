#include <javax/swing/text/AttributeSet$ParagraphAttribute.h>
#include <javax/swing/text/AttributeSet.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;

namespace javax {
	namespace swing {
		namespace text {

$Class* AttributeSet$ParagraphAttribute::load$($String* name, bool initialize) {
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.text.AttributeSet$ParagraphAttribute", "javax.swing.text.AttributeSet", "ParagraphAttribute", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"javax.swing.text.AttributeSet$ParagraphAttribute",
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
	$loadClass(AttributeSet$ParagraphAttribute, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AttributeSet$ParagraphAttribute);
	});
	return class$;
}

$Class* AttributeSet$ParagraphAttribute::class$ = nullptr;

		} // text
	} // swing
} // javax