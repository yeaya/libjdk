#include <com/sun/source/tree/LineMap.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace source {
			namespace tree {

$Class* LineMap::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getColumnNumber", "(J)J", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(LineMap, getColumnNumber, int64_t, int64_t)},
		{"getLineNumber", "(J)J", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(LineMap, getLineNumber, int64_t, int64_t)},
		{"getPosition", "(JJ)J", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(LineMap, getPosition, int64_t, int64_t, int64_t)},
		{"getStartPosition", "(J)J", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(LineMap, getStartPosition, int64_t, int64_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"com.sun.source.tree.LineMap",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(LineMap, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(LineMap);
	});
	return class$;
}

$Class* LineMap::class$ = nullptr;

			} // tree
		} // source
	} // sun
} // com