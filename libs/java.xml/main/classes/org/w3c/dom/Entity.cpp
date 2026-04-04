#include <org/w3c/dom/Entity.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace org {
	namespace w3c {
		namespace dom {

$Class* Entity::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getInputEncoding", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Entity, getInputEncoding, $String*)},
		{"getNotationName", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Entity, getNotationName, $String*)},
		{"getPublicId", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Entity, getPublicId, $String*)},
		{"getSystemId", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Entity, getSystemId, $String*)},
		{"getXmlEncoding", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Entity, getXmlEncoding, $String*)},
		{"getXmlVersion", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Entity, getXmlVersion, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"org.w3c.dom.Entity",
		nullptr,
		"org.w3c.dom.Node",
		nullptr,
		methodInfos$$
	};
	$loadClass(Entity, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Entity);
	});
	return class$;
}

$Class* Entity::class$ = nullptr;

		} // dom
	} // w3c
} // org