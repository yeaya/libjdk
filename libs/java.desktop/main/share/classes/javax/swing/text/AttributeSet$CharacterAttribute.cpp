#include <javax/swing/text/AttributeSet$CharacterAttribute.h>
#include <javax/swing/text/AttributeSet.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;

namespace javax {
	namespace swing {
		namespace text {

$Class* AttributeSet$CharacterAttribute::load$($String* name, bool initialize) {
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.text.AttributeSet$CharacterAttribute", "javax.swing.text.AttributeSet", "CharacterAttribute", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"javax.swing.text.AttributeSet$CharacterAttribute",
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
	$loadClass(AttributeSet$CharacterAttribute, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AttributeSet$CharacterAttribute);
	});
	return class$;
}

$Class* AttributeSet$CharacterAttribute::class$ = nullptr;

		} // text
	} // swing
} // javax