#include <com/sun/media/sound/JSSecurityManager.h>
#include <com/sun/media/sound/JSSecurityManager$1.h>
#include <com/sun/media/sound/JSSecurityManager$2.h>
#include <com/sun/media/sound/Printer.h>
#include <java/io/BufferedReader.h>
#include <java/io/Reader.h>
#include <java/io/Serializable.h>
#include <java/lang/Error.h>
#include <java/lang/Runnable.h>
#include <java/lang/SecurityManager.h>
#include <java/lang/ThreadGroup.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/nio/file/Files.h>
#include <java/nio/file/Path.h>
#include <java/nio/file/Paths.h>
#include <java/security/AccessController.h>
#include <java/security/Permission.h>
#include <java/security/PrivilegedAction.h>
#include <java/util/ArrayList.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/Properties.h>
#include <javax/sound/sampled/AudioPermission.h>
#include <jcpp.h>

using $JSSecurityManager$1 = ::com::sun::media::sound::JSSecurityManager$1;
using $JSSecurityManager$2 = ::com::sun::media::sound::JSSecurityManager$2;
using $Printer = ::com::sun::media::sound::Printer;
using $Reader = ::java::io::Reader;
using $Serializable = ::java::io::Serializable;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $Error = ::java::lang::Error;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $SecurityManager = ::java::lang::SecurityManager;
using $ThreadGroup = ::java::lang::ThreadGroup;
using $Void = ::java::lang::Void;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $Files = ::java::nio::file::Files;
using $Path = ::java::nio::file::Path;
using $Paths = ::java::nio::file::Paths;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $ArrayList = ::java::util::ArrayList;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $Properties = ::java::util::Properties;
using $AudioPermission = ::javax::sound::sampled::AudioPermission;

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

class JSSecurityManager$$Lambda$lambda$loadProperties$0 : public $PrivilegedAction {
	$class(JSSecurityManager$$Lambda$lambda$loadProperties$0, $NO_CLASS_INIT, $PrivilegedAction)
public:
	void init$() {
	}
	virtual $Object* run() override {
		return $of(JSSecurityManager::lambda$loadProperties$0());
	}
};
$Class* JSSecurityManager$$Lambda$lambda$loadProperties$0::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(JSSecurityManager$$Lambda$lambda$loadProperties$0, init$, void)},
		{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(JSSecurityManager$$Lambda$lambda$loadProperties$0, run, $Object*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"com.sun.media.sound.JSSecurityManager$$Lambda$lambda$loadProperties$0",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		nullptr,
		methodInfos$$
	};
	$loadClass(JSSecurityManager$$Lambda$lambda$loadProperties$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JSSecurityManager$$Lambda$lambda$loadProperties$0);
	});
	return class$;
}
$Class* JSSecurityManager$$Lambda$lambda$loadProperties$0::class$ = nullptr;

class JSSecurityManager$$Lambda$lambda$loadProperties$1$1 : public $PrivilegedAction {
	$class(JSSecurityManager$$Lambda$lambda$loadProperties$1$1, $NO_CLASS_INIT, $PrivilegedAction)
public:
	void init$($Properties* properties) {
		$set(this, properties, properties);
	}
	virtual $Object* run() override {
		return JSSecurityManager::lambda$loadProperties$1(properties);
	}
	$Properties* properties = nullptr;
};
$Class* JSSecurityManager$$Lambda$lambda$loadProperties$1$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"properties", "Ljava/util/Properties;", nullptr, $PUBLIC, $field(JSSecurityManager$$Lambda$lambda$loadProperties$1$1, properties)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/Properties;)V", nullptr, $PUBLIC, $method(JSSecurityManager$$Lambda$lambda$loadProperties$1$1, init$, void, $Properties*)},
		{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(JSSecurityManager$$Lambda$lambda$loadProperties$1$1, run, $Object*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"com.sun.media.sound.JSSecurityManager$$Lambda$lambda$loadProperties$1$1",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(JSSecurityManager$$Lambda$lambda$loadProperties$1$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JSSecurityManager$$Lambda$lambda$loadProperties$1$1);
	});
	return class$;
}
$Class* JSSecurityManager$$Lambda$lambda$loadProperties$1$1::class$ = nullptr;

void JSSecurityManager::init$() {
}

void JSSecurityManager::checkRecordPermission() {
	$useLocalObjectStack();
	$var($SecurityManager, sm, $System::getSecurityManager());
	if (sm != nullptr) {
		sm->checkPermission($$new($AudioPermission, "record"_s));
	}
}

void JSSecurityManager::loadProperties($Properties* properties) {
	$useLocalObjectStack();
	$load(JSSecurityManager);
	$beforeCallerSensitive();
	$var($String, customFile, $cast($String, $AccessController::doPrivileged($cast($PrivilegedAction, $$new(JSSecurityManager$$Lambda$lambda$loadProperties$0)))));
	if (customFile != nullptr) {
		if (loadPropertiesImpl(properties, customFile, $$new($StringArray, 0))) {
			return;
		}
	}
	$AccessController::doPrivileged($cast($PrivilegedAction, $$new(JSSecurityManager$$Lambda$lambda$loadProperties$1$1, properties)));
}

