#include <com/sun/tools/javac/util/Position$LineMap.h>
#include <com/sun/tools/javac/util/Position.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace util {

$Class* Position$LineMap::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getColumnNumber", "(I)I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Position$LineMap, getColumnNumber, int32_t, int32_t)},
		{"getLineNumber", "(I)I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Position$LineMap, getLineNumber, int32_t, int32_t)},
		{"getPosition", "(II)I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Position$LineMap, getPosition, int32_t, int32_t, int32_t)},
		{"getStartPosition", "(I)I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Position$LineMap, getStartPosition, int32_t, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.util.Position$LineMap", "com.sun.tools.javac.util.Position", "LineMap", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"com.sun.tools.javac.util.Position$LineMap",
		nullptr,
		"com.sun.source.tree.LineMap",
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.tools.javac.util.Position"
	};
	$loadClass(Position$LineMap, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Position$LineMap);
	});
	return class$;
}

$Class* Position$LineMap::class$ = nullptr;

				} // util
			} // javac
		} // tools
	} // sun
} // com