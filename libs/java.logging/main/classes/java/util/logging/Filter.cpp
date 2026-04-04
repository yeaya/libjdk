#include <java/util/logging/Filter.h>
#include <java/util/logging/LogRecord.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $LogRecord = ::java::util::logging::LogRecord;

namespace java {
	namespace util {
		namespace logging {

$Class* Filter::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"isLoggable", "(Ljava/util/logging/LogRecord;)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Filter, isLoggable, bool, $LogRecord*)},
		{}
	};
	$CompoundAttribute annotations$$[] = {
		{"Ljava/lang/FunctionalInterface;", nullptr},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.util.logging.Filter",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		nullptr,
		annotations$$
	};
	$loadClass(Filter, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Filter);
	});
	return class$;
}

$Class* Filter::class$ = nullptr;

		} // logging
	} // util
} // java