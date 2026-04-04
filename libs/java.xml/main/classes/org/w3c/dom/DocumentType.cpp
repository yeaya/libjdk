#include <org/w3c/dom/DocumentType.h>
#include <org/w3c/dom/NamedNodeMap.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedNodeMap = ::org::w3c::dom::NamedNodeMap;

namespace org {
	namespace w3c {
		namespace dom {

$Class* DocumentType::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getEntities", "()Lorg/w3c/dom/NamedNodeMap;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DocumentType, getEntities, $NamedNodeMap*)},
		{"getInternalSubset", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DocumentType, getInternalSubset, $String*)},
		{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DocumentType, getName, $String*)},
		{"getNotations", "()Lorg/w3c/dom/NamedNodeMap;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DocumentType, getNotations, $NamedNodeMap*)},
		{"getPublicId", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DocumentType, getPublicId, $String*)},
		{"getSystemId", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DocumentType, getSystemId, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"org.w3c.dom.DocumentType",
		nullptr,
		"org.w3c.dom.Node",
		nullptr,
		methodInfos$$
	};
	$loadClass(DocumentType, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DocumentType);
	});
	return class$;
}

$Class* DocumentType::class$ = nullptr;

		} // dom
	} // w3c
} // org