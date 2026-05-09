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
using $ThreadGroupUtils = ::sun::awt::util::ThreadGroupUtils;

namespace sun {
	namespace font {

class CreatedFontTracker$TempFileDeletionHook$$Lambda$lambda$init$0 : public $PrivilegedAction {
	$class(CreatedFontTracker$TempFileDeletionHook$$Lambda$lambda$init$0, $NO_CLASS_INIT, $PrivilegedAction)
public:
	void init$() {
	}
	virtual $Object* run() override {
		return CreatedFontTracker$TempFileDeletionHook::lambda$init$0();
	}
};
$Class* CreatedFontTracker$TempFileDeletionHook$$Lambda$lambda$init$0::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(CreatedFontTracker$TempFileDeletionHook$$Lambda$lambda$init$0, init$, void)},
		{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(CreatedFontTracker$TempFileDeletionHook$$Lambda$lambda$init$0, run, $Object*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"sun.font.CreatedFontTracker$TempFileDeletionHook$$Lambda$lambda$init$0",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		nullptr,
		methodInfos$$
	};
	$loadClass(CreatedFontTracker$TempFileDeletionHook$$Lambda$lambda$init$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CreatedFontTracker$TempFileDeletionHook$$Lambda$lambda$init$0);
	});
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
};
$Class* CreatedFontTracker$TempFileDeletionHook$$Lambda$runHooks$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(CreatedFontTracker$TempFileDeletionHook$$Lambda$runHooks$1, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(CreatedFontTracker$TempFileDeletionHook$$Lambda$runHooks$1, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"sun.font.CreatedFontTracker$TempFileDeletionHook$$Lambda$runHooks$1",
		"java.lang.Object",
		"java.lang.Runnable",
		nullptr,
		methodInfos$$
	};
	$loadClass(CreatedFontTracker$TempFileDeletionHook$$Lambda$runHooks$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CreatedFontTracker$TempFileDeletionHook$$Lambda$runHooks$1);
	});
	return class$;
}
$Class* CreatedFontTracker$TempFileDeletionHook$$Lambda$runHooks$1::class$ = nullptr;

$HashMap* CreatedFontTracker$TempFileDeletionHook::files = nullptr;
$Thread* CreatedFontTracker$TempFileDeletionHook::t = nullptr;

void CreatedFontTracker$TempFileDeletionHook::init() {
	$init(CreatedFontTracker$TempFileDeletionHook);
	$beforeCallerSensitive();
	if (CreatedFontTracker$TempFileDeletionHook::t == nullptr) {
		$AccessController::doPrivileged($cast($PrivilegedAction, $$new(CreatedFontTracker$TempFileDeletionHook$$Lambda$lambda$init$0)));
	}
}

void CreatedFontTracker$TempFileDeletionHook::init$() {
}

void CreatedFontTracker$TempFileDeletionHook::add($File* file) {
	$init(CreatedFontTracker$TempFileDeletionHook);
	$synchronized(class$) {
		init();
		$nc(CreatedFontTracker$TempFileDeletionHook::files)->put(file, nullptr);
	}
}

void CreatedFontTracker$TempFileDeletionHook::set($File* file, $OutputStream* os) {
	$init(CreatedFontTracker$TempFileDeletionHook);
	$synchronized(class$) {
		$nc(CreatedFontTracker$TempFileDeletionHook::files)->put(file, os);
	}
}

void CreatedFontTracker$TempFileDeletionHook::remove($File* file) {
	$init(CreatedFontTracker$TempFileDeletionHook);
	$synchronized(class$) {
		$nc(CreatedFontTracker$TempFileDeletionHook::files)->remove(file);
	}
}

void CreatedFontTracker$TempFileDeletionHook::runHooks() {
	$init(CreatedFontTracker$TempFileDeletionHook);
	$synchronized(class$) {
		$useLocalObjectStack();
		if ($nc(CreatedFontTracker$TempFileDeletionHook::files)->isEmpty()) {
			return;
		}
		{
			$var($Iterator, i$, $$nc(CreatedFontTracker$TempFileDeletionHook::files->entrySet())->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($Map$Entry, entry, $cast($Map$Entry, i$->next()));
				{
					try {
						if ($nc(entry)->getValue() != nullptr) {
							$$sure($OutputStream, entry->getValue())->close();
						}
					} catch ($Exception& e) {
					}
					$$sure($File, $nc(entry)->getKey())->delete$();
				}
			}
		}
	}
}

