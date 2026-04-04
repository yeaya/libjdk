#include <com/sun/imageio/plugins/jpeg/JPEGImageReader$CallBackLock.h>
#include <com/sun/imageio/plugins/jpeg/JPEGImageReader$CallBackLock$State.h>
#include <com/sun/imageio/plugins/jpeg/JPEGImageReader.h>
#include <java/lang/IllegalStateException.h>
#include <jcpp.h>

using $JPEGImageReader$CallBackLock$State = ::com::sun::imageio::plugins::jpeg::JPEGImageReader$CallBackLock$State;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace imageio {
			namespace plugins {
				namespace jpeg {

void JPEGImageReader$CallBackLock::init$() {
	$init($JPEGImageReader$CallBackLock$State);
	$set(this, lockState, $JPEGImageReader$CallBackLock$State::Unlocked);
}

void JPEGImageReader$CallBackLock::check() {
	$init($JPEGImageReader$CallBackLock$State);
	if (this->lockState != $JPEGImageReader$CallBackLock$State::Unlocked) {
		$throwNew($IllegalStateException, "Access to the reader is not allowed"_s);
	}
}

void JPEGImageReader$CallBackLock::lock() {
	$init($JPEGImageReader$CallBackLock$State);
	$set(this, lockState, $JPEGImageReader$CallBackLock$State::Locked);
}

void JPEGImageReader$CallBackLock::unlock() {
	$init($JPEGImageReader$CallBackLock$State);
	$set(this, lockState, $JPEGImageReader$CallBackLock$State::Unlocked);
}

JPEGImageReader$CallBackLock::JPEGImageReader$CallBackLock() {
}

$Class* JPEGImageReader$CallBackLock::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"lockState", "Lcom/sun/imageio/plugins/jpeg/JPEGImageReader$CallBackLock$State;", nullptr, $PRIVATE, $field(JPEGImageReader$CallBackLock, lockState)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(JPEGImageReader$CallBackLock, init$, void)},
		{"check", "()V", nullptr, 0, $virtualMethod(JPEGImageReader$CallBackLock, check, void)},
		{"lock", "()V", nullptr, $PRIVATE, $method(JPEGImageReader$CallBackLock, lock, void)},
		{"unlock", "()V", nullptr, $PRIVATE, $method(JPEGImageReader$CallBackLock, unlock, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.imageio.plugins.jpeg.JPEGImageReader$CallBackLock", "com.sun.imageio.plugins.jpeg.JPEGImageReader", "CallBackLock", $PRIVATE | $STATIC},
		{"com.sun.imageio.plugins.jpeg.JPEGImageReader$CallBackLock$State", "com.sun.imageio.plugins.jpeg.JPEGImageReader$CallBackLock", "State", $PRIVATE | $STATIC | $FINAL | $ENUM},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.imageio.plugins.jpeg.JPEGImageReader$CallBackLock",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.imageio.plugins.jpeg.JPEGImageReader"
	};
	$loadClass(JPEGImageReader$CallBackLock, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JPEGImageReader$CallBackLock);
	});
	return class$;
}

$Class* JPEGImageReader$CallBackLock::class$ = nullptr;

				} // jpeg
			} // plugins
		} // imageio
	} // sun
} // com