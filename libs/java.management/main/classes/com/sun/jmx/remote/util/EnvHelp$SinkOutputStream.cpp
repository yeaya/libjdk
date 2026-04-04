#include <com/sun/jmx/remote/util/EnvHelp$SinkOutputStream.h>
#include <com/sun/jmx/remote/util/EnvHelp.h>
#include <java/io/OutputStream.h>
#include <jcpp.h>

using $OutputStream = ::java::io::OutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace jmx {
			namespace remote {
				namespace util {

void EnvHelp$SinkOutputStream::init$() {
	$OutputStream::init$();
}

void EnvHelp$SinkOutputStream::write($bytes* b, int32_t off, int32_t len) {
}

void EnvHelp$SinkOutputStream::write(int32_t b) {
}

EnvHelp$SinkOutputStream::EnvHelp$SinkOutputStream() {
}

$Class* EnvHelp$SinkOutputStream::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(EnvHelp$SinkOutputStream, init$, void)},
		{"write", "([BII)V", nullptr, $PUBLIC, $virtualMethod(EnvHelp$SinkOutputStream, write, void, $bytes*, int32_t, int32_t)},
		{"write", "(I)V", nullptr, $PUBLIC, $virtualMethod(EnvHelp$SinkOutputStream, write, void, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.jmx.remote.util.EnvHelp$SinkOutputStream", "com.sun.jmx.remote.util.EnvHelp", "SinkOutputStream", $PRIVATE | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"com.sun.jmx.remote.util.EnvHelp$SinkOutputStream",
		"java.io.OutputStream",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.jmx.remote.util.EnvHelp"
	};
	$loadClass(EnvHelp$SinkOutputStream, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(EnvHelp$SinkOutputStream));
	});
	return class$;
}

$Class* EnvHelp$SinkOutputStream::class$ = nullptr;

				} // util
			} // remote
		} // jmx
	} // sun
} // com