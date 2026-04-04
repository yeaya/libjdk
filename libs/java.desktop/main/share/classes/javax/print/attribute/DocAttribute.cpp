#include <javax/print/attribute/DocAttribute.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;

namespace javax {
	namespace print {
		namespace attribute {

$Class* DocAttribute::load$($String* name, bool initialize) {
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"javax.print.attribute.DocAttribute",
		nullptr,
		"javax.print.attribute.Attribute"
	};
	$loadClass(DocAttribute, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DocAttribute);
	});
	return class$;
}

$Class* DocAttribute::class$ = nullptr;

		} // attribute
	} // print
} // javax