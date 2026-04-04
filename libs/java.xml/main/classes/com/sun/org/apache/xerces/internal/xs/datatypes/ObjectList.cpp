#include <com/sun/org/apache/xerces/internal/xs/datatypes/ObjectList.h>
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
							namespace datatypes {

$Class* ObjectList::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"contains", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $ABSTRACT},
		{"getLength", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ObjectList, getLength, int32_t)},
		{"item", "(I)Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ObjectList, item, $Object*, int32_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"com.sun.org.apache.xerces.internal.xs.datatypes.ObjectList",
		nullptr,
		"java.util.List",
		nullptr,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/util/List<Ljava/lang/Object;>;"
	};
	$loadClass(ObjectList, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ObjectList);
	});
	return class$;
}

$Class* ObjectList::class$ = nullptr;

							} // datatypes
						} // xs
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com