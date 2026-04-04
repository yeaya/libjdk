#include <sun/rmi/runtime/Log$LoggerPrintStream.h>
#include <java/io/ByteArrayOutputStream.h>
#include <java/io/FilterOutputStream.h>
#include <java/io/OutputStream.h>
#include <java/lang/ArrayIndexOutOfBoundsException.h>
#include <java/util/logging/Level.h>
#include <java/util/logging/Logger.h>
#include <sun/rmi/runtime/Log.h>
#include <jcpp.h>

#undef INFO

using $ByteArrayOutputStream = ::java::io::ByteArrayOutputStream;
using $PrintStream = ::java::io::PrintStream;
using $ArrayIndexOutOfBoundsException = ::java::lang::ArrayIndexOutOfBoundsException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Level = ::java::util::logging::Level;
using $Logger = ::java::util::logging::Logger;

namespace sun {
	namespace rmi {
		namespace runtime {

void Log$LoggerPrintStream::init$($Logger* logger) {
	$PrintStream::init$($$new($ByteArrayOutputStream));
	this->last = -1;
	$set(this, bufOut, $cast($ByteArrayOutputStream, this->out));
	$set(this, logger, logger);
}

void Log$LoggerPrintStream::write(int32_t b) {
	$useLocalObjectStack();
	if ((this->last == u'\r') && (b == u'\n')) {
		this->last = -1;
		return;
	} else if ((b == u'\n') || (b == u'\r')) {
		$var($Throwable, var$0, nullptr);
		try {
			$var($StringBuilder, var$1, $new($StringBuilder));
			var$1->append($($($Thread::currentThread())->getName()));
			var$1->append(": "_s);
			var$1->append($($nc(this->bufOut)->toString()));
			$var($String, message, $str(var$1));
			$init($Level);
			$nc(this->logger)->logp($Level::INFO, "LogStream"_s, "print"_s, message);
		} catch ($Throwable& var$2) {
			$assign(var$0, var$2);
		} /*finally*/ {
			$nc(this->bufOut)->reset();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	} else {
		$PrintStream::write(b);
	}
	this->last = b;
}

void Log$LoggerPrintStream::write($bytes* b, int32_t off, int32_t len) {
	if (len < 0) {
		$throwNew($ArrayIndexOutOfBoundsException, len);
	}
	for (int32_t i = 0; i < len; ++i) {
		write($nc(b)->get(off + i));
	}
}

$String* Log$LoggerPrintStream::toString() {
	return "RMI"_s;
}

Log$LoggerPrintStream::Log$LoggerPrintStream() {
}

$Class* Log$LoggerPrintStream::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"logger", "Ljava/util/logging/Logger;", nullptr, $PRIVATE | $FINAL, $field(Log$LoggerPrintStream, logger)},
		{"last", "I", nullptr, $PRIVATE, $field(Log$LoggerPrintStream, last)},
		{"bufOut", "Ljava/io/ByteArrayOutputStream;", nullptr, $PRIVATE | $FINAL, $field(Log$LoggerPrintStream, bufOut)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/logging/Logger;)V", nullptr, $PRIVATE, $method(Log$LoggerPrintStream, init$, void, $Logger*)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(Log$LoggerPrintStream, toString, $String*)},
		{"write", "(I)V", nullptr, $PUBLIC, $virtualMethod(Log$LoggerPrintStream, write, void, int32_t)},
		{"write", "([BII)V", nullptr, $PUBLIC, $virtualMethod(Log$LoggerPrintStream, write, void, $bytes*, int32_t, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.rmi.runtime.Log$LoggerPrintStream", "sun.rmi.runtime.Log", "LoggerPrintStream", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.rmi.runtime.Log$LoggerPrintStream",
		"java.io.PrintStream",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.rmi.runtime.Log"
	};
	$loadClass(Log$LoggerPrintStream, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(Log$LoggerPrintStream));
	});
	return class$;
}

$Class* Log$LoggerPrintStream::class$ = nullptr;

		} // runtime
	} // rmi
} // sun