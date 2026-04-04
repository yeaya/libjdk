#include <sun/awt/X11GraphicsEnvironment$2.h>
#include <java/net/InetAddress.h>
#include <java/net/NetworkInterface.h>
#include <java/net/SocketException.h>
#include <java/net/UnknownHostException.h>
#include <java/util/Enumeration.h>
#include <sun/awt/X11GraphicsEnvironment.h>
#include <jcpp.h>

#undef FALSE
#undef TRUE

using $InetAddressArray = $Array<::java::net::InetAddress>;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $InetAddress = ::java::net::InetAddress;
using $NetworkInterface = ::java::net::NetworkInterface;
using $SocketException = ::java::net::SocketException;
using $UnknownHostException = ::java::net::UnknownHostException;
using $Enumeration = ::java::util::Enumeration;

namespace sun {
	namespace awt {

void X11GraphicsEnvironment$2::init$($String* val$hostName) {
	$set(this, val$hostName, val$hostName);
}

$Object* X11GraphicsEnvironment$2::run() {
	$useLocalObjectStack();
	$var($InetAddressArray, remAddr, nullptr);
	$var($Enumeration, locals, nullptr);
	$var($Enumeration, interfaces, nullptr);
	try {
		$assign(interfaces, $NetworkInterface::getNetworkInterfaces());
		$assign(remAddr, $InetAddress::getAllByName(this->val$hostName));
		if (remAddr == nullptr) {
			return $of($Boolean::FALSE);
		}
	} catch ($UnknownHostException& e) {
		$nc($System::err)->println($$str({"Unknown host: "_s, this->val$hostName}));
		return $of($Boolean::FALSE);
	} catch ($SocketException& e1) {
		$nc($System::err)->println($(e1->getMessage()));
		return $of($Boolean::FALSE);
	}
	for (; $nc(interfaces)->hasMoreElements();) {
		$assign(locals, $$sure($NetworkInterface, interfaces->nextElement())->getInetAddresses());
		for (; $nc(locals)->hasMoreElements();) {
			$var($InetAddress, localAddr, $cast($InetAddress, locals->nextElement()));
			for (int32_t i = 0; i < $nc(remAddr)->length; ++i) {
				if ($nc(localAddr)->equals(remAddr->get(i))) {
					return $of($Boolean::TRUE);
				}
			}
		}
	}
	return $of($Boolean::FALSE);
}

X11GraphicsEnvironment$2::X11GraphicsEnvironment$2() {
}

$Class* X11GraphicsEnvironment$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$hostName", "Ljava/lang/String;", nullptr, $FINAL | $SYNTHETIC, $field(X11GraphicsEnvironment$2, val$hostName)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", "()V", 0, $method(X11GraphicsEnvironment$2, init$, void, $String*)},
		{"run", "()Ljava/lang/Boolean;", nullptr, $PUBLIC, $virtualMethod(X11GraphicsEnvironment$2, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.awt.X11GraphicsEnvironment",
		"_isDisplayLocal",
		"()Z"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.awt.X11GraphicsEnvironment$2", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.awt.X11GraphicsEnvironment$2",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Boolean;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.awt.X11GraphicsEnvironment"
	};
	$loadClass(X11GraphicsEnvironment$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(X11GraphicsEnvironment$2);
	});
	return class$;
}

$Class* X11GraphicsEnvironment$2::class$ = nullptr;

	} // awt
} // sun