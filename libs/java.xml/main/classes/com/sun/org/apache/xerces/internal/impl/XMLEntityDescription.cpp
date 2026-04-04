#include <com/sun/org/apache/xerces/internal/impl/XMLEntityDescription.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {

$Class* XMLEntityDescription::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getEntityName", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLEntityDescription, getEntityName, $String*)},
		{"setEntityName", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLEntityDescription, setEntityName, void, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"com.sun.org.apache.xerces.internal.impl.XMLEntityDescription",
		nullptr,
		"com.sun.org.apache.xerces.internal.xni.XMLResourceIdentifier",
		nullptr,
		methodInfos$$
	};
	$loadClass(XMLEntityDescription, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(XMLEntityDescription);
	});
	return class$;
}

$Class* XMLEntityDescription::class$ = nullptr;

						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com