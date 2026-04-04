#include <java/rmi/server/LogStream.h>
#include <java/io/ByteArrayOutputStream.h>
#include <java/io/FilterOutputStream.h>
#include <java/io/IOException.h>
#include <java/io/OutputStream.h>
#include <java/io/OutputStreamWriter.h>
#include <java/lang/ArrayIndexOutOfBoundsException.h>
#include <java/lang/NumberFormatException.h>
#include <java/lang/SecurityManager.h>
#include <java/lang/StringBuffer.h>
#include <java/security/Permission.h>
#include <java/util/Date.h>
#include <java/util/HashMap.h>
#include <java/util/Map.h>
#include <java/util/logging/LoggingPermission.h>
#include <jcpp.h>

#undef BRIEF
#undef SILENT
#undef VERBOSE

using $ByteArrayOutputStream = ::java::io::ByteArrayOutputStream;
using $IOException = ::java::io::IOException;
using $OutputStream = ::java::io::OutputStream;
using $OutputStreamWriter = ::java::io::OutputStreamWriter;
using $PrintStream = ::java::io::PrintStream;
using $ArrayIndexOutOfBoundsException = ::java::lang::ArrayIndexOutOfBoundsException;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $NumberFormatException = ::java::lang::NumberFormatException;
using $SecurityManager = ::java::lang::SecurityManager;
using $StringBuffer = ::java::lang::StringBuffer;
using $Date = ::java::util::Date;
using $HashMap = ::java::util::HashMap;
using $Map = ::java::util::Map;
using $LoggingPermission = ::java::util::logging::LoggingPermission;

