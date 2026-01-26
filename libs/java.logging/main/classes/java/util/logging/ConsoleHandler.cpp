#include <java/util/logging/ConsoleHandler.h>

#include <java/io/FilterOutputStream.h>
#include <java/io/OutputStream.h>
#include <java/util/logging/Formatter.h>
#include <java/util/logging/Level.h>
#include <java/util/logging/LogRecord.h>
#include <java/util/logging/SimpleFormatter.h>
#include <java/util/logging/StreamHandler.h>
#include <jcpp.h>

#undef INFO

using $FilterOutputStream = ::java::io::FilterOutputStream;
using $OutputStream = ::java::io::OutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Formatter = ::java::util::logging::Formatter;
using $Level = ::java::util::logging::Level;
using $LogRecord = ::java::util::logging::LogRecord;
using $SimpleFormatter = ::java::util::logging::SimpleFormatter;
using $StreamHandler = ::java::util::logging::StreamHandler;

namespace java {
	namespace util {
		namespace logging {

$MethodInfo _ConsoleHandler_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(ConsoleHandler, init$, void)},
	{"close", "()V", nullptr, $PUBLIC, $virtualMethod(ConsoleHandler, close, void)},
	{"publish", "(Ljava/util/logging/LogRecord;)V", nullptr, $PUBLIC, $virtualMethod(ConsoleHandler, publish, void, $LogRecord*)},
	{}
};

$ClassInfo _ConsoleHandler_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.util.logging.ConsoleHandler",
	"java.util.logging.StreamHandler",
	nullptr,
	nullptr,
	_ConsoleHandler_MethodInfo_
};

$Object* allocate$ConsoleHandler($Class* clazz) {
	return $of($alloc(ConsoleHandler));
}

void ConsoleHandler::init$() {
	$init($Level);
	$StreamHandler::init$($Level::INFO, $$new($SimpleFormatter), nullptr);
	setOutputStreamPrivileged($System::err);
}

void ConsoleHandler::publish($LogRecord* record) {
	$StreamHandler::publish(record);
	flush();
}

void ConsoleHandler::close() {
	flush();
}

ConsoleHandler::ConsoleHandler() {
}

$Class* ConsoleHandler::load$($String* name, bool initialize) {
	$loadClass(ConsoleHandler, name, initialize, &_ConsoleHandler_ClassInfo_, allocate$ConsoleHandler);
	return class$;
}

$Class* ConsoleHandler::class$ = nullptr;

		} // logging
	} // util
} // java