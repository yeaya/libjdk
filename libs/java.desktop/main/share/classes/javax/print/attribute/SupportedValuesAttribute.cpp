#include <javax/print/attribute/SupportedValuesAttribute.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;

namespace javax {
	namespace print {
		namespace attribute {

$Class* SupportedValuesAttribute::load$($String* name, bool initialize) {
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"javax.print.attribute.SupportedValuesAttribute",
		nullptr,
		"javax.print.attribute.Attribute"
	};
	$loadClass(SupportedValuesAttribute, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SupportedValuesAttribute);
	});
	return class$;
}

$Class* SupportedValuesAttribute::class$ = nullptr;

		} // attribute
	} // print
} // javax