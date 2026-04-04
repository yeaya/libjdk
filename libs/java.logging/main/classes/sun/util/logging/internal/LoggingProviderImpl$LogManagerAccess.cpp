#include <sun/util/logging/internal/LoggingProviderImpl$LogManagerAccess.h>
#include <java/lang/Module.h>
#include <java/util/logging/LogManager.h>
#include <java/util/logging/Logger.h>
#include <sun/util/logging/internal/LoggingProviderImpl.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Module = ::java::lang::Module;
using $LogManager = ::java::util::logging::LogManager;
using $Logger = ::java::util::logging::Logger;

namespace sun {
	namespace util {
		namespace logging {
			namespace internal {

$Class* LoggingProviderImpl$LogManagerAccess::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"demandLoggerFor", "(Ljava/util/logging/LogManager;Ljava/lang/String;Ljava/lang/Module;)Ljava/util/logging/Logger;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(LoggingProviderImpl$LogManagerAccess, demandLoggerFor, $Logger*, $LogManager*, $String*, $Module*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.util.logging.internal.LoggingProviderImpl$LogManagerAccess", "sun.util.logging.internal.LoggingProviderImpl", "LogManagerAccess", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"sun.util.logging.internal.LoggingProviderImpl$LogManagerAccess",
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
		"sun.util.logging.internal.LoggingProviderImpl"
	};
	$loadClass(LoggingProviderImpl$LogManagerAccess, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(LoggingProviderImpl$LogManagerAccess);
	});
	return class$;
}

$Class* LoggingProviderImpl$LogManagerAccess::class$ = nullptr;

			} // internal
		} // logging
	} // util
} // sun