#include <javax/print/attribute/PrintRequestAttribute.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;

namespace javax {
	namespace print {
		namespace attribute {

$Class* PrintRequestAttribute::load$($String* name, bool initialize) {
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"javax.print.attribute.PrintRequestAttribute",
		nullptr,
		"javax.print.attribute.Attribute"
	};
	$loadClass(PrintRequestAttribute, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(PrintRequestAttribute);
	});
	return class$;
}

$Class* PrintRequestAttribute::class$ = nullptr;

		} // attribute
	} // print
} // javax