namespace java {
	namespace rmi {
		namespace server {

$Map* LogStream::known = nullptr;
$PrintStream* LogStream::defaultStream = nullptr;

void LogStream::init$($String* name, $OutputStream* out) {
	$PrintStream::init$($$new($ByteArrayOutputStream));
	$set(this, buffer, $new($StringBuffer));
	$set(this, bufOut, $cast($ByteArrayOutputStream, this->out));
	$set(this, name, name);
	setOutputStream(out);
}

LogStream* LogStream::log($String* name) {
	$init(LogStream);
	$var(LogStream, stream, nullptr);
	$synchronized(LogStream::known) {
		$assign(stream, $cast(LogStream, LogStream::known->get(name)));
		if (stream == nullptr) {
			$assign(stream, $new(LogStream, name, LogStream::defaultStream));
		}
		LogStream::known->put(name, stream);
	}
	return stream;
}

$PrintStream* LogStream::getDefaultStream() {
	$init(LogStream);
	$synchronized(class$) {
		return LogStream::defaultStream;
	}
}

void LogStream::setDefaultStream($PrintStream* newDefault) {
	$init(LogStream);
	$synchronized(class$) {
		$useLocalObjectStack();
		$var($SecurityManager, sm, $System::getSecurityManager());
		if (sm != nullptr) {
			sm->checkPermission($$new($LoggingPermission, "control"_s, nullptr));
		}
		$assignStatic(LogStream::defaultStream, newDefault);
	}
}

$OutputStream* LogStream::getOutputStream() {
	$synchronized(this) {
		return this->logOut;
	}
}

void LogStream::setOutputStream($OutputStream* out) {
	$synchronized(this) {
		$set(this, logOut, out);
		$set(this, logWriter, $new($OutputStreamWriter, this->logOut));
	}
}

void LogStream::write(int32_t b) {
	$useLocalObjectStack();
	if (b == u'\n') {
		$synchronized(this) {
			$synchronized(this->logOut) {
				$nc(this->buffer)->setLength(0);
				;
				this->buffer->append($(($$new($Date))->toString()));
				this->buffer->append(u':');
				this->buffer->append(this->name);
				this->buffer->append(u':');
				this->buffer->append($($($Thread::currentThread())->getName()));
				this->buffer->append(u':');
				$var($Throwable, var$0, nullptr);
				try {
					try {
						$nc(this->logWriter)->write($(this->buffer->toString()));
						this->logWriter->flush();
						$nc(this->bufOut)->writeTo(this->logOut);
						this->logOut->write(b);
						this->logOut->flush();
					} catch ($IOException& e) {
						setError();
					}
				} catch ($Throwable& var$1) {
					$assign(var$0, var$1);
				} /*finally*/ {
					$nc(this->bufOut)->reset();
				}
				if (var$0 != nullptr) {
					$throw(var$0);
				}
			}
		}
	} else {
		$PrintStream::write(b);
	}
}

void LogStream::write($bytes* b, int32_t off, int32_t len) {
	if (len < 0) {
		$throwNew($ArrayIndexOutOfBoundsException, len);
	}
	for (int32_t i = 0; i < len; ++i) {
		write($nc(b)->get(off + i));
	}
}

$String* LogStream::toString() {
	return this->name;
}

int32_t LogStream::parseLevel($String* s) {
	$init(LogStream);
	$useLocalObjectStack();
	if ((s == nullptr) || (s->length() < 1)) {
		return -1;
	}
	try {
		return $Integer::parseInt(s);
	} catch ($NumberFormatException& e) {
	}
	if ($nc(s)->length() < 1) {
		return -1;
	}
	if ("SILENT"_s->startsWith($(s->toUpperCase()))) {
		return LogStream::SILENT;
	} else if ("BRIEF"_s->startsWith($(s->toUpperCase()))) {
		return LogStream::BRIEF;
	} else if ("VERBOSE"_s->startsWith($(s->toUpperCase()))) {
		return LogStream::VERBOSE;
	}
	return -1;
}

void LogStream::clinit$($Class* clazz) {
	$assignStatic(LogStream::known, $new($HashMap, 5));
	$assignStatic(LogStream::defaultStream, $System::err);
}

LogStream::LogStream() {
}

$Class* LogStream::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"known", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Ljava/rmi/server/LogStream;>;", $PRIVATE | $STATIC, $staticField(LogStream, known)},
		{"defaultStream", "Ljava/io/PrintStream;", nullptr, $PRIVATE | $STATIC, $staticField(LogStream, defaultStream)},
		{"name", "Ljava/lang/String;", nullptr, $PRIVATE, $field(LogStream, name)},
		{"logOut", "Ljava/io/OutputStream;", nullptr, $PRIVATE, $field(LogStream, logOut)},
		{"logWriter", "Ljava/io/OutputStreamWriter;", nullptr, $PRIVATE, $field(LogStream, logWriter)},
		{"buffer", "Ljava/lang/StringBuffer;", nullptr, $PRIVATE, $field(LogStream, buffer)},
		{"bufOut", "Ljava/io/ByteArrayOutputStream;", nullptr, $PRIVATE, $field(LogStream, bufOut)},
		{"SILENT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(LogStream, SILENT)},
		{"BRIEF", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(LogStream, BRIEF)},
		{"VERBOSE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(LogStream, VERBOSE)},
		{}
	};
	$CompoundAttribute init$methodAnnotations$$[] = {
		{"Ljava/lang/Deprecated;", nullptr},
		{}
	};
	$CompoundAttribute getDefaultStreammethodAnnotations$$[] = {
		{"Ljava/lang/Deprecated;", nullptr},
		{}
	};
	$CompoundAttribute getOutputStreammethodAnnotations$$[] = {
		{"Ljava/lang/Deprecated;", nullptr},
		{}
	};
	$CompoundAttribute logmethodAnnotations$$[] = {
		{"Ljava/lang/Deprecated;", nullptr},
		{}
	};
	$CompoundAttribute parseLevelmethodAnnotations$$[] = {
		{"Ljava/lang/Deprecated;", nullptr},
		{}
	};
	$CompoundAttribute setDefaultStreammethodAnnotations$$[] = {
		{"Ljava/lang/Deprecated;", nullptr},
		{}
	};
	$CompoundAttribute setOutputStreammethodAnnotations$$[] = {
		{"Ljava/lang/Deprecated;", nullptr},
		{}
	};
	$CompoundAttribute toStringmethodAnnotations$$[] = {
		{"Ljava/lang/Deprecated;", nullptr},
		{}
	};
	$CompoundAttribute writemethodAnnotations$$[] = {
		{"Ljava/lang/Deprecated;", nullptr},
		{}
	};
	$CompoundAttribute writemethodAnnotations$$$1[] = {
		{"Ljava/lang/Deprecated;", nullptr},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;Ljava/io/OutputStream;)V", nullptr, $PRIVATE | $DEPRECATED, $method(LogStream, init$, void, $String*, $OutputStream*), nullptr, nullptr, init$methodAnnotations$$},
		{"getDefaultStream", "()Ljava/io/PrintStream;", nullptr, $PUBLIC | $STATIC | $SYNCHRONIZED | $DEPRECATED, $staticMethod(LogStream, getDefaultStream, $PrintStream*), nullptr, nullptr, getDefaultStreammethodAnnotations$$},
		{"getOutputStream", "()Ljava/io/OutputStream;", nullptr, $PUBLIC | $SYNCHRONIZED | $DEPRECATED, $virtualMethod(LogStream, getOutputStream, $OutputStream*), nullptr, nullptr, getOutputStreammethodAnnotations$$},
		{"log", "(Ljava/lang/String;)Ljava/rmi/server/LogStream;", nullptr, $PUBLIC | $STATIC | $DEPRECATED, $staticMethod(LogStream, log, LogStream*, $String*), nullptr, nullptr, logmethodAnnotations$$},
		{"parseLevel", "(Ljava/lang/String;)I", nullptr, $PUBLIC | $STATIC | $DEPRECATED, $staticMethod(LogStream, parseLevel, int32_t, $String*), nullptr, nullptr, parseLevelmethodAnnotations$$},
		{"setDefaultStream", "(Ljava/io/PrintStream;)V", nullptr, $PUBLIC | $STATIC | $SYNCHRONIZED | $DEPRECATED, $staticMethod(LogStream, setDefaultStream, void, $PrintStream*), nullptr, nullptr, setDefaultStreammethodAnnotations$$},
		{"setOutputStream", "(Ljava/io/OutputStream;)V", nullptr, $PUBLIC | $SYNCHRONIZED | $DEPRECATED, $virtualMethod(LogStream, setOutputStream, void, $OutputStream*), nullptr, nullptr, setOutputStreammethodAnnotations$$},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $DEPRECATED, $virtualMethod(LogStream, toString, $String*), nullptr, nullptr, toStringmethodAnnotations$$},
		{"write", "(I)V", nullptr, $PUBLIC | $DEPRECATED, $virtualMethod(LogStream, write, void, int32_t), nullptr, nullptr, writemethodAnnotations$$},
		{"write", "([BII)V", nullptr, $PUBLIC | $DEPRECATED, $virtualMethod(LogStream, write, void, $bytes*, int32_t, int32_t), nullptr, nullptr, writemethodAnnotations$$$1},
		{}
	};
	$CompoundAttribute annotations$$[] = {
		{"Ljava/lang/Deprecated;", nullptr},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.rmi.server.LogStream",
		"java.io.PrintStream",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		nullptr,
		annotations$$
	};
	$loadClass(LogStream, name, initialize, &classInfo$$, LogStream::clinit$, []($Class* clazz) -> $Object* {
		return $of($alloc(LogStream));
	});
	return class$;
}

$Class* LogStream::class$ = nullptr;

		} // server
	} // rmi
} // java