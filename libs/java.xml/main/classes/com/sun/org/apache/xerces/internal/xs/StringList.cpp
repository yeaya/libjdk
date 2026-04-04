#include <com/sun/org/apache/xerces/internal/xs/StringList.h>
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

$Class* StringList::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"contains", "(Ljava/lang/String;)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(StringList, contains, bool, $String*)},
		{"getLength", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(StringList, getLength, int32_t)},
		{"item", "(I)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(StringList, item, $String*, int32_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"com.sun.org.apache.xerces.internal.xs.StringList",
		nullptr,
		"java.util.List",
		nullptr,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/util/List<Ljava/lang/String;>;"
	};
	$loadClass(StringList, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(StringList);
	});
	return class$;
}

$Class* StringList::class$ = nullptr;

						} // xs
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com