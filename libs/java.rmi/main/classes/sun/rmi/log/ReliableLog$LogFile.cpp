#include <sun/rmi/log/ReliableLog$LogFile.h>
#include <java/io/FileDescriptor.h>
#include <java/io/RandomAccessFile.h>
#include <sun/rmi/log/ReliableLog.h>
#include <jcpp.h>

using $RandomAccessFile = ::java::io::RandomAccessFile;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace rmi {
		namespace log {

void ReliableLog$LogFile::init$($String* name, $String* mode) {
	$RandomAccessFile::init$(name, mode);
	$set(this, fd, getFD());
}

void ReliableLog$LogFile::sync() {
	$nc(this->fd)->sync();
}

bool ReliableLog$LogFile::checkSpansBoundary(int64_t fp) {
	return fp % 512 > 508;
}

ReliableLog$LogFile::ReliableLog$LogFile() {
}

$Class* ReliableLog$LogFile::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"fd", "Ljava/io/FileDescriptor;", nullptr, $PRIVATE | $FINAL, $field(ReliableLog$LogFile, fd)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(ReliableLog$LogFile, init$, void, $String*, $String*), "java.io.FileNotFoundException,java.io.IOException"},
		{"checkSpansBoundary", "(J)Z", nullptr, $PROTECTED, $virtualMethod(ReliableLog$LogFile, checkSpansBoundary, bool, int64_t)},
		{"sync", "()V", nullptr, $PROTECTED, $virtualMethod(ReliableLog$LogFile, sync, void), "java.io.IOException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.rmi.log.ReliableLog$LogFile", "sun.rmi.log.ReliableLog", "LogFile", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.rmi.log.ReliableLog$LogFile",
		"java.io.RandomAccessFile",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.rmi.log.ReliableLog"
	};
	$loadClass(ReliableLog$LogFile, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(ReliableLog$LogFile));
	});
	return class$;
}

$Class* ReliableLog$LogFile::class$ = nullptr;

		} // log
	} // rmi
} // sun