$Void* CreatedFontTracker$TempFileDeletionHook::lambda$init$0() {
	$init(CreatedFontTracker$TempFileDeletionHook);
	$useLocalObjectStack();
	$var($ThreadGroup, rootTG, $ThreadGroupUtils::getRootThreadGroup());
	$assignStatic(CreatedFontTracker$TempFileDeletionHook::t, $new($Thread, rootTG, $$new(CreatedFontTracker$TempFileDeletionHook$$Lambda$runHooks$1), "TempFontFileDeleter"_s, 0, false));
	CreatedFontTracker$TempFileDeletionHook::t->setContextClassLoader(nullptr);
	$$nc($Runtime::getRuntime())->addShutdownHook(CreatedFontTracker$TempFileDeletionHook::t);
	return nullptr;
}

void CreatedFontTracker$TempFileDeletionHook::clinit$($Class* clazz) {
	$assignStatic(CreatedFontTracker$TempFileDeletionHook::files, $new($HashMap));
	$assignStatic(CreatedFontTracker$TempFileDeletionHook::t, nullptr);
}

CreatedFontTracker$TempFileDeletionHook::CreatedFontTracker$TempFileDeletionHook() {
}

$Class* CreatedFontTracker$TempFileDeletionHook::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("sun.font.CreatedFontTracker$TempFileDeletionHook$$Lambda$lambda$init$0")) {
			return CreatedFontTracker$TempFileDeletionHook$$Lambda$lambda$init$0::load$(name, initialize);
		}
		if (name->equals("sun.font.CreatedFontTracker$TempFileDeletionHook$$Lambda$runHooks$1")) {
			return CreatedFontTracker$TempFileDeletionHook$$Lambda$runHooks$1::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"files", "Ljava/util/HashMap;", "Ljava/util/HashMap<Ljava/io/File;Ljava/io/OutputStream;>;", $PRIVATE | $STATIC, $staticField(CreatedFontTracker$TempFileDeletionHook, files)},
		{"t", "Ljava/lang/Thread;", nullptr, $PRIVATE | $STATIC, $staticField(CreatedFontTracker$TempFileDeletionHook, t)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(CreatedFontTracker$TempFileDeletionHook, init$, void)},
		{"add", "(Ljava/io/File;)V", nullptr, $STATIC | $SYNCHRONIZED, $staticMethod(CreatedFontTracker$TempFileDeletionHook, add, void, $File*)},
		{"init", "()V", nullptr, $STATIC, $staticMethod(CreatedFontTracker$TempFileDeletionHook, init, void)},
		{"lambda$init$0", "()Ljava/lang/Void;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(CreatedFontTracker$TempFileDeletionHook, lambda$init$0, $Void*)},
		{"remove", "(Ljava/io/File;)V", nullptr, $STATIC | $SYNCHRONIZED, $staticMethod(CreatedFontTracker$TempFileDeletionHook, remove, void, $File*)},
		{"runHooks", "()V", nullptr, $STATIC | $SYNCHRONIZED, $staticMethod(CreatedFontTracker$TempFileDeletionHook, runHooks, void)},
		{"set", "(Ljava/io/File;Ljava/io/OutputStream;)V", nullptr, $STATIC | $SYNCHRONIZED, $staticMethod(CreatedFontTracker$TempFileDeletionHook, set, void, $File*, $OutputStream*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.font.CreatedFontTracker$TempFileDeletionHook", "sun.font.CreatedFontTracker", "TempFileDeletionHook", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.font.CreatedFontTracker$TempFileDeletionHook",
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
		"sun.font.CreatedFontTracker"
	};
	$loadClass(CreatedFontTracker$TempFileDeletionHook, name, initialize, &classInfo$$, CreatedFontTracker$TempFileDeletionHook::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(CreatedFontTracker$TempFileDeletionHook);
	});
	return class$;
}

$Class* CreatedFontTracker$TempFileDeletionHook::class$ = nullptr;

	} // font
} // sun