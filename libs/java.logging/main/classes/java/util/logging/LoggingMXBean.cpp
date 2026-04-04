#include <java/util/logging/LoggingMXBean.h>
#include <java/util/List.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $List = ::java::util::List;

namespace java {
	namespace util {
		namespace logging {

$Class* LoggingMXBean::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getLoggerLevel", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(LoggingMXBean, getLoggerLevel, $String*, $String*)},
		{"getLoggerNames", "()Ljava/util/List;", "()Ljava/util/List<Ljava/lang/String;>;", $PUBLIC | $ABSTRACT, $virtualMethod(LoggingMXBean, getLoggerNames, $List*)},
		{"getParentLoggerName", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(LoggingMXBean, getParentLoggerName, $String*, $String*)},
		{"setLoggerLevel", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(LoggingMXBean, setLoggerLevel, void, $String*, $String*)},
		{}
	};
	$NamedAttribute annotations$$$namedAttribute[] = {
		{"since", 's', "9"},
		{}
	};
	$CompoundAttribute annotations$$[] = {
		{"Ljava/lang/Deprecated;", annotations$$$namedAttribute},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.util.logging.LoggingMXBean",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		nullptr,
		annotations$$
	};
	$loadClass(LoggingMXBean, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(LoggingMXBean);
	});
	return class$;
}

$Class* LoggingMXBean::class$ = nullptr;

		} // logging
	} // util
} // java