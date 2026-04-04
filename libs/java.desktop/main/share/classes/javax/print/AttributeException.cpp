#include <javax/print/AttributeException.h>
#include <javax/print/attribute/Attribute.h>
#include <jcpp.h>

using $AttributeArray = $Array<::javax::print::attribute::Attribute>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace print {

$Class* AttributeException::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getUnsupportedAttributes", "()[Ljava/lang/Class;", "()[Ljava/lang/Class<*>;", $PUBLIC | $ABSTRACT, $virtualMethod(AttributeException, getUnsupportedAttributes, $ClassArray*)},
		{"getUnsupportedValues", "()[Ljavax/print/attribute/Attribute;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AttributeException, getUnsupportedValues, $AttributeArray*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"javax.print.AttributeException",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(AttributeException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AttributeException);
	});
	return class$;
}

$Class* AttributeException::class$ = nullptr;

	} // print
} // javax