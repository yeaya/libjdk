#include <sun/rmi/transport/DGCClient$EndpointEntry$CleanRequest.h>
#include <java/rmi/server/ObjID.h>
#include <sun/rmi/transport/DGCClient$EndpointEntry.h>
#include <jcpp.h>

using $ObjIDArray = $Array<::java::rmi::server::ObjID>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace rmi {
		namespace transport {

void DGCClient$EndpointEntry$CleanRequest::init$($ObjIDArray* objIDs, int64_t sequenceNum, bool strong) {
	this->failures = 0;
	$set(this, objIDs, objIDs);
	this->sequenceNum = sequenceNum;
	this->strong = strong;
}

DGCClient$EndpointEntry$CleanRequest::DGCClient$EndpointEntry$CleanRequest() {
}

$Class* DGCClient$EndpointEntry$CleanRequest::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"objIDs", "[Ljava/rmi/server/ObjID;", nullptr, $FINAL, $field(DGCClient$EndpointEntry$CleanRequest, objIDs)},
		{"sequenceNum", "J", nullptr, $FINAL, $field(DGCClient$EndpointEntry$CleanRequest, sequenceNum)},
		{"strong", "Z", nullptr, $FINAL, $field(DGCClient$EndpointEntry$CleanRequest, strong)},
		{"failures", "I", nullptr, 0, $field(DGCClient$EndpointEntry$CleanRequest, failures)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "([Ljava/rmi/server/ObjID;JZ)V", nullptr, 0, $method(DGCClient$EndpointEntry$CleanRequest, init$, void, $ObjIDArray*, int64_t, bool)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.rmi.transport.DGCClient$EndpointEntry", "sun.rmi.transport.DGCClient", "EndpointEntry", $PRIVATE | $STATIC},
		{"sun.rmi.transport.DGCClient$EndpointEntry$CleanRequest", "sun.rmi.transport.DGCClient$EndpointEntry", "CleanRequest", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.rmi.transport.DGCClient$EndpointEntry$CleanRequest",
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
		"sun.rmi.transport.DGCClient"
	};
	$loadClass(DGCClient$EndpointEntry$CleanRequest, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DGCClient$EndpointEntry$CleanRequest);
	});
	return class$;
}

$Class* DGCClient$EndpointEntry$CleanRequest::class$ = nullptr;

		} // transport
	} // rmi
} // sun