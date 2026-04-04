#include <sun/rmi/transport/Transport.h>
#include <java/io/IOException.h>
#include <java/io/ObjectInput.h>
#include <java/io/ObjectOutput.h>
#include <java/io/Serializable.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/RuntimePermission.h>
#include <java/lang/ThreadLocal.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/rmi/MarshalException.h>
#include <java/rmi/NoSuchObjectException.h>
#include <java/rmi/Remote.h>
#include <java/rmi/RemoteException.h>
#include <java/rmi/server/LogStream.h>
#include <java/rmi/server/ObjID.h>
#include <java/rmi/server/RemoteCall.h>
#include <java/rmi/server/RemoteServer.h>
#include <java/rmi/server/ServerNotActiveException.h>
#include <java/security/AccessControlContext.h>
#include <java/security/AccessController.h>
#include <java/security/CodeSource.h>
#include <java/security/Permission.h>
#include <java/security/Permissions.h>
#include <java/security/PrivilegedAction.h>
#include <java/security/PrivilegedActionException.h>
#include <java/security/ProtectionDomain.h>
#include <java/util/logging/Level.h>
#include <sun/rmi/runtime/Log.h>
#include <sun/rmi/server/Dispatcher.h>
#include <sun/rmi/server/UnicastServerRef.h>
#include <sun/rmi/transport/Channel.h>
#include <sun/rmi/transport/Endpoint.h>
#include <sun/rmi/transport/ObjectEndpoint.h>
#include <sun/rmi/transport/ObjectTable.h>
#include <sun/rmi/transport/Target.h>
#include <sun/rmi/transport/Transport$1.h>
#include <jcpp.h>

#undef BRIEF
#undef DGC_ID
#undef SETCCL_ACC
#undef VERBOSE

using $ProtectionDomainArray = $Array<::java::security::ProtectionDomain>;
using $IOException = ::java::io::IOException;
using $ObjectOutput = ::java::io::ObjectOutput;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimePermission = ::java::lang::RuntimePermission;
using $ThreadLocal = ::java::lang::ThreadLocal;
using $Void = ::java::lang::Void;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MarshalException = ::java::rmi::MarshalException;
using $NoSuchObjectException = ::java::rmi::NoSuchObjectException;
using $Remote = ::java::rmi::Remote;
using $RemoteException = ::java::rmi::RemoteException;
using $LogStream = ::java::rmi::server::LogStream;
using $ObjID = ::java::rmi::server::ObjID;
using $RemoteCall = ::java::rmi::server::RemoteCall;
using $RemoteServer = ::java::rmi::server::RemoteServer;
using $ServerNotActiveException = ::java::rmi::server::ServerNotActiveException;
using $AccessControlContext = ::java::security::AccessControlContext;
using $AccessController = ::java::security::AccessController;
using $CodeSource = ::java::security::CodeSource;
using $Permissions = ::java::security::Permissions;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $PrivilegedActionException = ::java::security::PrivilegedActionException;
using $ProtectionDomain = ::java::security::ProtectionDomain;
using $Log = ::sun::rmi::runtime::Log;
using $Dispatcher = ::sun::rmi::server::Dispatcher;
using $UnicastServerRef = ::sun::rmi::server::UnicastServerRef;
using $Channel = ::sun::rmi::transport::Channel;
using $Endpoint = ::sun::rmi::transport::Endpoint;
using $ObjectEndpoint = ::sun::rmi::transport::ObjectEndpoint;
using $ObjectTable = ::sun::rmi::transport::ObjectTable;
using $Target = ::sun::rmi::transport::Target;
using $Transport$1 = ::sun::rmi::transport::Transport$1;

namespace sun {
	namespace rmi {
		namespace transport {

class Transport$$Lambda$lambda$getLogLevel$0 : public $PrivilegedAction {
	$class(Transport$$Lambda$lambda$getLogLevel$0, $NO_CLASS_INIT, $PrivilegedAction)
public:
	void init$() {
	}
	virtual $Object* run() override {
		 return $of(Transport::lambda$getLogLevel$0());
	}
};
$Class* Transport$$Lambda$lambda$getLogLevel$0::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Transport$$Lambda$lambda$getLogLevel$0, init$, void)},
		{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(Transport$$Lambda$lambda$getLogLevel$0, run, $Object*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"sun.rmi.transport.Transport$$Lambda$lambda$getLogLevel$0",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		nullptr,
		methodInfos$$
	};
	$loadClass(Transport$$Lambda$lambda$getLogLevel$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Transport$$Lambda$lambda$getLogLevel$0);
	});
	return class$;
}
$Class* Transport$$Lambda$lambda$getLogLevel$0::class$ = nullptr;

