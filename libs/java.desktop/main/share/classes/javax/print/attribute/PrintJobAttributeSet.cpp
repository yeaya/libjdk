#include <javax/print/attribute/PrintJobAttributeSet.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace print {
		namespace attribute {

$Class* PrintJobAttributeSet::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"add", "(Ljavax/print/attribute/Attribute;)Z", nullptr, $PUBLIC | $ABSTRACT},
		{"addAll", "(Ljavax/print/attribute/AttributeSet;)Z", nullptr, $PUBLIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"javax.print.attribute.PrintJobAttributeSet",
		nullptr,
		"javax.print.attribute.AttributeSet",
		nullptr,
		methodInfos$$
	};
	$loadClass(PrintJobAttributeSet, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(PrintJobAttributeSet);
	});
	return class$;
}

$Class* PrintJobAttributeSet::class$ = nullptr;

		} // attribute
	} // print
} // javax