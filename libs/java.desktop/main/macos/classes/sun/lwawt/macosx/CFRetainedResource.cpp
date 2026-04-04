#include <sun/lwawt/macosx/CFRetainedResource.h>
#include <java/util/concurrent/locks/Lock.h>
#include <java/util/concurrent/locks/ReadWriteLock.h>
#include <java/util/concurrent/locks/ReentrantReadWriteLock.h>
#include <sun/lwawt/macosx/CFRetainedResource$CFNativeAction.h>
#include <sun/lwawt/macosx/CFRetainedResource$CFNativeActionGet.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ReentrantReadWriteLock = ::java::util::concurrent::locks::ReentrantReadWriteLock;
using $CFRetainedResource$CFNativeAction = ::sun::lwawt::macosx::CFRetainedResource$CFNativeAction;
using $CFRetainedResource$CFNativeActionGet = ::sun::lwawt::macosx::CFRetainedResource$CFNativeActionGet;

namespace sun {
	namespace lwawt {
		namespace macosx {

void CFRetainedResource::nativeCFRelease(int64_t ptr, bool disposeOnAppKitThread) {
	$init(CFRetainedResource);
	$prepareNativeStatic(nativeCFRelease, void, int64_t ptr, bool disposeOnAppKitThread);
	$invokeNativeStatic(ptr, disposeOnAppKitThread);
	$finishNativeStatic();
}

void CFRetainedResource::init$(int64_t ptr, bool disposeOnAppKitThread) {
	$set(this, lock, $new($ReentrantReadWriteLock));
	$set(this, writeLock, this->lock->writeLock());
	$set(this, readLock, this->lock->readLock());
	this->disposeOnAppKitThread = disposeOnAppKitThread;
	this->ptr = ptr;
}

void CFRetainedResource::setPtr(int64_t ptr) {
	$nc(this->writeLock)->lock();
	$var($Throwable, var$0, nullptr);
	try {
		if (this->ptr != 0) {
			dispose();
		}
		this->ptr = ptr;
	} catch ($Throwable& var$1) {
		$assign(var$0, var$1);
	} /*finally*/ {
		this->writeLock->unlock();
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
}

void CFRetainedResource::dispose() {
	int64_t oldPtr = 0;
	$nc(this->writeLock)->lock();
	$var($Throwable, var$0, nullptr);
	bool return$1 = false;
	try {
		if (this->ptr == 0) {
			return$1 = true;
			goto $finally;
		}
		oldPtr = this->ptr;
		this->ptr = 0;
	} catch ($Throwable& var$2) {
		$assign(var$0, var$2);
	} $finally: {
		this->writeLock->unlock();
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
	if (return$1) {
		return;
	}
	nativeCFRelease(oldPtr, this->disposeOnAppKitThread);
}

void CFRetainedResource::execute($CFRetainedResource$CFNativeAction* action) {
	$nc(this->readLock)->lock();
	$var($Throwable, var$0, nullptr);
	try {
		if (this->ptr != 0) {
			$nc(action)->run(this->ptr);
		}
	} catch ($Throwable& var$1) {
		$assign(var$0, var$1);
	} /*finally*/ {
		this->readLock->unlock();
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
}

int64_t CFRetainedResource::executeGet($CFRetainedResource$CFNativeActionGet* action) {
	$nc(this->readLock)->lock();
	$var($Throwable, var$0, nullptr);
	int64_t var$2 = 0;
	bool return$1 = false;
	try {
		if (this->ptr != 0) {
			var$2 = $nc(action)->run(this->ptr);
			return$1 = true;
			goto $finally;
		}
	} catch ($Throwable& var$3) {
		$assign(var$0, var$3);
	} $finally: {
		this->readLock->unlock();
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
	if (return$1) {
		return var$2;
	}
	return 0;
}

void CFRetainedResource::finalize() {
	dispose();
}

CFRetainedResource::CFRetainedResource() {
}

$Class* CFRetainedResource::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"disposeOnAppKitThread", "Z", nullptr, $PRIVATE | $FINAL, $field(CFRetainedResource, disposeOnAppKitThread)},
		{"ptr", "J", nullptr, $PROTECTED | $VOLATILE, $field(CFRetainedResource, ptr)},
		{"lock", "Ljava/util/concurrent/locks/ReadWriteLock;", nullptr, $PRIVATE | $FINAL, $field(CFRetainedResource, lock)},
		{"writeLock", "Ljava/util/concurrent/locks/Lock;", nullptr, $PRIVATE | $FINAL, $field(CFRetainedResource, writeLock)},
		{"readLock", "Ljava/util/concurrent/locks/Lock;", nullptr, $PRIVATE | $FINAL, $field(CFRetainedResource, readLock)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(JZ)V", nullptr, $PROTECTED, $method(CFRetainedResource, init$, void, int64_t, bool)},
		{"dispose", "()V", nullptr, $PROTECTED, $virtualMethod(CFRetainedResource, dispose, void)},
		{"execute", "(Lsun/lwawt/macosx/CFRetainedResource$CFNativeAction;)V", nullptr, $PUBLIC | $FINAL, $method(CFRetainedResource, execute, void, $CFRetainedResource$CFNativeAction*)},
		{"executeGet", "(Lsun/lwawt/macosx/CFRetainedResource$CFNativeActionGet;)J", nullptr, $FINAL, $method(CFRetainedResource, executeGet, int64_t, $CFRetainedResource$CFNativeActionGet*)},
		{"finalize", "()V", nullptr, $PROTECTED | $FINAL, $virtualMethod(CFRetainedResource, finalize, void), "java.lang.Throwable"},
		{"nativeCFRelease", "(JZ)V", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(CFRetainedResource, nativeCFRelease, void, int64_t, bool)},
		{"setPtr", "(J)V", nullptr, $PROTECTED, $virtualMethod(CFRetainedResource, setPtr, void, int64_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.lwawt.macosx.CFRetainedResource$CFNativeActionGet", "sun.lwawt.macosx.CFRetainedResource", "CFNativeActionGet", $STATIC | $INTERFACE | $ABSTRACT},
		{"sun.lwawt.macosx.CFRetainedResource$CFNativeAction", "sun.lwawt.macosx.CFRetainedResource", "CFNativeAction", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.lwawt.macosx.CFRetainedResource",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"sun.lwawt.macosx.CFRetainedResource$CFNativeActionGet,sun.lwawt.macosx.CFRetainedResource$CFNativeAction"
	};
	$loadClass(CFRetainedResource, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CFRetainedResource);
	});
	return class$;
}

$Class* CFRetainedResource::class$ = nullptr;

		} // macosx
	} // lwawt
} // sun