#include <sun/rmi/transport/GC$LatencyRequest.h>
#include <java/lang/IllegalStateException.h>
#include <java/lang/InternalError.h>
#include <java/util/SortedSet.h>
#include <java/util/TreeSet.h>
#include <sun/rmi/transport/GC.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InternalError = ::java::lang::InternalError;
using $MethodInfo = ::java::lang::MethodInfo;
using $SortedSet = ::java::util::SortedSet;
using $TreeSet = ::java::util::TreeSet;
using $GC = ::sun::rmi::transport::GC;

namespace sun {
	namespace rmi {
		namespace transport {

int64_t GC$LatencyRequest::counter = 0;
$SortedSet* GC$LatencyRequest::requests = nullptr;

void GC$LatencyRequest::adjustLatencyIfNeeded() {
	$init(GC$LatencyRequest);
	if ((GC$LatencyRequest::requests == nullptr) || GC$LatencyRequest::requests->isEmpty()) {
		$init($GC);
		if ($GC::latencyTarget != (int64_t)0x7fffffffffffffff) {
			$GC::setLatencyTarget((int64_t)0x7fffffffffffffff);
		}
	} else {
		$var(GC$LatencyRequest, r, $cast(GC$LatencyRequest, GC$LatencyRequest::requests->first()));
		$init($GC);
		if ($nc(r)->latency != $GC::latencyTarget) {
			$GC::setLatencyTarget(r->latency);
		}
	}
}

void GC$LatencyRequest::init$(int64_t ms) {
	$useLocalObjectStack();
	if (ms <= 0) {
		$throwNew($IllegalArgumentException, $$str({"Non-positive latency: "_s, $$str(ms)}));
	}
	this->latency = ms;
	$init($GC);
	$synchronized($GC::lock) {
		this->id = ++GC$LatencyRequest::counter;
		if (GC$LatencyRequest::requests == nullptr) {
			$assignStatic(GC$LatencyRequest::requests, $new($TreeSet));
		}
		$nc(GC$LatencyRequest::requests)->add(this);
		adjustLatencyIfNeeded();
	}
}

void GC$LatencyRequest::cancel() {
	$init($GC);
	$synchronized($GC::lock) {
		if (this->latency == (int64_t)0x7fffffffffffffff) {
			$throwNew($IllegalStateException, "Request already cancelled"_s);
		}
		if (!$nc(GC$LatencyRequest::requests)->remove(this)) {
			$throwNew($InternalError, $$str({"Latency request "_s, this, " not found"_s}));
		}
		if (GC$LatencyRequest::requests->isEmpty()) {
			$assignStatic(GC$LatencyRequest::requests, nullptr);
		}
		this->latency = (int64_t)0x7fffffffffffffff;
		adjustLatencyIfNeeded();
	}
}

int32_t GC$LatencyRequest::compareTo(GC$LatencyRequest* r) {
	int64_t d = this->latency - $nc(r)->latency;
	if (d == 0) {
		d = this->id - r->id;
	}
	return (d < 0) ? -1 : ((d > 0) ? +1 : 0);
}

$String* GC$LatencyRequest::toString() {
	$useLocalObjectStack();
	return ($str({$(GC$LatencyRequest::class$->getName()), "["_s, $$str(this->latency), ","_s, $$str(this->id), "]"_s}));
}

int32_t GC$LatencyRequest::compareTo(Object$* r) {
	return this->compareTo($cast(GC$LatencyRequest, r));
}

void GC$LatencyRequest::clinit$($Class* clazz) {
	GC$LatencyRequest::counter = 0;
	$assignStatic(GC$LatencyRequest::requests, nullptr);
}

GC$LatencyRequest::GC$LatencyRequest() {
}

$Class* GC$LatencyRequest::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"counter", "J", nullptr, $PRIVATE | $STATIC, $staticField(GC$LatencyRequest, counter)},
		{"requests", "Ljava/util/SortedSet;", "Ljava/util/SortedSet<Lsun/rmi/transport/GC$LatencyRequest;>;", $PRIVATE | $STATIC, $staticField(GC$LatencyRequest, requests)},
		{"latency", "J", nullptr, $PRIVATE, $field(GC$LatencyRequest, latency)},
		{"id", "J", nullptr, $PRIVATE, $field(GC$LatencyRequest, id)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(J)V", nullptr, $PRIVATE, $method(GC$LatencyRequest, init$, void, int64_t)},
		{"adjustLatencyIfNeeded", "()V", nullptr, $PRIVATE | $STATIC, $staticMethod(GC$LatencyRequest, adjustLatencyIfNeeded, void)},
		{"cancel", "()V", nullptr, $PUBLIC, $virtualMethod(GC$LatencyRequest, cancel, void)},
		{"compareTo", "(Lsun/rmi/transport/GC$LatencyRequest;)I", nullptr, $PUBLIC, $virtualMethod(GC$LatencyRequest, compareTo, int32_t, GC$LatencyRequest*)},
		{"compareTo", "(Ljava/lang/Object;)I", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(GC$LatencyRequest, compareTo, int32_t, Object$*)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(GC$LatencyRequest, toString, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.rmi.transport.GC$LatencyRequest", "sun.rmi.transport.GC", "LatencyRequest", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.rmi.transport.GC$LatencyRequest",
		"java.lang.Object",
		"java.lang.Comparable",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/lang/Comparable<Lsun/rmi/transport/GC$LatencyRequest;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.rmi.transport.GC"
	};
	$loadClass(GC$LatencyRequest, name, initialize, &classInfo$$, GC$LatencyRequest::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(GC$LatencyRequest);
	});
	return class$;
}

$Class* GC$LatencyRequest::class$ = nullptr;

		} // transport
	} // rmi
} // sun