#include <javax/print/attribute/DocAttributeSet.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace print {
		namespace attribute {

$Class* DocAttributeSet::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"add", "(Ljavax/print/attribute/Attribute;)Z", nullptr, $PUBLIC | $ABSTRACT},
		{"addAll", "(Ljavax/print/attribute/AttributeSet;)Z", nullptr, $PUBLIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"javax.print.attribute.DocAttributeSet",
		nullptr,
		"javax.print.attribute.AttributeSet",
		nullptr,
		methodInfos$$
	};
	$loadClass(DocAttributeSet, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DocAttributeSet);
	});
	return class$;
}

$Class* DocAttributeSet::class$ = nullptr;

		} // attribute
	} // print
} // javax