bool JSSecurityManager::loadPropertiesImpl($Properties* properties, $String* first, $StringArray* more) {
	$useLocalObjectStack();
	$var($Path, fname, $Paths::get(first, more));
	try {
		$var($Reader, reader, $Files::newBufferedReader(fname));
		$var($Throwable, var$0, nullptr);
		bool var$2 = false;
		bool return$1 = false;
		try {
			try {
				$nc(properties)->load(reader);
				var$2 = true;
				return$1 = true;
				goto $finally;
			} catch ($Throwable& t$) {
				if (reader != nullptr) {
					try {
						reader->close();
					} catch ($Throwable& x2) {
						t$->addSuppressed(x2);
					}
				}
				$throw(t$);
			}
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			if (reader != nullptr) {
				reader->close();
			}
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	} catch ($Throwable& t) {
		return false;
	}
	$shouldNotReachHere();
}

$Thread* JSSecurityManager::createThread($Runnable* runnable, $String* threadName, bool isDaemon, int32_t priority, bool doStart) {
	$useLocalObjectStack();
	$var($String, name, (threadName != nullptr) ? threadName : "JSSM Thread"_s);
	$var($Thread, thread, $new($Thread, nullptr, runnable, threadName, 0, false));
	thread->setDaemon(isDaemon);
	if (priority >= 0) {
		thread->setPriority(priority);
	}
	if (doStart) {
		thread->start();
	}
	return thread;
}

$List* JSSecurityManager::getProviders($Class* providerClass) {
	$load(JSSecurityManager);
	$synchronized(class$) {
		$useLocalObjectStack();
		$beforeCallerSensitive();
		$var($List, p, $new($ArrayList, 7));
		$var($PrivilegedAction, psAction, $new($JSSecurityManager$1, providerClass));
		$var($Iterator, ps, $cast($Iterator, $AccessController::doPrivileged(psAction)));
		$var($PrivilegedAction, hasNextAction, $new($JSSecurityManager$2, ps));
		while ($$sure($Boolean, $AccessController::doPrivileged(hasNextAction))->booleanValue()) {
			try {
				$var($Object, provider, $nc(ps)->next());
				if ($nc(providerClass)->isInstance(provider)) {
					p->add(0, provider);
				}
			} catch ($Throwable& t) {
				$init($Printer);
				if ($Printer::err$) {
					t->printStackTrace();
				}
			}
		}
		return p;
	}
}

$Void* JSSecurityManager::lambda$loadProperties$1($Properties* properties) {
	$useLocalObjectStack();
	$var($String, home, $System::getProperty("java.home"_s));
	if (home == nullptr) {
		$throwNew($Error, "Can\'t find java.home ??"_s);
	}
	loadPropertiesImpl(properties, home, $$new($StringArray, {
		"conf"_s,
		"sound.properties"_s
	}));
	return nullptr;
}

$String* JSSecurityManager::lambda$loadProperties$0() {
	return $System::getProperty("javax.sound.config.file"_s);
}

JSSecurityManager::JSSecurityManager() {
}

$Class* JSSecurityManager::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("com.sun.media.sound.JSSecurityManager$$Lambda$lambda$loadProperties$0")) {
			return JSSecurityManager$$Lambda$lambda$loadProperties$0::load$(name, initialize);
		}
		if (name->equals("com.sun.media.sound.JSSecurityManager$$Lambda$lambda$loadProperties$1$1")) {
			return JSSecurityManager$$Lambda$lambda$loadProperties$1$1::load$(name, initialize);
		}
	}
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(JSSecurityManager, init$, void)},
		{"checkRecordPermission", "()V", nullptr, $STATIC, $staticMethod(JSSecurityManager, checkRecordPermission, void), "java.lang.SecurityException"},
		{"createThread", "(Ljava/lang/Runnable;Ljava/lang/String;ZIZ)Ljava/lang/Thread;", nullptr, $STATIC, $staticMethod(JSSecurityManager, createThread, $Thread*, $Runnable*, $String*, bool, int32_t, bool)},
		{"getProviders", "(Ljava/lang/Class;)Ljava/util/List;", "<T:Ljava/lang/Object;>(Ljava/lang/Class<TT;>;)Ljava/util/List<TT;>;", $STATIC | $SYNCHRONIZED, $staticMethod(JSSecurityManager, getProviders, $List*, $Class*)},
		{"lambda$loadProperties$0", "()Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(JSSecurityManager, lambda$loadProperties$0, $String*)},
		{"lambda$loadProperties$1", "(Ljava/util/Properties;)Ljava/lang/Void;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(JSSecurityManager, lambda$loadProperties$1, $Void*, $Properties*)},
		{"loadProperties", "(Ljava/util/Properties;)V", nullptr, $STATIC, $staticMethod(JSSecurityManager, loadProperties, void, $Properties*)},
		{"loadPropertiesImpl", "(Ljava/util/Properties;Ljava/lang/String;[Ljava/lang/String;)Z", nullptr, $PRIVATE | $STATIC | $TRANSIENT, $staticMethod(JSSecurityManager, loadPropertiesImpl, bool, $Properties*, $String*, $StringArray*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.media.sound.JSSecurityManager$2", nullptr, nullptr, 0},
		{"com.sun.media.sound.JSSecurityManager$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"com.sun.media.sound.JSSecurityManager",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"com.sun.media.sound.JSSecurityManager$2,com.sun.media.sound.JSSecurityManager$1"
	};
	$loadClass(JSSecurityManager, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JSSecurityManager);
	});
	return class$;
}

$Class* JSSecurityManager::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com