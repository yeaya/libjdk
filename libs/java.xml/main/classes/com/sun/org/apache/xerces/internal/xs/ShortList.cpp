#include <com/sun/org/apache/xerces/internal/xs/ShortList.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace xs {

$Class* ShortList::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"contains", "(S)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ShortList, contains, bool, int16_t)},
		{"getLength", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ShortList, getLength, int32_t)},
		{"item", "(I)S", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ShortList, item, int16_t, int32_t), "com.sun.org.apache.xerces.internal.xs.XSException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"com.sun.org.apache.xerces.internal.xs.ShortList",
		nullptr,
		"java.util.List",
		nullptr,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/util/List<Ljava/lang/Short;>;"
	};
	$loadClass(ShortList, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ShortList);
	});
	return class$;
}

$Class* ShortList::class$ = nullptr;

						} // xs
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com