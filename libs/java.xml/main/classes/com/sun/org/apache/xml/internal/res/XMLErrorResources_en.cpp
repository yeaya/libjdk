#include <com/sun/org/apache/xml/internal/res/XMLErrorResources_en.h>
#include <com/sun/org/apache/xml/internal/res/XMLErrorResources.h>
#include <jcpp.h>

using $XMLErrorResources = ::com::sun::org::apache::xml::internal::res::XMLErrorResources;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace res {

void XMLErrorResources_en::init$() {
	$XMLErrorResources::init$();
}

XMLErrorResources_en::XMLErrorResources_en() {
}

$Class* XMLErrorResources_en::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(XMLErrorResources_en, init$, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.org.apache.xml.internal.res.XMLErrorResources_en",
		"com.sun.org.apache.xml.internal.res.XMLErrorResources",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(XMLErrorResources_en, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(XMLErrorResources_en);
	});
	return class$;
}

$Class* XMLErrorResources_en::class$ = nullptr;

						} // res
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com