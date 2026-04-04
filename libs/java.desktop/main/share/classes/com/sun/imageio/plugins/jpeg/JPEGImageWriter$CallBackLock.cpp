#include <com/sun/imageio/plugins/jpeg/JPEGImageWriter$CallBackLock.h>
#include <com/sun/imageio/plugins/jpeg/JPEGImageWriter$CallBackLock$State.h>
#include <com/sun/imageio/plugins/jpeg/JPEGImageWriter.h>
#include <java/lang/IllegalStateException.h>
#include <jcpp.h>

using $JPEGImageWriter$CallBackLock$State = ::com::sun::imageio::plugins::jpeg::JPEGImageWriter$CallBackLock$State;
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

void JPEGImageWriter$CallBackLock::init$() {
	$init($JPEGImageWriter$CallBackLock$State);
	$set(this, lockState, $JPEGImageWriter$CallBackLock$State::Unlocked);
}

void JPEGImageWriter$CallBackLock::check() {
	$init($JPEGImageWriter$CallBackLock$State);
	if (this->lockState != $JPEGImageWriter$CallBackLock$State::Unlocked) {
		$throwNew($IllegalStateException, "Access to the writer is not allowed"_s);
	}
}

void JPEGImageWriter$CallBackLock::lock() {
	$init($JPEGImageWriter$CallBackLock$State);
	$set(this, lockState, $JPEGImageWriter$CallBackLock$State::Locked);
}

void JPEGImageWriter$CallBackLock::unlock() {
	$init($JPEGImageWriter$CallBackLock$State);
	$set(this, lockState, $JPEGImageWriter$CallBackLock$State::Unlocked);
}

JPEGImageWriter$CallBackLock::JPEGImageWriter$CallBackLock() {
}

$Class* JPEGImageWriter$CallBackLock::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"lockState", "Lcom/sun/imageio/plugins/jpeg/JPEGImageWriter$CallBackLock$State;", nullptr, $PRIVATE, $field(JPEGImageWriter$CallBackLock, lockState)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(JPEGImageWriter$CallBackLock, init$, void)},
		{"check", "()V", nullptr, 0, $virtualMethod(JPEGImageWriter$CallBackLock, check, void)},
		{"lock", "()V", nullptr, $PRIVATE, $method(JPEGImageWriter$CallBackLock, lock, void)},
		{"unlock", "()V", nullptr, $PRIVATE, $method(JPEGImageWriter$CallBackLock, unlock, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.imageio.plugins.jpeg.JPEGImageWriter$CallBackLock", "com.sun.imageio.plugins.jpeg.JPEGImageWriter", "CallBackLock", $PRIVATE | $STATIC},
		{"com.sun.imageio.plugins.jpeg.JPEGImageWriter$CallBackLock$State", "com.sun.imageio.plugins.jpeg.JPEGImageWriter$CallBackLock", "State", $PRIVATE | $STATIC | $FINAL | $ENUM},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.imageio.plugins.jpeg.JPEGImageWriter$CallBackLock",
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
		"com.sun.imageio.plugins.jpeg.JPEGImageWriter"
	};
	$loadClass(JPEGImageWriter$CallBackLock, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JPEGImageWriter$CallBackLock);
	});
	return class$;
}

$Class* JPEGImageWriter$CallBackLock::class$ = nullptr;

				} // jpeg
			} // plugins
		} // imageio
	} // sun
} // com