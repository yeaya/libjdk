#include <sun/rmi/transport/DGCClient$EndpointEntry$RenewCleanThread.h>
#include <java/io/Serializable.h>
#include <java/lang/InterruptedException.h>
#include <java/lang/Math.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/ref/Reference.h>
#include <java/lang/ref/ReferenceQueue.h>
#include <java/security/AccessControlContext.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <java/util/HashSet.h>
#include <java/util/Set.h>
#include <sun/rmi/transport/DGCClient$EndpointEntry$RefEntry$PhantomLiveRef.h>
#include <sun/rmi/transport/DGCClient$EndpointEntry.h>
#include <sun/rmi/transport/DGCClient.h>
#include <jcpp.h>

#undef MIN_VALUE
#undef SOCKET_ACC

using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InterruptedException = ::java::lang::InterruptedException;
using $Long = ::java::lang::Long;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $Void = ::java::lang::Void;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $HashSet = ::java::util::HashSet;
using $Set = ::java::util::Set;
using $DGCClient = ::sun::rmi::transport::DGCClient;
using $DGCClient$EndpointEntry = ::sun::rmi::transport::DGCClient$EndpointEntry;
using $DGCClient$EndpointEntry$RefEntry$PhantomLiveRef = ::sun::rmi::transport::DGCClient$EndpointEntry$RefEntry$PhantomLiveRef;

