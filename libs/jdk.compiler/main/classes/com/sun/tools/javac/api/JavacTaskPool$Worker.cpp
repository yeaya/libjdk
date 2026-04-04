#include <com/sun/tools/javac/api/JavacTaskPool$Worker.h>
#include <com/sun/source/util/JavacTask.h>
#include <com/sun/tools/javac/api/JavacTaskPool.h>
#include <jcpp.h>

using $JavacTask = ::com::sun::source::util::JavacTask;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace api {

$Class* JavacTaskPool$Worker::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"withTask", "(Lcom/sun/source/util/JavacTask;)Ljava/lang/Object;", "(Lcom/sun/source/util/JavacTask;)TZ;", $PUBLIC | $ABSTRACT, $virtualMethod(JavacTaskPool$Worker, withTask, $Object*, $JavacTask*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.api.JavacTaskPool$Worker", "com.sun.tools.javac.api.JavacTaskPool", "Worker", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"com.sun.tools.javac.api.JavacTaskPool$Worker",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$,
		"<Z:Ljava/lang/Object;>Ljava/lang/Object;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.tools.javac.api.JavacTaskPool"
	};
	$loadClass(JavacTaskPool$Worker, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JavacTaskPool$Worker);
	});
	return class$;
}

$Class* JavacTaskPool$Worker::class$ = nullptr;

				} // api
			} // javac
		} // tools
	} // sun
} // com