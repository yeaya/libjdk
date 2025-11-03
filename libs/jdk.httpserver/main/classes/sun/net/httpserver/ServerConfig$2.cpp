#include <sun/net/httpserver/ServerConfig$2.h>

#include <java/lang/System$Logger$Level.h>
#include <java/lang/System$Logger.h>
#include <sun/net/httpserver/ServerConfig.h>
#include <jcpp.h>

#undef WARNING

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $System$Logger = ::java::lang::System$Logger;
using $System$Logger$Level = ::java::lang::System$Logger$Level;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $ServerConfig = ::sun::net::httpserver::ServerConfig;

namespace sun {
	namespace net {
		namespace httpserver {

$FieldInfo _ServerConfig$2_FieldInfo_[] = {
	{"val$logger", "Ljava/lang/System$Logger;", nullptr, $FINAL | $SYNTHETIC, $field(ServerConfig$2, val$logger)},
	{}
};

$MethodInfo _ServerConfig$2_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/System$Logger;)V", "()V", 0, $method(static_cast<void(ServerConfig$2::*)($System$Logger*)>(&ServerConfig$2::init$))},
	{"run", "()Ljava/lang/Void;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _ServerConfig$2_EnclosingMethodInfo_ = {
	"sun.net.httpserver.ServerConfig",
	"checkLegacyProperties",
	"(Ljava/lang/System$Logger;)V"
};

$InnerClassInfo _ServerConfig$2_InnerClassesInfo_[] = {
	{"sun.net.httpserver.ServerConfig$2", nullptr, nullptr, 0},
	{"java.lang.System$Logger", "java.lang.System", "Logger", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _ServerConfig$2_ClassInfo_ = {
	$ACC_SUPER,
	"sun.net.httpserver.ServerConfig$2",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	_ServerConfig$2_FieldInfo_,
	_ServerConfig$2_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Void;>;",
	&_ServerConfig$2_EnclosingMethodInfo_,
	_ServerConfig$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.net.httpserver.ServerConfig"
};

$Object* allocate$ServerConfig$2($Class* clazz) {
	return $of($alloc(ServerConfig$2));
}

void ServerConfig$2::init$($System$Logger* val$logger) {
	$set(this, val$logger, val$logger);
}

$Object* ServerConfig$2::run() {
	if ($System::getProperty("sun.net.httpserver.readTimeout"_s) != nullptr) {
		$init($System$Logger$Level);
		$nc(this->val$logger)->log($System$Logger$Level::WARNING, "sun.net.httpserver.readTimeout property is no longer used. Use sun.net.httpserver.maxReqTime instead."_s);
	}
	if ($System::getProperty("sun.net.httpserver.writeTimeout"_s) != nullptr) {
		$init($System$Logger$Level);
		$nc(this->val$logger)->log($System$Logger$Level::WARNING, "sun.net.httpserver.writeTimeout property is no longer used. Use sun.net.httpserver.maxRspTime instead."_s);
	}
	if ($System::getProperty("sun.net.httpserver.selCacheTimeout"_s) != nullptr) {
		$init($System$Logger$Level);
		$nc(this->val$logger)->log($System$Logger$Level::WARNING, "sun.net.httpserver.selCacheTimeout property is no longer used."_s);
	}
	return $of(nullptr);
}

ServerConfig$2::ServerConfig$2() {
}

$Class* ServerConfig$2::load$($String* name, bool initialize) {
	$loadClass(ServerConfig$2, name, initialize, &_ServerConfig$2_ClassInfo_, allocate$ServerConfig$2);
	return class$;
}

$Class* ServerConfig$2::class$ = nullptr;

		} // httpserver
	} // net
} // sun