namespace sun {
	namespace rmi {
		namespace transport {

class DGCClient$EndpointEntry$RenewCleanThread$$Lambda$lambda$run$0 : public $PrivilegedAction {
	$class(DGCClient$EndpointEntry$RenewCleanThread$$Lambda$lambda$run$0, $NO_CLASS_INIT, $PrivilegedAction)
public:
	void init$(DGCClient$EndpointEntry$RenewCleanThread* inst, bool needRenewal_, $Set* refsToDirty_, int64_t sequenceNum_) {
		$set(this, inst$, inst);
		this->needRenewal_ = needRenewal_;
		$set(this, refsToDirty_, refsToDirty_);
		this->sequenceNum_ = sequenceNum_;
	}
	virtual $Object* run() override {
		return $nc(inst$)->lambda$run$0(needRenewal_, refsToDirty_, sequenceNum_);
	}
	DGCClient$EndpointEntry$RenewCleanThread* inst$ = nullptr;
	bool needRenewal_ = false;
	$Set* refsToDirty_ = nullptr;
	int64_t sequenceNum_ = 0;
};
$Class* DGCClient$EndpointEntry$RenewCleanThread$$Lambda$lambda$run$0::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(DGCClient$EndpointEntry$RenewCleanThread$$Lambda$lambda$run$0, inst$)},
		{"needRenewal_", "Z", nullptr, $PUBLIC, $field(DGCClient$EndpointEntry$RenewCleanThread$$Lambda$lambda$run$0, needRenewal_)},
		{"refsToDirty_", "Ljava/util/Set;", nullptr, $PUBLIC, $field(DGCClient$EndpointEntry$RenewCleanThread$$Lambda$lambda$run$0, refsToDirty_)},
		{"sequenceNum_", "J", nullptr, $PUBLIC, $field(DGCClient$EndpointEntry$RenewCleanThread$$Lambda$lambda$run$0, sequenceNum_)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/rmi/transport/DGCClient$EndpointEntry$RenewCleanThread;ZLjava/util/Set;J)V", nullptr, $PUBLIC, $method(DGCClient$EndpointEntry$RenewCleanThread$$Lambda$lambda$run$0, init$, void, DGCClient$EndpointEntry$RenewCleanThread*, bool, $Set*, int64_t)},
		{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(DGCClient$EndpointEntry$RenewCleanThread$$Lambda$lambda$run$0, run, $Object*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"sun.rmi.transport.DGCClient$EndpointEntry$RenewCleanThread$$Lambda$lambda$run$0",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(DGCClient$EndpointEntry$RenewCleanThread$$Lambda$lambda$run$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DGCClient$EndpointEntry$RenewCleanThread$$Lambda$lambda$run$0);
	});
	return class$;
}
$Class* DGCClient$EndpointEntry$RenewCleanThread$$Lambda$lambda$run$0::class$ = nullptr;

void DGCClient$EndpointEntry$RenewCleanThread::init$($DGCClient$EndpointEntry* this$0) {
	$set(this, this$0, this$0);
}

void DGCClient$EndpointEntry$RenewCleanThread::run() {
	$useLocalObjectStack();
	$beforeCallerSensitive();
	do {
		int64_t timeToWait = 0;
		$var($DGCClient$EndpointEntry$RefEntry$PhantomLiveRef, phantom, nullptr);
		bool needRenewal = false;
		$var($Set, refsToDirty, nullptr);
		int64_t sequenceNum = $Long::MIN_VALUE;
		$synchronized(this->this$0) {
			int64_t timeUntilRenew = this->this$0->renewTime - $System::currentTimeMillis();
			timeToWait = $Math::max(timeUntilRenew, (int64_t)1);
			if (!$nc(this->this$0->pendingCleans)->isEmpty()) {
				$init($DGCClient);
				timeToWait = $Math::min(timeToWait, $DGCClient::cleanInterval);
			}
			this->this$0->interruptible = true;
		}
		try {
			$assign(phantom, $cast($DGCClient$EndpointEntry$RefEntry$PhantomLiveRef, $nc(this->this$0->refQueue)->remove(timeToWait)));
		} catch ($InterruptedException& e) {
		}
		$synchronized(this->this$0) {
			this->this$0->interruptible = false;
			$Thread::interrupted();
			if (phantom != nullptr) {
				this->this$0->processPhantomRefs(phantom);
			}
			int64_t currentTime = $System::currentTimeMillis();
			if (currentTime > this->this$0->renewTime) {
				needRenewal = true;
				if (!$nc(this->this$0->invalidRefs)->isEmpty()) {
					$assign(refsToDirty, this->this$0->invalidRefs);
					$set(this->this$0, invalidRefs, $new($HashSet, 5));
				}
				sequenceNum = $DGCClient::getNextSequenceNum();
			}
		}
		bool needRenewal_ = needRenewal;
		$var($Set, refsToDirty_, refsToDirty);
		int64_t sequenceNum_ = sequenceNum;
		$init($DGCClient);
		$AccessController::doPrivileged($cast($PrivilegedAction, $$new(DGCClient$EndpointEntry$RenewCleanThread$$Lambda$lambda$run$0, this, needRenewal_, refsToDirty_, sequenceNum_)), $DGCClient::SOCKET_ACC);
	} while (!this->this$0->removed || !$nc(this->this$0->pendingCleans)->isEmpty());
}

$Void* DGCClient$EndpointEntry$RenewCleanThread::lambda$run$0(bool needRenewal_, $Set* refsToDirty_, int64_t sequenceNum_) {
	if (needRenewal_) {
		this->this$0->makeDirtyCall(refsToDirty_, sequenceNum_);
	}
	if (!$nc(this->this$0->pendingCleans)->isEmpty()) {
		this->this$0->makeCleanCalls();
	}
	return nullptr;
}

DGCClient$EndpointEntry$RenewCleanThread::DGCClient$EndpointEntry$RenewCleanThread() {
}

$Class* DGCClient$EndpointEntry$RenewCleanThread::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("sun.rmi.transport.DGCClient$EndpointEntry$RenewCleanThread$$Lambda$lambda$run$0")) {
			return DGCClient$EndpointEntry$RenewCleanThread$$Lambda$lambda$run$0::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/rmi/transport/DGCClient$EndpointEntry;", nullptr, $FINAL | $SYNTHETIC, $field(DGCClient$EndpointEntry$RenewCleanThread, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/rmi/transport/DGCClient$EndpointEntry;)V", nullptr, $PRIVATE, $method(DGCClient$EndpointEntry$RenewCleanThread, init$, void, $DGCClient$EndpointEntry*)},
		{"lambda$run$0", "(ZLjava/util/Set;J)Ljava/lang/Void;", nullptr, $PRIVATE | $SYNTHETIC, $method(DGCClient$EndpointEntry$RenewCleanThread, lambda$run$0, $Void*, bool, $Set*, int64_t)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(DGCClient$EndpointEntry$RenewCleanThread, run, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.rmi.transport.DGCClient$EndpointEntry", "sun.rmi.transport.DGCClient", "EndpointEntry", $PRIVATE | $STATIC},
		{"sun.rmi.transport.DGCClient$EndpointEntry$RenewCleanThread", "sun.rmi.transport.DGCClient$EndpointEntry", "RenewCleanThread", $PRIVATE},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.rmi.transport.DGCClient$EndpointEntry$RenewCleanThread",
		"java.lang.Object",
		"java.lang.Runnable",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.rmi.transport.DGCClient"
	};
	$loadClass(DGCClient$EndpointEntry$RenewCleanThread, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DGCClient$EndpointEntry$RenewCleanThread);
	});
	return class$;
}

$Class* DGCClient$EndpointEntry$RenewCleanThread::class$ = nullptr;

		} // transport
	} // rmi
} // sun