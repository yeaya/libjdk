#include <com/sun/tools/sjavac/server/log/LoggingOutputStream$EolTrackingByteArrayOutputStream.h>
#include <com/sun/tools/sjavac/server/log/LoggingOutputStream.h>
#include <java/io/ByteArrayOutputStream.h>
#include <jcpp.h>

#undef EOL

using $ByteArrayOutputStream = ::java::io::ByteArrayOutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace sjavac {
				namespace server {
					namespace log {

$bytes* LoggingOutputStream$EolTrackingByteArrayOutputStream::EOL = nullptr;

void LoggingOutputStream$EolTrackingByteArrayOutputStream::init$() {
	$ByteArrayOutputStream::init$();
}

bool LoggingOutputStream$EolTrackingByteArrayOutputStream::isLineComplete() {
	if (this->count < LoggingOutputStream$EolTrackingByteArrayOutputStream::EOL->length) {
		return false;
	}
	for (int32_t i = 0; i < LoggingOutputStream$EolTrackingByteArrayOutputStream::EOL->length; ++i) {
		if ($nc(this->buf)->get(this->count - LoggingOutputStream$EolTrackingByteArrayOutputStream::EOL->length + i) != LoggingOutputStream$EolTrackingByteArrayOutputStream::EOL->get(i)) {
			return false;
		}
	}
	return true;
}

void LoggingOutputStream$EolTrackingByteArrayOutputStream::clinit$($Class* clazz) {
	$assignStatic(LoggingOutputStream$EolTrackingByteArrayOutputStream::EOL, $$nc($System::lineSeparator())->getBytes());
}

LoggingOutputStream$EolTrackingByteArrayOutputStream::LoggingOutputStream$EolTrackingByteArrayOutputStream() {
}

$Class* LoggingOutputStream$EolTrackingByteArrayOutputStream::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"EOL", "[B", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(LoggingOutputStream$EolTrackingByteArrayOutputStream, EOL)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(LoggingOutputStream$EolTrackingByteArrayOutputStream, init$, void)},
		{"isLineComplete", "()Z", nullptr, $PRIVATE, $method(LoggingOutputStream$EolTrackingByteArrayOutputStream, isLineComplete, bool)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.sjavac.server.log.LoggingOutputStream$EolTrackingByteArrayOutputStream", "com.sun.tools.sjavac.server.log.LoggingOutputStream", "EolTrackingByteArrayOutputStream", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.tools.sjavac.server.log.LoggingOutputStream$EolTrackingByteArrayOutputStream",
		"java.io.ByteArrayOutputStream",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.tools.sjavac.server.log.LoggingOutputStream"
	};
	$loadClass(LoggingOutputStream$EolTrackingByteArrayOutputStream, name, initialize, &classInfo$$, LoggingOutputStream$EolTrackingByteArrayOutputStream::clinit$, []($Class* clazz) -> $Object* {
		return $of($alloc(LoggingOutputStream$EolTrackingByteArrayOutputStream));
	});
	return class$;
}

$Class* LoggingOutputStream$EolTrackingByteArrayOutputStream::class$ = nullptr;

					} // log
				} // server
			} // sjavac
		} // tools
	} // sun
} // com