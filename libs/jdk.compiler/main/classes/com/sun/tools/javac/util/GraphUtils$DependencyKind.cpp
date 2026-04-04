#include <com/sun/tools/javac/util/GraphUtils$DependencyKind.h>
#include <com/sun/tools/javac/util/GraphUtils.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace util {

$Class* GraphUtils$DependencyKind::load$($String* name, bool initialize) {
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.util.GraphUtils$DependencyKind", "com.sun.tools.javac.util.GraphUtils", "DependencyKind", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"com.sun.tools.javac.util.GraphUtils$DependencyKind",
		nullptr,
		nullptr,
		nullptr,
		nullptr,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.tools.javac.util.GraphUtils"
	};
	$loadClass(GraphUtils$DependencyKind, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(GraphUtils$DependencyKind);
	});
	return class$;
}

$Class* GraphUtils$DependencyKind::class$ = nullptr;

				} // util
			} // javac
		} // tools
	} // sun
} // com