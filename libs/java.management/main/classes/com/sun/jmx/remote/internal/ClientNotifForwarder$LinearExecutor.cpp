#include <com/sun/jmx/remote/internal/ClientNotifForwarder$LinearExecutor.h>
#include <com/sun/jmx/remote/internal/ClientNotifForwarder.h>
#include <java/io/Serializable.h>
#include <java/lang/Runnable.h>
#include <java/lang/ThreadGroup.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <jcpp.h>

using $ClientNotifForwarder = ::com::sun::jmx::remote::internal::ClientNotifForwarder;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $ThreadGroup = ::java::lang::ThreadGroup;
using $MethodHandle = ::java::lang::invoke::MethodHandle;

namespace com {
	namespace sun {
		namespace jmx {
			namespace remote {
				namespace internal {

class ClientNotifForwarder$LinearExecutor$$Lambda$lambda$execute$0 : public $Runnable {
	$class(ClientNotifForwarder$LinearExecutor$$Lambda$lambda$execute$0, $NO_CLASS_INIT, $Runnable)
public:
	void init$(ClientNotifForwarder$LinearExecutor* inst) {
		$set(this, inst$, inst);
	}
	virtual void run() override {
		$nc(inst$)->lambda$execute$0();
	}
	ClientNotifForwarder$LinearExecutor* inst$ = nullptr;
};
$Class* ClientNotifForwarder$LinearExecutor$$Lambda$lambda$execute$0::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(ClientNotifForwarder$LinearExecutor$$Lambda$lambda$execute$0, inst$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/jmx/remote/internal/ClientNotifForwarder$LinearExecutor;)V", nullptr, $PUBLIC, $method(ClientNotifForwarder$LinearExecutor$$Lambda$lambda$execute$0, init$, void, ClientNotifForwarder$LinearExecutor*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(ClientNotifForwarder$LinearExecutor$$Lambda$lambda$execute$0, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"com.sun.jmx.remote.internal.ClientNotifForwarder$LinearExecutor$$Lambda$lambda$execute$0",
		"java.lang.Object",
		"java.lang.Runnable",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(ClientNotifForwarder$LinearExecutor$$Lambda$lambda$execute$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ClientNotifForwarder$LinearExecutor$$Lambda$lambda$execute$0);
	});
	return class$;
}
$Class* ClientNotifForwarder$LinearExecutor$$Lambda$lambda$execute$0::class$ = nullptr;

void ClientNotifForwarder$LinearExecutor::init$() {
}

void ClientNotifForwarder$LinearExecutor::execute($Runnable* command) {
	$synchronized(this) {
		$useLocalObjectStack();
		if (this->command != nullptr) {
			$throwNew($IllegalArgumentException, "More than one command"_s);
		}
		$set(this, command, command);
		if (this->thread == nullptr) {
			$var($StringBuilder, var$0, $new($StringBuilder));
			var$0->append("ClientNotifForwarder-"_s);
			$init($ClientNotifForwarder);
			var$0->append(++$ClientNotifForwarder::threadId);
			$set(this, thread, $new($Thread, nullptr, $$new(ClientNotifForwarder$LinearExecutor$$Lambda$lambda$execute$0, this), $$str(var$0), 0, false));
			this->thread->setDaemon(true);
			this->thread->start();
		}
	}
}

void ClientNotifForwarder$LinearExecutor::lambda$execute$0() {
	$useLocalObjectStack();
	while (true) {
		$var($Runnable, r, nullptr);
		$synchronized(this) {
			if (this->command == nullptr) {
				$set(this, thread, nullptr);
				return;
			} else {
				$assign(r, this->command);
				$set(this, command, nullptr);
			}
		}
		$nc(r)->run();
	}
}

ClientNotifForwarder$LinearExecutor::ClientNotifForwarder$LinearExecutor() {
}

$Class* ClientNotifForwarder$LinearExecutor::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("com.sun.jmx.remote.internal.ClientNotifForwarder$LinearExecutor$$Lambda$lambda$execute$0")) {
			return ClientNotifForwarder$LinearExecutor$$Lambda$lambda$execute$0::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"command", "Ljava/lang/Runnable;", nullptr, $PRIVATE, $field(ClientNotifForwarder$LinearExecutor, command)},
		{"thread", "Ljava/lang/Thread;", nullptr, $PRIVATE, $field(ClientNotifForwarder$LinearExecutor, thread)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(ClientNotifForwarder$LinearExecutor, init$, void)},
		{"execute", "(Ljava/lang/Runnable;)V", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(ClientNotifForwarder$LinearExecutor, execute, void, $Runnable*)},
		{"lambda$execute$0", "()V", nullptr, $PRIVATE | $SYNTHETIC, $method(ClientNotifForwarder$LinearExecutor, lambda$execute$0, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.jmx.remote.internal.ClientNotifForwarder$LinearExecutor", "com.sun.jmx.remote.internal.ClientNotifForwarder", "LinearExecutor", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.jmx.remote.internal.ClientNotifForwarder$LinearExecutor",
		"java.lang.Object",
		"java.util.concurrent.Executor",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.jmx.remote.internal.ClientNotifForwarder"
	};
	$loadClass(ClientNotifForwarder$LinearExecutor, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ClientNotifForwarder$LinearExecutor);
	});
	return class$;
}

$Class* ClientNotifForwarder$LinearExecutor::class$ = nullptr;

				} // internal
			} // remote
		} // jmx
	} // sun
} // com