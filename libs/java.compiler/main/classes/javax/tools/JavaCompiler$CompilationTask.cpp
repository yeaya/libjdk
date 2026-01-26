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

$MethodInfo _JavaCompiler$CompilationTask_MethodInfo_[] = {
	{"addModules", "(Ljava/lang/Iterable;)V", "(Ljava/lang/Iterable<Ljava/lang/String;>;)V", $PUBLIC | $ABSTRACT, $virtualMethod(JavaCompiler$CompilationTask, addModules, void, $Iterable*)},
	{"call", "()Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT},
	{"setLocale", "(Ljava/util/Locale;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(JavaCompiler$CompilationTask, setLocale, void, $Locale*)},
	{"setProcessors", "(Ljava/lang/Iterable;)V", "(Ljava/lang/Iterable<+Ljavax/annotation/processing/Processor;>;)V", $PUBLIC | $ABSTRACT, $virtualMethod(JavaCompiler$CompilationTask, setProcessors, void, $Iterable*)},
	{}
};

$InnerClassInfo _JavaCompiler$CompilationTask_InnerClassesInfo_[] = {
	{"javax.tools.JavaCompiler$CompilationTask", "javax.tools.JavaCompiler", "CompilationTask", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _JavaCompiler$CompilationTask_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.tools.JavaCompiler$CompilationTask",
	nullptr,
	"java.util.concurrent.Callable",
	nullptr,
	_JavaCompiler$CompilationTask_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/concurrent/Callable<Ljava/lang/Boolean;>;",
	nullptr,
	_JavaCompiler$CompilationTask_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.tools.JavaCompiler"
};

$Object* allocate$JavaCompiler$CompilationTask($Class* clazz) {
	return $of($alloc(JavaCompiler$CompilationTask));
}

$Class* JavaCompiler$CompilationTask::load$($String* name, bool initialize) {
	$loadClass(JavaCompiler$CompilationTask, name, initialize, &_JavaCompiler$CompilationTask_ClassInfo_, allocate$JavaCompiler$CompilationTask);
	return class$;
}

$Class* JavaCompiler$CompilationTask::class$ = nullptr;

	} // tools
} // javax