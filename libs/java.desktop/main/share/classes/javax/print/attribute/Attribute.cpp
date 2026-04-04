#include <javax/print/attribute/Attribute.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace print {
		namespace attribute {

$Class* Attribute::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getCategory", "()Ljava/lang/Class;", "()Ljava/lang/Class<+Ljavax/print/attribute/Attribute;>;", $PUBLIC | $ABSTRACT, $virtualMethod(Attribute, getCategory, $Class*)},
		{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Attribute, getName, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"javax.print.attribute.Attribute",
		nullptr,
		"java.io.Serializable",
		nullptr,
		methodInfos$$
	};
	$loadClass(Attribute, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Attribute);
	});
	return class$;
}

$Class* Attribute::class$ = nullptr;

		} // attribute
	} // print
} // javax