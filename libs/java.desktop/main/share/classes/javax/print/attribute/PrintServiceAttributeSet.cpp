#include <javax/print/attribute/PrintServiceAttributeSet.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace print {
		namespace attribute {

$Class* PrintServiceAttributeSet::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"add", "(Ljavax/print/attribute/Attribute;)Z", nullptr, $PUBLIC | $ABSTRACT},
		{"addAll", "(Ljavax/print/attribute/AttributeSet;)Z", nullptr, $PUBLIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"javax.print.attribute.PrintServiceAttributeSet",
		nullptr,
		"javax.print.attribute.AttributeSet",
		nullptr,
		methodInfos$$
	};
	$loadClass(PrintServiceAttributeSet, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(PrintServiceAttributeSet);
	});
	return class$;
}

$Class* PrintServiceAttributeSet::class$ = nullptr;

		} // attribute
	} // print
} // javax