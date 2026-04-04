#include <com/sun/org/apache/xerces/internal/impl/dtd/XMLContentSpec$Provider.h>
#include <com/sun/org/apache/xerces/internal/impl/dtd/XMLContentSpec.h>
#include <jcpp.h>

using $XMLContentSpec = ::com::sun::org::apache::xerces::internal::impl::dtd::XMLContentSpec;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace dtd {

$Class* XMLContentSpec$Provider::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getContentSpec", "(ILcom/sun/org/apache/xerces/internal/impl/dtd/XMLContentSpec;)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLContentSpec$Provider, getContentSpec, bool, int32_t, $XMLContentSpec*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.org.apache.xerces.internal.impl.dtd.XMLContentSpec$Provider", "com.sun.org.apache.xerces.internal.impl.dtd.XMLContentSpec", "Provider", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"com.sun.org.apache.xerces.internal.impl.dtd.XMLContentSpec$Provider",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.org.apache.xerces.internal.impl.dtd.XMLContentSpec"
	};
	$loadClass(XMLContentSpec$Provider, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(XMLContentSpec$Provider);
	});
	return class$;
}

$Class* XMLContentSpec$Provider::class$ = nullptr;

							} // dtd
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com