class Transport$$Lambda$lambda$setContextClassLoader$1$1 : public $PrivilegedAction {
	$class(Transport$$Lambda$lambda$setContextClassLoader$1$1, $NO_CLASS_INIT, $PrivilegedAction)
public:
	void init$($ClassLoader* ccl) {
		$set(this, ccl, ccl);
	}
	virtual $Object* run() override {
		 return Transport::lambda$setContextClassLoader$1(ccl);
	}
	$ClassLoader* ccl = nullptr;
};
$Class* Transport$$Lambda$lambda$setContextClassLoader$1$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"ccl", "Ljava/lang/ClassLoader;", nullptr, $PUBLIC, $field(Transport$$Lambda$lambda$setContextClassLoader$1$1, ccl)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/ClassLoader;)V", nullptr, $PUBLIC, $method(Transport$$Lambda$lambda$setContextClassLoader$1$1, init$, void, $ClassLoader*)},
		{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(Transport$$Lambda$lambda$setContextClassLoader$1$1, run, $Object*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"sun.rmi.transport.Transport$$Lambda$lambda$setContextClassLoader$1$1",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Transport$$Lambda$lambda$setContextClassLoader$1$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Transport$$Lambda$lambda$setContextClassLoader$1$1);
	});
	return class$;
}
$Class* Transport$$Lambda$lambda$setContextClassLoader$1$1::class$ = nullptr;

int32_t Transport::logLevel = 0;
$Log* Transport::transportLog = nullptr;
$ThreadLocal* Transport::currentTransport$ = nullptr;
$ObjID* Transport::dgcID = nullptr;
$AccessControlContext* Transport::SETCCL_ACC = nullptr;

void Transport::init$() {
}

$String* Transport::getLogLevel() {
	$init(Transport);
	$beforeCallerSensitive();
	return $cast($String, $AccessController::doPrivileged($cast($PrivilegedAction, $$new(Transport$$Lambda$lambda$getLogLevel$0))));
}

void Transport::exportObject($Target* target) {
	$nc(target)->setExportedTransport(this);
	$ObjectTable::putTarget(target);
}

void Transport::targetUnexported() {
}

Transport* Transport::currentTransport() {
	$init(Transport);
	return $cast(Transport, Transport::currentTransport$->get());
}

void Transport::setContextClassLoader($ClassLoader* ccl) {
	$init(Transport);
	$beforeCallerSensitive();
	$AccessController::doPrivileged($cast($PrivilegedAction, $$new(Transport$$Lambda$lambda$setContextClassLoader$1$1, ccl)), Transport::SETCCL_ACC);
}

