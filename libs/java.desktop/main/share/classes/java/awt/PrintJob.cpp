#include <java/awt/PrintJob.h>
#include <java/awt/Dimension.h>
#include <java/awt/Graphics.h>
#include <jcpp.h>

using $Dimension = ::java::awt::Dimension;
using $Graphics = ::java::awt::Graphics;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

namespace java {
	namespace awt {

void PrintJob::init$() {
}

void PrintJob::finalize() {
	end();
}

PrintJob::PrintJob() {
}

$Class* PrintJob::load$($String* name, bool initialize) {
	$NamedAttribute finalizemethodAnnotations$$$namedAttribute[] = {
		{"since", 's', "9"},
		{}
	};
	$CompoundAttribute finalizemethodAnnotations$$[] = {
		{"Ljava/lang/Deprecated;", finalizemethodAnnotations$$$namedAttribute},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PROTECTED, $method(PrintJob, init$, void)},
		{"end", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(PrintJob, end, void)},
		{"finalize", "()V", nullptr, $PUBLIC | $DEPRECATED, $virtualMethod(PrintJob, finalize, void), nullptr, nullptr, finalizemethodAnnotations$$},
		{"getGraphics", "()Ljava/awt/Graphics;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(PrintJob, getGraphics, $Graphics*)},
		{"getPageDimension", "()Ljava/awt/Dimension;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(PrintJob, getPageDimension, $Dimension*)},
		{"getPageResolution", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(PrintJob, getPageResolution, int32_t)},
		{"lastPageFirst", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(PrintJob, lastPageFirst, bool)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER | $ABSTRACT,
		"java.awt.PrintJob",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(PrintJob, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(PrintJob);
	});
	return class$;
}

$Class* PrintJob::class$ = nullptr;

	} // awt
} // java