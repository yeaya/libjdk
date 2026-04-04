#include <javax/tools/JavaCompiler$CompilationTask.h>
#include <java/lang/Iterable.h>
#include <java/util/Locale.h>
#include <javax/tools/JavaCompiler.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Iterable = ::java::lang::Iterable;
using $MethodInfo = ::java::lang::MethodInfo;
using $Locale = ::java::util::Locale;

namespace javax {
	namespace tools {

$Class* JavaCompiler$CompilationTask::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"addModules", "(Ljava/lang/Iterable;)V", "(Ljava/lang/Iterable<Ljava/lang/String;>;)V", $PUBLIC | $ABSTRACT, $virtualMethod(JavaCompiler$CompilationTask, addModules, void, $Iterable*)},
		{"call", "()Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT},
		{"setLocale", "(Ljava/util/Locale;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(JavaCompiler$CompilationTask, setLocale, void, $Locale*)},
		{"setProcessors", "(Ljava/lang/Iterable;)V", "(Ljava/lang/Iterable<+Ljavax/annotation/processing/Processor;>;)V", $PUBLIC | $ABSTRACT, $virtualMethod(JavaCompiler$CompilationTask, setProcessors, void, $Iterable*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.tools.JavaCompiler$CompilationTask", "javax.tools.JavaCompiler", "CompilationTask", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"javax.tools.JavaCompiler$CompilationTask",
		nullptr,
		"java.util.concurrent.Callable",
		nullptr,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/util/concurrent/Callable<Ljava/lang/Boolean;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.tools.JavaCompiler"
	};
	$loadClass(JavaCompiler$CompilationTask, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JavaCompiler$CompilationTask);
	});
	return class$;
}

$Class* JavaCompiler$CompilationTask::class$ = nullptr;

	} // tools
} // javax