bool Transport::serviceCall($RemoteCall* call) {
	$useLocalObjectStack();
	$beforeCallerSensitive();
	try {
		$var($Remote, impl, nullptr);
		$var($ObjID, id, nullptr);
		try {
			$assign(id, $ObjID::read($($nc(call)->getInputStream())));
		} catch ($IOException& e) {
			$throwNew($MarshalException, "unable to read objID"_s, e);
		}
		$var(Transport, transport, $nc(id)->equals(Transport::dgcID) ? (Transport*)nullptr : this);
		$var($Target, target, $ObjectTable::getTarget($$new($ObjectEndpoint, id, transport)));
		if (target == nullptr || ($assign(impl, target->getImpl())) == nullptr) {
			$throwNew($NoSuchObjectException, "no such object in table"_s);
		}
		$var($Dispatcher, disp, $nc(target)->getDispatcher());
		target->incrementCallCount();
		$var($Throwable, var$0, nullptr);
		bool var$2 = false;
		bool return$1 = false;
		try {
			try {
				$init($Log);
				$nc(Transport::transportLog)->log($Log::VERBOSE, "call dispatcher"_s);
				$var($AccessControlContext, acc, target->getAccessControlContext());
				$var($ClassLoader, ccl, target->getContextClassLoader());
				$var($ClassLoader, savedCcl, $($Thread::currentThread())->getContextClassLoader());
				$var($Throwable, var$3, nullptr);
				try {
					setContextClassLoader(ccl);
					Transport::currentTransport$->set(this);
					try {
						$AccessController::doPrivileged($$new($Transport$1, this, acc, disp, impl, call), acc);
					} catch ($PrivilegedActionException& pae) {
						$throw($$cast($IOException, pae->getException()));
					}
				} catch ($Throwable& var$4) {
					$assign(var$3, var$4);
				} /*finally*/ {
					setContextClassLoader(savedCcl);
					Transport::currentTransport$->set(nullptr);
				}
				if (var$3 != nullptr) {
					$throw(var$3);
				}
			} catch ($IOException& ex) {
				$init($Log);
				$nc(Transport::transportLog)->log($Log::BRIEF, "exception thrown by dispatcher: "_s, ex);
				var$2 = false;
				return$1 = true;
				goto $finally;
			}
		} catch ($Throwable& var$5) {
			$assign(var$0, var$5);
		} $finally: {
			target->decrementCallCount();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	} catch ($RemoteException& e) {
		$init($UnicastServerRef);
		$init($Log);
		if ($nc($UnicastServerRef::callLog)->isLoggable($Log::BRIEF)) {
			$var($String, clientHost, ""_s);
			try {
				$assign(clientHost, $str({"["_s, $($RemoteServer::getClientHost()), "] "_s}));
			} catch ($ServerNotActiveException& ex) {
			}
			$var($String, message, $str({clientHost, "exception: "_s}));
			$UnicastServerRef::callLog->log($Log::BRIEF, message, e);
		}
		try {
			$var($ObjectOutput, out, $nc(call)->getResultStream(false));
			$UnicastServerRef::clearStackTraces(e);
			$nc(out)->writeObject(e);
			call->releaseOutputStream();
		} catch ($IOException& ie) {
			$nc(Transport::transportLog)->log($Log::BRIEF, "exception thrown marshalling exception: "_s, ie);
			return false;
		}
	}
	return true;
}

$Void* Transport::lambda$setContextClassLoader$1($ClassLoader* ccl) {
	$init(Transport);
	$($Thread::currentThread())->setContextClassLoader(ccl);
	return nullptr;
}

$String* Transport::lambda$getLogLevel$0() {
	$init(Transport);
	return $System::getProperty("sun.rmi.transport.logLevel"_s);
}

void Transport::clinit$($Class* clazz) {
	$useLocalObjectStack();
	Transport::logLevel = $LogStream::parseLevel($(Transport::getLogLevel()));
	$assignStatic(Transport::transportLog, $Log::getLog("sun.rmi.transport.misc"_s, "transport"_s, Transport::logLevel));
	$assignStatic(Transport::currentTransport$, $new($ThreadLocal));
	$assignStatic(Transport::dgcID, $new($ObjID, $ObjID::DGC_ID));
	{
		$var($Permissions, perms, $new($Permissions));
		perms->add($$new($RuntimePermission, "setContextClassLoader"_s));
		$var($ProtectionDomainArray, pd, $new($ProtectionDomainArray, {$$new($ProtectionDomain, nullptr, perms)}));
		$assignStatic(Transport::SETCCL_ACC, $new($AccessControlContext, pd));
	}
}

Transport::Transport() {
}

$Class* Transport::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("sun.rmi.transport.Transport$$Lambda$lambda$getLogLevel$0")) {
			return Transport$$Lambda$lambda$getLogLevel$0::load$(name, initialize);
		}
		if (name->equals("sun.rmi.transport.Transport$$Lambda$lambda$setContextClassLoader$1$1")) {
			return Transport$$Lambda$lambda$setContextClassLoader$1$1::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"logLevel", "I", nullptr, $STATIC | $FINAL, $staticField(Transport, logLevel)},
		{"transportLog", "Lsun/rmi/runtime/Log;", nullptr, $STATIC | $FINAL, $staticField(Transport, transportLog)},
		{"currentTransport", "Ljava/lang/ThreadLocal;", "Ljava/lang/ThreadLocal<Lsun/rmi/transport/Transport;>;", $PRIVATE | $STATIC | $FINAL, $staticField(Transport, currentTransport$)},
		{"dgcID", "Ljava/rmi/server/ObjID;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Transport, dgcID)},
		{"SETCCL_ACC", "Ljava/security/AccessControlContext;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Transport, SETCCL_ACC)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Transport, init$, void)},
		{"checkAcceptPermission", "(Ljava/security/AccessControlContext;)V", nullptr, $PROTECTED | $ABSTRACT, $virtualMethod(Transport, checkAcceptPermission, void, $AccessControlContext*)},
		{"currentTransport", "()Lsun/rmi/transport/Transport;", nullptr, $STATIC, $staticMethod(Transport, currentTransport, Transport*)},
		{"exportObject", "(Lsun/rmi/transport/Target;)V", nullptr, $PUBLIC, $virtualMethod(Transport, exportObject, void, $Target*), "java.rmi.RemoteException"},
		{"free", "(Lsun/rmi/transport/Endpoint;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Transport, free, void, $Endpoint*)},
		{"getChannel", "(Lsun/rmi/transport/Endpoint;)Lsun/rmi/transport/Channel;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Transport, getChannel, $Channel*, $Endpoint*)},
		{"getLogLevel", "()Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticMethod(Transport, getLogLevel, $String*)},
		{"lambda$getLogLevel$0", "()Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(Transport, lambda$getLogLevel$0, $String*)},
		{"lambda$setContextClassLoader$1", "(Ljava/lang/ClassLoader;)Ljava/lang/Void;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(Transport, lambda$setContextClassLoader$1, $Void*, $ClassLoader*)},
		{"serviceCall", "(Ljava/rmi/server/RemoteCall;)Z", nullptr, $PUBLIC, $virtualMethod(Transport, serviceCall, bool, $RemoteCall*)},
		{"setContextClassLoader", "(Ljava/lang/ClassLoader;)V", nullptr, $PRIVATE | $STATIC, $staticMethod(Transport, setContextClassLoader, void, $ClassLoader*)},
		{"targetUnexported", "()V", nullptr, $PROTECTED, $virtualMethod(Transport, targetUnexported, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.rmi.transport.Transport$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER | $ABSTRACT,
		"sun.rmi.transport.Transport",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"sun.rmi.transport.Transport$1"
	};
	$loadClass(Transport, name, initialize, &classInfo$$, Transport::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(Transport);
	});
	return class$;
}

$Class* Transport::class$ = nullptr;

		} // transport
	} // rmi
} // sun