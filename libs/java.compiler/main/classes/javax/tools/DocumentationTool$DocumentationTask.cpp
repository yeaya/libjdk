#include <javax/tools/DocumentationTool$DocumentationTask.h>
#include <java/lang/Iterable.h>
#include <java/util/Locale.h>
#include <javax/tools/DocumentationTool.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Iterable = ::java::lang::Iterable;
using $MethodInfo = ::java::lang::MethodInfo;
using $Locale = ::java::util::Locale;

namespace javax {
	namespace tools {

$Class* DocumentationTool$DocumentationTask::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"addModules", "(Ljava/lang/Iterable;)V", "(Ljava/lang/Iterable<Ljava/lang/String;>;)V", $PUBLIC | $ABSTRACT, $virtualMethod(DocumentationTool$DocumentationTask, addModules, void, $Iterable*)},
		{"call", "()Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT},
		{"setLocale", "(Ljava/util/Locale;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DocumentationTool$DocumentationTask, setLocale, void, $Locale*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.tools.DocumentationTool$DocumentationTask", "javax.tools.DocumentationTool", "DocumentationTask", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"javax.tools.DocumentationTool$DocumentationTask",
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
		"javax.tools.DocumentationTool"
	};
	$loadClass(DocumentationTool$DocumentationTask, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DocumentationTool$DocumentationTask);
	});
	return class$;
}

$Class* DocumentationTool$DocumentationTask::class$ = nullptr;

	} // tools
} // javax