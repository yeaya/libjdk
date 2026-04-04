#include <javax/print/attribute/PrintJobAttribute.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;

namespace javax {
	namespace print {
		namespace attribute {

$Class* PrintJobAttribute::load$($String* name, bool initialize) {
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"javax.print.attribute.PrintJobAttribute",
		nullptr,
		"javax.print.attribute.Attribute"
	};
	$loadClass(PrintJobAttribute, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(PrintJobAttribute);
	});
	return class$;
}

$Class* PrintJobAttribute::class$ = nullptr;

		} // attribute
	} // print
} // javax