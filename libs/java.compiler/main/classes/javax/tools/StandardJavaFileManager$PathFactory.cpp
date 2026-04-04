#include <javax/tools/StandardJavaFileManager$PathFactory.h>
#include <java/nio/file/Path.h>
#include <javax/tools/StandardJavaFileManager.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Path = ::java::nio::file::Path;

namespace javax {
	namespace tools {

$Class* StandardJavaFileManager$PathFactory::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getPath", "(Ljava/lang/String;[Ljava/lang/String;)Ljava/nio/file/Path;", nullptr, $PUBLIC | $TRANSIENT | $ABSTRACT, $virtualMethod(StandardJavaFileManager$PathFactory, getPath, $Path*, $String*, $StringArray*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.tools.StandardJavaFileManager$PathFactory", "javax.tools.StandardJavaFileManager", "PathFactory", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"javax.tools.StandardJavaFileManager$PathFactory",
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
		"javax.tools.StandardJavaFileManager"
	};
	$loadClass(StandardJavaFileManager$PathFactory, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(StandardJavaFileManager$PathFactory);
	});
	return class$;
}

$Class* StandardJavaFileManager$PathFactory::class$ = nullptr;

	} // tools
} // javax