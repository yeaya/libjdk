#include <java/util/logging/SimpleFormatter.h>
#include <java/io/PrintWriter.h>
#include <java/io/Serializable.h>
#include <java/io/StringWriter.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/time/Instant.h>
#include <java/time/ZoneId.h>
#include <java/time/ZonedDateTime.h>
#include <java/util/function/Function.h>
#include <java/util/logging/Formatter.h>
#include <java/util/logging/Level.h>
#include <java/util/logging/LogManager.h>
#include <java/util/logging/LogRecord.h>
#include <jdk/internal/logger/SurrogateLogger.h>
#include <jcpp.h>

using $PrintWriter = ::java::io::PrintWriter;
using $Serializable = ::java::io::Serializable;
using $StringWriter = ::java::io::StringWriter;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $Instant = ::java::time::Instant;
using $ZoneId = ::java::time::ZoneId;
using $ZonedDateTime = ::java::time::ZonedDateTime;
using $Function = ::java::util::function::Function;
using $Formatter = ::java::util::logging::Formatter;
using $LogManager = ::java::util::logging::LogManager;
using $LogRecord = ::java::util::logging::LogRecord;
using $SurrogateLogger = ::jdk::internal::logger::SurrogateLogger;

namespace java {
	namespace util {
		namespace logging {

class SimpleFormatter$$Lambda$getLoggingProperty : public $Function {
	$class(SimpleFormatter$$Lambda$getLoggingProperty, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* name) override {
		 return $of(SimpleFormatter::getLoggingProperty($cast($String, name)));
	}
};
$Class* SimpleFormatter$$Lambda$getLoggingProperty::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(SimpleFormatter$$Lambda$getLoggingProperty, init$, void)},
		{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(SimpleFormatter$$Lambda$getLoggingProperty, apply, $Object*, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"java.util.logging.SimpleFormatter$$Lambda$getLoggingProperty",
		"java.lang.Object",
		"java.util.function.Function",
		nullptr,
		methodInfos$$
	};
	$loadClass(SimpleFormatter$$Lambda$getLoggingProperty, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SimpleFormatter$$Lambda$getLoggingProperty);
	});
	return class$;
}
$Class* SimpleFormatter$$Lambda$getLoggingProperty::class$ = nullptr;

$String* SimpleFormatter::getLoggingProperty($String* name) {
	$init(SimpleFormatter);
	return $$nc($LogManager::getLogManager())->getProperty(name);
}

void SimpleFormatter::init$() {
	$Formatter::init$();
	$set(this, format$, $SurrogateLogger::getSimpleFormat($$new(SimpleFormatter$$Lambda$getLoggingProperty)));
}

$String* SimpleFormatter::format($LogRecord* record) {
	$useLocalObjectStack();
	$var($Instant, var$0, $nc(record)->getInstant());
	$var($ZonedDateTime, zdt, $ZonedDateTime::ofInstant(var$0, $($ZoneId::systemDefault())));
	$var($String, source, nullptr);
	if (record->getSourceClassName() != nullptr) {
		$assign(source, record->getSourceClassName());
		if (record->getSourceMethodName() != nullptr) {
			$plusAssign(source, $$str({" "_s, $(record->getSourceMethodName())}));
		}
	} else {
		$assign(source, record->getLoggerName());
	}
	$var($String, message, formatMessage(record));
	$var($String, throwable, ""_s);
	if (record->getThrown() != nullptr) {
		$var($StringWriter, sw, $new($StringWriter));
		$var($PrintWriter, pw, $new($PrintWriter, sw));
		pw->println();
		$$nc(record->getThrown())->printStackTrace(pw);
		pw->close();
		$assign(throwable, sw->toString());
	}
	return $String::format(this->format$, $$new($ObjectArray, {
		zdt,
		source,
		$(record->getLoggerName()),
		$($$nc(record->getLevel())->getLocalizedLevelName()),
		message,
		throwable
	}));
}

SimpleFormatter::SimpleFormatter() {
}

$Class* SimpleFormatter::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("java.util.logging.SimpleFormatter$$Lambda$getLoggingProperty")) {
			return SimpleFormatter$$Lambda$getLoggingProperty::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"format", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(SimpleFormatter, format$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(SimpleFormatter, init$, void)},
		{"format", "(Ljava/util/logging/LogRecord;)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(SimpleFormatter, format, $String*, $LogRecord*)},
		{"getLoggingProperty", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $STATIC, $staticMethod(SimpleFormatter, getLoggingProperty, $String*, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.util.logging.SimpleFormatter",
		"java.util.logging.Formatter",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(SimpleFormatter, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SimpleFormatter);
	});
	return class$;
}

$Class* SimpleFormatter::class$ = nullptr;

		} // logging
	} // util
} // java