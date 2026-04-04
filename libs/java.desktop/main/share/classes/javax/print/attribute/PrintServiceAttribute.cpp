#include <javax/print/attribute/PrintServiceAttribute.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;

namespace javax {
	namespace print {
		namespace attribute {

$Class* PrintServiceAttribute::load$($String* name, bool initialize) {
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"javax.print.attribute.PrintServiceAttribute",
		nullptr,
		"javax.print.attribute.Attribute"
	};
	$loadClass(PrintServiceAttribute, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(PrintServiceAttribute);
	});
	return class$;
}

$Class* PrintServiceAttribute::class$ = nullptr;

		} // attribute
	} // print
} // javax