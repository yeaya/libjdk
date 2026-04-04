#include <sun/awt/windows/WDropTargetContextPeerFileStream.h>
#include <java/io/FileInputStream.h>
#include <jcpp.h>

using $FileInputStream = ::java::io::FileInputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace awt {
		namespace windows {

void WDropTargetContextPeerFileStream::init$($String* name, int64_t stgmedium) {
	$FileInputStream::init$(name);
	this->stgmedium = stgmedium;
}

void WDropTargetContextPeerFileStream::close() {
	if (this->stgmedium != 0) {
		$FileInputStream::close();
		freeStgMedium(this->stgmedium);
		this->stgmedium = 0;
	}
}

void WDropTargetContextPeerFileStream::freeStgMedium(int64_t stgmedium) {
	$prepareNative(freeStgMedium, void, int64_t stgmedium);
	$invokeNative(stgmedium);
	$finishNative();
}

WDropTargetContextPeerFileStream::WDropTargetContextPeerFileStream() {
}

$Class* WDropTargetContextPeerFileStream::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"stgmedium", "J", nullptr, $PRIVATE, $field(WDropTargetContextPeerFileStream, stgmedium)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;J)V", nullptr, 0, $method(WDropTargetContextPeerFileStream, init$, void, $String*, int64_t), "java.io.FileNotFoundException"},
		{"close", "()V", nullptr, $PUBLIC, $virtualMethod(WDropTargetContextPeerFileStream, close, void), "java.io.IOException"},
		{"freeStgMedium", "(J)V", nullptr, $PRIVATE | $NATIVE, $method(WDropTargetContextPeerFileStream, freeStgMedium, void, int64_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"sun.awt.windows.WDropTargetContextPeerFileStream",
		"java.io.FileInputStream",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(WDropTargetContextPeerFileStream, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(WDropTargetContextPeerFileStream);
	});
	return class$;
}

$Class* WDropTargetContextPeerFileStream::class$ = nullptr;

		} // windows
	} // awt
} // sun