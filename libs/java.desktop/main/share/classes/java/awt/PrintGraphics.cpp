#include <java/awt/PrintGraphics.h>
#include <java/awt/PrintJob.h>
#include <jcpp.h>

using $PrintJob = ::java::awt::PrintJob;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {

$Class* PrintGraphics::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getPrintJob", "()Ljava/awt/PrintJob;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(PrintGraphics, getPrintJob, $PrintJob*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.awt.PrintGraphics",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(PrintGraphics, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(PrintGraphics);
	});
	return class$;
}

$Class* PrintGraphics::class$ = nullptr;

	} // awt
} // java