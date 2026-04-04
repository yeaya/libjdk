#include <javax/naming/Referenceable.h>
#include <javax/naming/Reference.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Reference = ::javax::naming::Reference;

namespace javax {
	namespace naming {

$Class* Referenceable::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getReference", "()Ljavax/naming/Reference;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Referenceable, getReference, $Reference*), "javax.naming.NamingException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"javax.naming.Referenceable",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(Referenceable, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Referenceable);
	});
	return class$;
}

$Class* Referenceable::class$ = nullptr;

	} // naming
} // javax