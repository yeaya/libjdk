#include <sun/font/CreatedFontTracker$TempFileDeletionHook.h>

#include <java/io/File.h>
#include <java/io/OutputStream.h>
#include <java/io/Serializable.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/Runnable.h>
#include <java/lang/Runtime.h>
#include <java/lang/ThreadGroup.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <java/util/HashMap.h>
#include <java/util/Iterator.h>
#include <java/util/Map$Entry.h>
#include <java/util/Set.h>
#include <sun/awt/util/ThreadGroupUtils.h>
#include <sun/font/CreatedFontTracker.h>
#include <jcpp.h>

using $File = ::java::io::File;
using $OutputStream = ::java::io::OutputStream;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $Runtime = ::java::lang::Runtime;
using $ThreadGroup = ::java::lang::ThreadGroup;
using $Void = ::java::lang::Void;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $HashMap = ::java::util::HashMap;
using $Iterator = ::java::util::Iterator;
using $Map$Entry = ::java::util::Map$Entry;
using $Set = ::java::util::Set;
using $ThreadGroupUtils = ::sun::awt::util::ThreadGroupUtils;

namespace sun {
	namespace font {

class CreatedFontTracker$TempFileDeletionHook$$Lambda$lambda$init$0 : public $PrivilegedAction {
	$class(CreatedFontTracker$TempFileDeletionHook$$Lambda$lambda$init$0, $NO_CLASS_INIT, $PrivilegedAction)
public:
	void init$() {
	}
	virtual $Object* run() override {
		 return $of(CreatedFontTracker$TempFileDeletionHook::lambda$init$0());
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<CreatedFontTracker$TempFileDeletionHook$$Lambda$lambda$init$0>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo CreatedFontTracker$TempFileDeletionHook$$Lambda$lambda$init$0::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CreatedFontTracker$TempFileDeletionHook$$Lambda$lambda$init$0, init$, void)},
	{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(CreatedFontTracker$TempFileDeletionHook$$Lambda$lambda$init$0, run, $Object*)},
	{}
};
$ClassInfo CreatedFontTracker$TempFileDeletionHook$$Lambda$lambda$init$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"sun.font.CreatedFontTracker$TempFileDeletionHook$$Lambda$lambda$init$0",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	nullptr,
	methodInfos
};
$Class* CreatedFontTracker$TempFileDeletionHook$$Lambda$lambda$init$0::load$($String* name, bool initialize) {
	$loadClass(CreatedFontTracker$TempFileDeletionHook$$Lambda$lambda$init$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* CreatedFontTracker$TempFileDeletionHook$$Lambda$lambda$init$0::class$ = nullptr;

class CreatedFontTracker$TempFileDeletionHook$$Lambda$runHooks$1 : public $Runnable {
	$class(CreatedFontTracker$TempFileDeletionHook$$Lambda$runHooks$1, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		CreatedFontTracker$TempFileDeletionHook::runHooks();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<CreatedFontTracker$TempFileDeletionHook$$Lambda$runHooks$1>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo CreatedFontTracker$TempFileDeletionHook$$Lambda$runHooks$1::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CreatedFontTracker$TempFileDeletionHook$$Lambda$runHooks$1, init$, void)},
	{"run", "()V", nullptr, $PUBLIC, $virtualMethod(CreatedFontTracker$TempFileDeletionHook$$Lambda$runHooks$1, run, void)},
	{}
};
$ClassInfo CreatedFontTracker$TempFileDeletionHook$$Lambda$runHooks$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"sun.font.CreatedFontTracker$TempFileDeletionHook$$Lambda$runHooks$1",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	methodInfos
};
$Class* CreatedFontTracker$TempFileDeletionHook$$Lambda$runHooks$1::load$($String* name, bool initialize) {
	$loadClass(CreatedFontTracker$TempFileDeletionHook$$Lambda$runHooks$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* CreatedFontTracker$TempFileDeletionHook$$Lambda$runHooks$1::class$ = nullptr;

$FieldInfo _CreatedFontTracker$TempFileDeletionHook_FieldInfo_[] = {
	{"files", "Ljava/util/HashMap;", "Ljava/util/HashMap<Ljava/io/File;Ljava/io/OutputStream;>;", $PRIVATE | $STATIC, $staticField(CreatedFontTracker$TempFileDeletionHook, files)},
	{"t", "Ljava/lang/Thread;", nullptr, $PRIVATE | $STATIC, $staticField(CreatedFontTracker$TempFileDeletionHook, t)},
	{}
};

$MethodInfo _CreatedFontTracker$TempFileDeletionHook_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(CreatedFontTracker$TempFileDeletionHook, init$, void)},
	{"add", "(Ljava/io/File;)V", nullptr, $STATIC | $SYNCHRONIZED, $staticMethod(CreatedFontTracker$TempFileDeletionHook, add, void, $File*)},
	{"init", "()V", nullptr, $STATIC, $staticMethod(CreatedFontTracker$TempFileDeletionHook, init, void)},
	{"lambda$init$0", "()Ljava/lang/Void;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(CreatedFontTracker$TempFileDeletionHook, lambda$init$0, $Void*)},
	{"remove", "(Ljava/io/File;)V", nullptr, $STATIC | $SYNCHRONIZED, $staticMethod(CreatedFontTracker$TempFileDeletionHook, remove, void, $File*)},
	{"runHooks", "()V", nullptr, $STATIC | $SYNCHRONIZED, $staticMethod(CreatedFontTracker$TempFileDeletionHook, runHooks, void)},
	{"set", "(Ljava/io/File;Ljava/io/OutputStream;)V", nullptr, $STATIC | $SYNCHRONIZED, $staticMethod(CreatedFontTracker$TempFileDeletionHook, set, void, $File*, $OutputStream*)},
	{}
};

$InnerClassInfo _CreatedFontTracker$TempFileDeletionHook_InnerClassesInfo_[] = {
	{"sun.font.CreatedFontTracker$TempFileDeletionHook", "sun.font.CreatedFontTracker", "TempFileDeletionHook", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _CreatedFontTracker$TempFileDeletionHook_ClassInfo_ = {
	$ACC_SUPER,
	"sun.font.CreatedFontTracker$TempFileDeletionHook",
	"java.lang.Object",
	nullptr,
	_CreatedFontTracker$TempFileDeletionHook_FieldInfo_,
	_CreatedFontTracker$TempFileDeletionHook_MethodInfo_,
	nullptr,
	nullptr,
	_CreatedFontTracker$TempFileDeletionHook_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.font.CreatedFontTracker"
};

$Object* allocate$CreatedFontTracker$TempFileDeletionHook($Class* clazz) {
	return $of($alloc(CreatedFontTracker$TempFileDeletionHook));
}

$HashMap* CreatedFontTracker$TempFileDeletionHook::files = nullptr;
$Thread* CreatedFontTracker$TempFileDeletionHook::t = nullptr;

void CreatedFontTracker$TempFileDeletionHook::init() {
	$init(CreatedFontTracker$TempFileDeletionHook);
	$beforeCallerSensitive();
	if (CreatedFontTracker$TempFileDeletionHook::t == nullptr) {
		$AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new(CreatedFontTracker$TempFileDeletionHook$$Lambda$lambda$init$0)));
	}
}

void CreatedFontTracker$TempFileDeletionHook::init$() {
}

void CreatedFontTracker$TempFileDeletionHook::add($File* file) {
	$load(CreatedFontTracker$TempFileDeletionHook);
	$synchronized(class$) {
		$init(CreatedFontTracker$TempFileDeletionHook);
		init();
		$nc(CreatedFontTracker$TempFileDeletionHook::files)->put(file, nullptr);
	}
}

void CreatedFontTracker$TempFileDeletionHook::set($File* file, $OutputStream* os) {
	$load(CreatedFontTracker$TempFileDeletionHook);
	$synchronized(class$) {
		$init(CreatedFontTracker$TempFileDeletionHook);
		$nc(CreatedFontTracker$TempFileDeletionHook::files)->put(file, os);
	}
}

void CreatedFontTracker$TempFileDeletionHook::remove($File* file) {
	$load(CreatedFontTracker$TempFileDeletionHook);
	$synchronized(class$) {
		$init(CreatedFontTracker$TempFileDeletionHook);
		$nc(CreatedFontTracker$TempFileDeletionHook::files)->remove(file);
	}
}

void CreatedFontTracker$TempFileDeletionHook::runHooks() {
	$load(CreatedFontTracker$TempFileDeletionHook);
	$synchronized(class$) {
		$init(CreatedFontTracker$TempFileDeletionHook);
		$useLocalCurrentObjectStackCache();
		if ($nc(CreatedFontTracker$TempFileDeletionHook::files)->isEmpty()) {
			return;
		}
		{
			$var($Iterator, i$, $nc($($nc(CreatedFontTracker$TempFileDeletionHook::files)->entrySet()))->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($Map$Entry, entry, $cast($Map$Entry, i$->next()));
				{
					try {
						if ($nc(entry)->getValue() != nullptr) {
							$nc(($cast($OutputStream, $(entry->getValue()))))->close();
						}
					} catch ($Exception& e) {
					}
					$nc(($cast($File, $($nc(entry)->getKey()))))->delete$();
				}
			}
		}
	}
}

$Void* CreatedFontTracker$TempFileDeletionHook::lambda$init$0() {
	$init(CreatedFontTracker$TempFileDeletionHook);
	$useLocalCurrentObjectStackCache();
	$var($ThreadGroup, rootTG, $ThreadGroupUtils::getRootThreadGroup());
	$assignStatic(CreatedFontTracker$TempFileDeletionHook::t, $new($Thread, rootTG, static_cast<$Runnable*>($$new(CreatedFontTracker$TempFileDeletionHook$$Lambda$runHooks$1)), "TempFontFileDeleter"_s, 0, false));
	$nc(CreatedFontTracker$TempFileDeletionHook::t)->setContextClassLoader(nullptr);
	$nc($($Runtime::getRuntime()))->addShutdownHook(CreatedFontTracker$TempFileDeletionHook::t);
	return nullptr;
}

void clinit$CreatedFontTracker$TempFileDeletionHook($Class* class$) {
	$assignStatic(CreatedFontTracker$TempFileDeletionHook::files, $new($HashMap));
	$assignStatic(CreatedFontTracker$TempFileDeletionHook::t, nullptr);
}

CreatedFontTracker$TempFileDeletionHook::CreatedFontTracker$TempFileDeletionHook() {
}

$Class* CreatedFontTracker$TempFileDeletionHook::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(CreatedFontTracker$TempFileDeletionHook$$Lambda$lambda$init$0::classInfo$.name)) {
			return CreatedFontTracker$TempFileDeletionHook$$Lambda$lambda$init$0::load$(name, initialize);
		}
		if (name->equals(CreatedFontTracker$TempFileDeletionHook$$Lambda$runHooks$1::classInfo$.name)) {
			return CreatedFontTracker$TempFileDeletionHook$$Lambda$runHooks$1::load$(name, initialize);
		}
	}
	$loadClass(CreatedFontTracker$TempFileDeletionHook, name, initialize, &_CreatedFontTracker$TempFileDeletionHook_ClassInfo_, clinit$CreatedFontTracker$TempFileDeletionHook, allocate$CreatedFontTracker$TempFileDeletionHook);
	return class$;
}

$Class* CreatedFontTracker$TempFileDeletionHook::class$ = nullptr;

	} // font
} // sun