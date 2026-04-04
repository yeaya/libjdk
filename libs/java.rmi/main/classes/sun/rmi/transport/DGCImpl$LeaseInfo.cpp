#include <sun/rmi/transport/DGCImpl$LeaseInfo.h>
#include <java/rmi/dgc/VMID.h>
#include <java/util/HashSet.h>
#include <java/util/Set.h>
#include <java/util/logging/Level.h>
#include <sun/rmi/runtime/Log.h>
#include <sun/rmi/transport/DGCImpl.h>
#include <jcpp.h>

#undef BRIEF

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $VMID = ::java::rmi::dgc::VMID;
using $HashSet = ::java::util::HashSet;
using $Log = ::sun::rmi::runtime::Log;
using $DGCImpl = ::sun::rmi::transport::DGCImpl;

namespace sun {
	namespace rmi {
		namespace transport {

void DGCImpl$LeaseInfo::init$($VMID* vmid, int64_t lease) {
	$set(this, notifySet, $new($HashSet));
	$set(this, vmid, vmid);
	this->expiration = $System::currentTimeMillis() + lease;
}

void DGCImpl$LeaseInfo::renew(int64_t lease) {
	$synchronized(this) {
		int64_t newExpiration = $System::currentTimeMillis() + lease;
		if (newExpiration > this->expiration) {
			this->expiration = newExpiration;
		}
	}
}

bool DGCImpl$LeaseInfo::expired(int64_t time) {
	if (this->expiration < time) {
		$init($DGCImpl);
		$init($Log);
		if ($nc($DGCImpl::dgcLog)->isLoggable($Log::BRIEF)) {
			$DGCImpl::dgcLog->log($Log::BRIEF, $($nc(this->vmid)->toString()));
		}
		return true;
	} else {
		return false;
	}
}

DGCImpl$LeaseInfo::DGCImpl$LeaseInfo() {
}

$Class* DGCImpl$LeaseInfo::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"vmid", "Ljava/rmi/dgc/VMID;", nullptr, 0, $field(DGCImpl$LeaseInfo, vmid)},
		{"expiration", "J", nullptr, 0, $field(DGCImpl$LeaseInfo, expiration)},
		{"notifySet", "Ljava/util/Set;", "Ljava/util/Set<Lsun/rmi/transport/Target;>;", 0, $field(DGCImpl$LeaseInfo, notifySet)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/rmi/dgc/VMID;J)V", nullptr, 0, $method(DGCImpl$LeaseInfo, init$, void, $VMID*, int64_t)},
		{"expired", "(J)Z", nullptr, 0, $virtualMethod(DGCImpl$LeaseInfo, expired, bool, int64_t)},
		{"renew", "(J)V", nullptr, $SYNCHRONIZED, $virtualMethod(DGCImpl$LeaseInfo, renew, void, int64_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.rmi.transport.DGCImpl$LeaseInfo", "sun.rmi.transport.DGCImpl", "LeaseInfo", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.rmi.transport.DGCImpl$LeaseInfo",
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
		"sun.rmi.transport.DGCImpl"
	};
	$loadClass(DGCImpl$LeaseInfo, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DGCImpl$LeaseInfo);
	});
	return class$;
}

$Class* DGCImpl$LeaseInfo::class$ = nullptr;

		} // transport
	} // rmi
} // sun