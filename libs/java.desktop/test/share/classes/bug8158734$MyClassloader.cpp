#include <bug8158734$MyClassloader.h>
#include <bug8158734.h>
#include <java/lang/ClassLoader.h>
#include <jcpp.h>

using $bug8158734 = ::bug8158734;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void bug8158734$MyClassloader::init$() {
	$ClassLoader::init$();
}

$Class* bug8158734$MyClassloader::loadClass($String* name) {
	$init($bug8158734);
	$bug8158734::myClassloaderWasUsed = true;
	return $ClassLoader::loadClass(name);
}

bug8158734$MyClassloader::bug8158734$MyClassloader() {
}

$Class* bug8158734$MyClassloader::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(bug8158734$MyClassloader, init$, void)},
		{"loadClass", "(Ljava/lang/String;)Ljava/lang/Class;", "(Ljava/lang/String;)Ljava/lang/Class<*>;", $PUBLIC, $virtualMethod(bug8158734$MyClassloader, loadClass, $Class*, $String*), "java.lang.ClassNotFoundException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug8158734$MyClassloader", "bug8158734", "MyClassloader", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"bug8158734$MyClassloader",
		"java.lang.ClassLoader",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"bug8158734"
	};
	$loadClass(bug8158734$MyClassloader, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug8158734$MyClassloader);
	});
	return class$;
}

$Class* bug8158734$MyClassloader::class$ = nullptr;