#include <javax/print/attribute/PrintRequestAttributeSet.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace print {
		namespace attribute {

$Class* PrintRequestAttributeSet::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"add", "(Ljavax/print/attribute/Attribute;)Z", nullptr, $PUBLIC | $ABSTRACT},
		{"addAll", "(Ljavax/print/attribute/AttributeSet;)Z", nullptr, $PUBLIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"javax.print.attribute.PrintRequestAttributeSet",
		nullptr,
		"javax.print.attribute.AttributeSet",
		nullptr,
		methodInfos$$
	};
	$loadClass(PrintRequestAttributeSet, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(PrintRequestAttributeSet);
	});
	return class$;
}

$Class* PrintRequestAttributeSet::class$ = nullptr;

		} // attribute
	} // print
} // javax