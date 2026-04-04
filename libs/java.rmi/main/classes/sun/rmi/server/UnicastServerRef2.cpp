#include <sun/rmi/server/UnicastServerRef2.h>
#include <java/io/ObjectInputFilter.h>
#include <java/io/ObjectOutput.h>
#include <java/rmi/server/RMIClientSocketFactory.h>
#include <java/rmi/server/RMIServerSocketFactory.h>
#include <java/rmi/server/RemoteRef.h>
#include <sun/rmi/server/UnicastRef2.h>
#include <sun/rmi/server/UnicastServerRef.h>
#include <sun/rmi/transport/LiveRef.h>
#include <jcpp.h>

using $ObjectInputFilter = ::java::io::ObjectInputFilter;
using $ObjectOutput = ::java::io::ObjectOutput;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RMIClientSocketFactory = ::java::rmi::server::RMIClientSocketFactory;
using $RMIServerSocketFactory = ::java::rmi::server::RMIServerSocketFactory;
using $RemoteRef = ::java::rmi::server::RemoteRef;
using $UnicastRef2 = ::sun::rmi::server::UnicastRef2;
using $UnicastServerRef = ::sun::rmi::server::UnicastServerRef;
using $LiveRef = ::sun::rmi::transport::LiveRef;

namespace sun {
	namespace rmi {
		namespace server {

void UnicastServerRef2::init$() {
	$UnicastServerRef::init$();
}

void UnicastServerRef2::init$($LiveRef* ref) {
	$UnicastServerRef::init$(ref);
}

void UnicastServerRef2::init$($LiveRef* ref, $ObjectInputFilter* filter) {
	$UnicastServerRef::init$(ref, filter);
}

void UnicastServerRef2::init$(int32_t port, $RMIClientSocketFactory* csf, $RMIServerSocketFactory* ssf) {
	$UnicastServerRef::init$($$new($LiveRef, port, csf, ssf));
}

void UnicastServerRef2::init$(int32_t port, $RMIClientSocketFactory* csf, $RMIServerSocketFactory* ssf, $ObjectInputFilter* filter) {
	$UnicastServerRef::init$($$new($LiveRef, port, csf, ssf), filter);
}

$String* UnicastServerRef2::getRefClass($ObjectOutput* out) {
	return "UnicastServerRef2"_s;
}

$RemoteRef* UnicastServerRef2::getClientRef() {
	return $new($UnicastRef2, this->ref);
}

UnicastServerRef2::UnicastServerRef2() {
}

$Class* UnicastServerRef2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(UnicastServerRef2, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(UnicastServerRef2, init$, void)},
		{"<init>", "(Lsun/rmi/transport/LiveRef;)V", nullptr, $PUBLIC, $method(UnicastServerRef2, init$, void, $LiveRef*)},
		{"<init>", "(Lsun/rmi/transport/LiveRef;Ljava/io/ObjectInputFilter;)V", nullptr, $PUBLIC, $method(UnicastServerRef2, init$, void, $LiveRef*, $ObjectInputFilter*)},
		{"<init>", "(ILjava/rmi/server/RMIClientSocketFactory;Ljava/rmi/server/RMIServerSocketFactory;)V", nullptr, $PUBLIC, $method(UnicastServerRef2, init$, void, int32_t, $RMIClientSocketFactory*, $RMIServerSocketFactory*)},
		{"<init>", "(ILjava/rmi/server/RMIClientSocketFactory;Ljava/rmi/server/RMIServerSocketFactory;Ljava/io/ObjectInputFilter;)V", nullptr, $PUBLIC, $method(UnicastServerRef2, init$, void, int32_t, $RMIClientSocketFactory*, $RMIServerSocketFactory*, $ObjectInputFilter*)},
		{"getClientRef", "()Ljava/rmi/server/RemoteRef;", nullptr, $PROTECTED, $virtualMethod(UnicastServerRef2, getClientRef, $RemoteRef*)},
		{"getRefClass", "(Ljava/io/ObjectOutput;)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(UnicastServerRef2, getRefClass, $String*, $ObjectOutput*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.rmi.server.UnicastServerRef2",
		"sun.rmi.server.UnicastServerRef",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(UnicastServerRef2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(UnicastServerRef2));
	});
	return class$;
}

$Class* UnicastServerRef2::class$ = nullptr;

		} // server
	} // rmi
} // sun