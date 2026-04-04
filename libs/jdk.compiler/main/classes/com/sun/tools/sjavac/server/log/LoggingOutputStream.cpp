#include <com/sun/tools/sjavac/server/log/LoggingOutputStream.h>
#include <com/sun/tools/sjavac/Log$Level.h>
#include <com/sun/tools/sjavac/Log.h>
#include <com/sun/tools/sjavac/server/log/LoggingOutputStream$EolTrackingByteArrayOutputStream.h>
#include <java/io/FilterOutputStream.h>
#include <java/io/OutputStream.h>
#include <jcpp.h>

#undef LINE_SEP

using $Log = ::com::sun::tools::sjavac::Log;
using $Log$Level = ::com::sun::tools::sjavac::Log$Level;
using $LoggingOutputStream$EolTrackingByteArrayOutputStream = ::com::sun::tools::sjavac::server::log::LoggingOutputStream$EolTrackingByteArrayOutputStream;
using $FilterOutputStream = ::java::io::FilterOutputStream;
using $OutputStream = ::java::io::OutputStream;
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

$bytes* LoggingOutputStream::LINE_SEP = nullptr;

void LoggingOutputStream::init$($OutputStream* out, $Log$Level* level, $String* linePrefix) {
	$FilterOutputStream::init$(out);
	$set(this, buf, $new($LoggingOutputStream$EolTrackingByteArrayOutputStream));
	$set(this, level, level);
	$set(this, linePrefix, linePrefix);
}

void LoggingOutputStream::write(int32_t b) {
	$useLocalObjectStack();
	$FilterOutputStream::write(b);
	$nc(this->buf)->write(b);
	if (this->buf->isLineComplete()) {
		$var($bytes, var$0, $nc(this->buf)->toByteArray());
		$var($String, line, $new($String, var$0, 0, this->buf->size() - LoggingOutputStream::LINE_SEP->length));
		$Log::log(this->level, $$str({this->linePrefix, line}));
		$set(this, buf, $new($LoggingOutputStream$EolTrackingByteArrayOutputStream));
	}
}

void LoggingOutputStream::clinit$($Class* clazz) {
	$assignStatic(LoggingOutputStream::LINE_SEP, $$nc($System::lineSeparator())->getBytes());
}

LoggingOutputStream::LoggingOutputStream() {
}

$Class* LoggingOutputStream::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"LINE_SEP", "[B", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(LoggingOutputStream, LINE_SEP)},
		{"level", "Lcom/sun/tools/sjavac/Log$Level;", nullptr, $PRIVATE | $FINAL, $field(LoggingOutputStream, level)},
		{"linePrefix", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(LoggingOutputStream, linePrefix)},
		{"buf", "Lcom/sun/tools/sjavac/server/log/LoggingOutputStream$EolTrackingByteArrayOutputStream;", nullptr, $PRIVATE, $field(LoggingOutputStream, buf)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/io/OutputStream;Lcom/sun/tools/sjavac/Log$Level;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(LoggingOutputStream, init$, void, $OutputStream*, $Log$Level*, $String*)},
		{"write", "(I)V", nullptr, $PUBLIC, $virtualMethod(LoggingOutputStream, write, void, int32_t), "java.io.IOException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.sjavac.server.log.LoggingOutputStream$EolTrackingByteArrayOutputStream", "com.sun.tools.sjavac.server.log.LoggingOutputStream", "EolTrackingByteArrayOutputStream", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.tools.sjavac.server.log.LoggingOutputStream",
		"java.io.FilterOutputStream",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"com.sun.tools.sjavac.server.log.LoggingOutputStream$EolTrackingByteArrayOutputStream"
	};
	$loadClass(LoggingOutputStream, name, initialize, &classInfo$$, LoggingOutputStream::clinit$, []($Class* clazz) -> $Object* {
		return $of($alloc(LoggingOutputStream));
	});
	return class$;
}

$Class* LoggingOutputStream::class$ = nullptr;

					} // log
				} // server
			} // sjavac
		} // tools
	} // sun
} // com