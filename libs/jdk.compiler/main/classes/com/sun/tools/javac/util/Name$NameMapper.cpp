#include <com/sun/tools/javac/util/Name$NameMapper.h>
#include <com/sun/tools/javac/util/Name.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace util {

$Class* Name$NameMapper::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"map", "([BII)Ljava/lang/Object;", "([BII)TX;", $PUBLIC | $ABSTRACT, $virtualMethod(Name$NameMapper, map, $Object*, $bytes*, int32_t, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.util.Name$NameMapper", "com.sun.tools.javac.util.Name", "NameMapper", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"com.sun.tools.javac.util.Name$NameMapper",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$,
		"<X:Ljava/lang/Object;>Ljava/lang/Object;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.tools.javac.util.Name"
	};
	$loadClass(Name$NameMapper, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Name$NameMapper);
	});
	return class$;
}

$Class* Name$NameMapper::class$ = nullptr;

				} // util
			} // javac
		} // tools
	} // sun
} // com