#include <javax/tools/JavaFileManager$Location.h>
#include <javax/tools/JavaFileManager.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace tools {

bool JavaFileManager$Location::isModuleOrientedLocation() {
	return $$nc(getName())->matches("\\bMODULE\\b"_s);
}

$Class* JavaFileManager$Location::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(JavaFileManager$Location, getName, $String*)},
		{"isModuleOrientedLocation", "()Z", nullptr, $PUBLIC, $virtualMethod(JavaFileManager$Location, isModuleOrientedLocation, bool)},
		{"isOutputLocation", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(JavaFileManager$Location, isOutputLocation, bool)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.tools.JavaFileManager$Location", "javax.tools.JavaFileManager", "Location", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"javax.tools.JavaFileManager$Location",
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
		"javax.tools.JavaFileManager"
	};
	$loadClass(JavaFileManager$Location, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JavaFileManager$Location);
	});
	return class$;
}

$Class* JavaFileManager$Location::class$ = nullptr;

	} // tools
} // javax