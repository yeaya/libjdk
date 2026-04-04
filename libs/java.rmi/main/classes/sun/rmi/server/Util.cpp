#include <sun/rmi/server/Util.h>
#include <java/io/ByteArrayOutputStream.h>
#include <java/io/DataOutputStream.h>
#include <java/io/IOException.h>
#include <java/io/Serializable.h>
#include <java/lang/ClassCastException.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/ClassNotFoundException.h>
#include <java/lang/Error.h>
#include <java/lang/IllegalAccessException.h>
#include <java/lang/InstantiationException.h>
#include <java/lang/Math.h>
#include <java/lang/NoSuchMethodException.h>
#include <java/lang/SecurityException.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/InvocationHandler.h>
#include <java/lang/reflect/InvocationTargetException.h>
#include <java/lang/reflect/Method.h>
#include <java/rmi/Remote.h>
#include <java/rmi/RemoteException.h>
#include <java/rmi/StubNotFoundException.h>
#include <java/rmi/server/LogStream.h>
#include <java/rmi/server/RemoteObjectInvocationHandler.h>
#include <java/rmi/server/RemoteRef.h>
#include <java/rmi/server/RemoteStub.h>
#include <java/rmi/server/Skeleton.h>
#include <java/rmi/server/SkeletonNotFoundException.h>
#include <java/security/AccessController.h>
#include <java/security/DigestOutputStream.h>
#include <java/security/MessageDigest.h>
#include <java/security/NoSuchAlgorithmException.h>
#include <java/security/PrivilegedAction.h>
#include <java/util/ArrayList.h>
#include <java/util/Collections.h>
#include <java/util/Map.h>
#include <java/util/WeakHashMap.h>
#include <java/util/logging/Level.h>
#include <sun/rmi/runtime/Log.h>
#include <sun/rmi/server/Util$1.h>
#include <jcpp.h>

#undef TYPE
#undef VERBOSE

using $MethodArray = $Array<::java::lang::reflect::Method>;
using $ByteArrayOutputStream = ::java::io::ByteArrayOutputStream;
using $DataOutputStream = ::java::io::DataOutputStream;
using $IOException = ::java::io::IOException;
using $Serializable = ::java::io::Serializable;
using $Boolean = ::java::lang::Boolean;
using $Byte = ::java::lang::Byte;
using $Character = ::java::lang::Character;
using $ClassCastException = ::java::lang::ClassCastException;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $ClassNotFoundException = ::java::lang::ClassNotFoundException;
using $Double = ::java::lang::Double;
using $Error = ::java::lang::Error;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $IllegalAccessException = ::java::lang::IllegalAccessException;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InstantiationException = ::java::lang::InstantiationException;
using $Integer = ::java::lang::Integer;
using $Long = ::java::lang::Long;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $NoSuchMethodException = ::java::lang::NoSuchMethodException;
using $SecurityException = ::java::lang::SecurityException;
using $Short = ::java::lang::Short;
using $Void = ::java::lang::Void;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $Constructor = ::java::lang::reflect::Constructor;
using $InvocationHandler = ::java::lang::reflect::InvocationHandler;
using $InvocationTargetException = ::java::lang::reflect::InvocationTargetException;
using $Method = ::java::lang::reflect::Method;
using $Remote = ::java::rmi::Remote;
using $RemoteException = ::java::rmi::RemoteException;
using $StubNotFoundException = ::java::rmi::StubNotFoundException;
using $LogStream = ::java::rmi::server::LogStream;
using $RemoteObjectInvocationHandler = ::java::rmi::server::RemoteObjectInvocationHandler;
using $RemoteRef = ::java::rmi::server::RemoteRef;
using $RemoteStub = ::java::rmi::server::RemoteStub;
using $Skeleton = ::java::rmi::server::Skeleton;
using $SkeletonNotFoundException = ::java::rmi::server::SkeletonNotFoundException;
using $AccessController = ::java::security::AccessController;
using $DigestOutputStream = ::java::security::DigestOutputStream;
using $MessageDigest = ::java::security::MessageDigest;
using $NoSuchAlgorithmException = ::java::security::NoSuchAlgorithmException;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $ArrayList = ::java::util::ArrayList;
using $Collections = ::java::util::Collections;
using $Map = ::java::util::Map;
using $WeakHashMap = ::java::util::WeakHashMap;
using $Log = ::sun::rmi::runtime::Log;
using $Util$1 = ::sun::rmi::server::Util$1;

namespace sun {
	namespace rmi {
		namespace server {

class Util$$Lambda$lambda$static$0 : public $PrivilegedAction {
	$class(Util$$Lambda$lambda$static$0, $NO_CLASS_INIT, $PrivilegedAction)
public:
	void init$() {
	}
	virtual $Object* run() override {
		 return $of(Util::lambda$static$0());
	}
};
$Class* Util$$Lambda$lambda$static$0::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Util$$Lambda$lambda$static$0, init$, void)},
		{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(Util$$Lambda$lambda$static$0, run, $Object*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"sun.rmi.server.Util$$Lambda$lambda$static$0",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		nullptr,
		methodInfos$$
	};
	$loadClass(Util$$Lambda$lambda$static$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Util$$Lambda$lambda$static$0);
	});
	return class$;
}
$Class* Util$$Lambda$lambda$static$0::class$ = nullptr;

class Util$$Lambda$lambda$static$1$1 : public $PrivilegedAction {
	$class(Util$$Lambda$lambda$static$1$1, $NO_CLASS_INIT, $PrivilegedAction)
public:
	void init$() {
	}
	virtual $Object* run() override {
		 return $of(Util::lambda$static$1());
	}
};
$Class* Util$$Lambda$lambda$static$1$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Util$$Lambda$lambda$static$1$1, init$, void)},
		{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(Util$$Lambda$lambda$static$1$1, run, $Object*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"sun.rmi.server.Util$$Lambda$lambda$static$1$1",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		nullptr,
		methodInfos$$
	};
	$loadClass(Util$$Lambda$lambda$static$1$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Util$$Lambda$lambda$static$1$1);
	});
	return class$;
}
$Class* Util$$Lambda$lambda$static$1$1::class$ = nullptr;

int32_t Util::logLevel = 0;
$Log* Util::serverRefLog = nullptr;
bool Util::ignoreStubClasses = false;
$Map* Util::withoutStubs = nullptr;
$ClassArray* Util::stubConsParamTypes = nullptr;

void Util::init$() {
}

$Remote* Util::createProxy($Class* implClass, $RemoteRef* clientRef, bool forceStubUse) {
	$init(Util);
	$useLocalObjectStack();
	$beforeCallerSensitive();
	$Class* remoteClass = nullptr;
	try {
		remoteClass = getRemoteClass(implClass);
	} catch ($ClassNotFoundException& ex) {
		$throwNew($StubNotFoundException, $$str({"object does not implement a remote interface: "_s, $($nc(implClass)->getName())}));
	}
	if (forceStubUse || !(Util::ignoreStubClasses || !stubClassExists(remoteClass))) {
		return createStub(remoteClass, clientRef);
	}
	$var($ClassLoader, loader, $nc(implClass)->getClassLoader());
	$var($ClassArray, interfaces, getRemoteInterfaces(implClass));
	$var($InvocationHandler, handler, $new($RemoteObjectInvocationHandler, clientRef));
	try {
		return $cast($Remote, $AccessController::doPrivileged($$new($Util$1, loader, interfaces, handler)));
	} catch ($IllegalArgumentException& e) {
		$throwNew($StubNotFoundException, "unable to create proxy"_s, e);
	}
	$shouldNotReachHere();
}

bool Util::stubClassExists($Class* remoteClass) {
	$init(Util);
	$useLocalObjectStack();
	$beforeCallerSensitive();
	if (!$nc(Util::withoutStubs)->containsKey(remoteClass)) {
		try {
			$var($String, var$0, $str({$($nc(remoteClass)->getName()), "_Stub"_s}));
			$Class::forName(var$0, false, $(remoteClass->getClassLoader()));
			return true;
		} catch ($ClassNotFoundException& cnfe) {
			Util::withoutStubs->put(remoteClass, nullptr);
		}
	}
	return false;
}

$Class* Util::getRemoteClass($Class* cl) {
	$init(Util);
	$useLocalObjectStack();
	while (cl != nullptr) {
		$var($ClassArray, interfaces, cl->getInterfaces());
		for (int32_t i = interfaces->length - 1; i >= 0; --i) {
			$load($Remote);
			if ($Remote::class$->isAssignableFrom(interfaces->get(i))) {
				return cl;
			}
		}
		cl = cl->getSuperclass();
	}
	$throwNew($ClassNotFoundException, "class does not implement java.rmi.Remote"_s);
}

$ClassArray* Util::getRemoteInterfaces($Class* remoteClass) {
	$init(Util);
	$useLocalObjectStack();
	$var($ArrayList, list, $new($ArrayList));
	getRemoteInterfaces(list, remoteClass);
	return $cast($ClassArray, list->toArray($$new($ClassArray, list->size())));
}

void Util::getRemoteInterfaces($ArrayList* list, $Class* cl) {
	$init(Util);
	$useLocalObjectStack();
	$beforeCallerSensitive();
	$Class* superclass = $nc(cl)->getSuperclass();
	if (superclass != nullptr) {
		getRemoteInterfaces(list, superclass);
	}
	$var($ClassArray, interfaces, cl->getInterfaces());
	for (int32_t i = 0; i < interfaces->length; ++i) {
		$Class* intf = interfaces->get(i);
		$load($Remote);
		if ($Remote::class$->isAssignableFrom(intf)) {
			if (!($nc(list)->contains(intf))) {
				$var($MethodArray, methods, $nc(intf)->getMethods());
				for (int32_t j = 0; j < $nc(methods)->length; ++j) {
					checkMethod(methods->get(j));
				}
				list->add(intf);
			}
		}
	}
}

void Util::checkMethod($Method* m) {
	$init(Util);
	$useLocalObjectStack();
	$var($ClassArray, ex, $nc(m)->getExceptionTypes());
	for (int32_t i = 0; i < $nc(ex)->length; ++i) {
		$load($RemoteException);
		if ($nc(ex->get(i))->isAssignableFrom($RemoteException::class$)) {
			return;
		}
	}
	$throwNew($IllegalArgumentException, $$str({"illegal remote method encountered: "_s, m}));
}

$RemoteStub* Util::createStub($Class* remoteClass, $RemoteRef* ref) {
	$init(Util);
	$useLocalObjectStack();
	$beforeCallerSensitive();
	$var($String, stubname, $str({$($nc(remoteClass)->getName()), "_Stub"_s}));
	try {
		$Class* stubcl = $Class::forName(stubname, false, $(remoteClass->getClassLoader()));
		$var($Constructor, cons, stubcl->getConstructor(Util::stubConsParamTypes));
		return $cast($RemoteStub, $nc(cons)->newInstance($$new($ObjectArray, {ref})));
	} catch ($ClassNotFoundException& e) {
		$throwNew($StubNotFoundException, $$str({"Stub class not found: "_s, stubname}), e);
	} catch ($NoSuchMethodException& e) {
		$throwNew($StubNotFoundException, $$str({"Stub class missing constructor: "_s, stubname}), e);
	} catch ($InstantiationException& e) {
		$throwNew($StubNotFoundException, $$str({"Can\'t create instance of stub class: "_s, stubname}), e);
	} catch ($IllegalAccessException& e) {
		$throwNew($StubNotFoundException, $$str({"Stub class constructor not public: "_s, stubname}), e);
	} catch ($InvocationTargetException& e) {
		$throwNew($StubNotFoundException, $$str({"Exception creating instance of stub class: "_s, stubname}), e);
	} catch ($ClassCastException& e) {
		$throwNew($StubNotFoundException, $$str({"Stub class not instance of RemoteStub: "_s, stubname}), e);
	}
	$shouldNotReachHere();
}

$Skeleton* Util::createSkeleton($Remote* object) {
	$init(Util);
	$useLocalObjectStack();
	$beforeCallerSensitive();
	$Class* cl = nullptr;
	try {
		cl = getRemoteClass($nc($of(object))->getClass());
	} catch ($ClassNotFoundException& ex) {
		$throwNew($SkeletonNotFoundException, $$str({"object does not implement a remote interface: "_s, $($nc($of(object))->getClass()->getName())}));
	}
	$var($String, skelname, $str({$($nc(cl)->getName()), "_Skel"_s}));
	try {
		$Class* skelcl = $Class::forName(skelname, false, $(cl->getClassLoader()));
		return $cast($Skeleton, skelcl->newInstance());
	} catch ($ClassNotFoundException& ex) {
		$throwNew($SkeletonNotFoundException, $$str({"Skeleton class not found: "_s, skelname}), ex);
	} catch ($InstantiationException& ex) {
		$throwNew($SkeletonNotFoundException, $$str({"Can\'t create skeleton: "_s, skelname}), ex);
	} catch ($IllegalAccessException& ex) {
		$throwNew($SkeletonNotFoundException, $$str({"No public constructor: "_s, skelname}), ex);
	} catch ($ClassCastException& ex) {
		$throwNew($SkeletonNotFoundException, $$str({"Skeleton not of correct class: "_s, skelname}), ex);
	}
	$shouldNotReachHere();
}

int64_t Util::computeMethodHash($Method* m) {
	$init(Util);
	$useLocalObjectStack();
	int64_t hash = 0;
	$var($ByteArrayOutputStream, sink, $new($ByteArrayOutputStream, 127));
	try {
		$var($MessageDigest, md, $MessageDigest::getInstance("SHA"_s));
		$var($DataOutputStream, out, $new($DataOutputStream, $$new($DigestOutputStream, sink, md)));
		$var($String, s, getMethodNameAndDescriptor(m));
		$init($Log);
		if ($nc(Util::serverRefLog)->isLoggable($Log::VERBOSE)) {
			Util::serverRefLog->log($Log::VERBOSE, $$str({"string used for method hash: \""_s, s, "\""_s}));
		}
		out->writeUTF(s);
		out->flush();
		$var($bytes, hasharray, $nc(md)->digest());
		for (int32_t i = 0; i < $Math::min(8, $nc(hasharray)->length); ++i) {
			hash += $sl((int64_t)(hasharray->get(i) & 0xff), i * 8);
		}
	} catch ($IOException& ignore) {
		hash = -1;
	} catch ($NoSuchAlgorithmException& complain) {
		$throwNew($SecurityException, $(complain->getMessage()));
	}
	return hash;
}

$String* Util::getMethodNameAndDescriptor($Method* m) {
	$init(Util);
	$useLocalObjectStack();
	$var($StringBuilder, desc, $new($StringBuilder, $($nc(m)->getName())));
	desc->append(u'(');
	$var($ClassArray, paramTypes, m->getParameterTypes());
	for (int32_t i = 0; i < $nc(paramTypes)->length; ++i) {
		desc->append($(getTypeDescriptor(paramTypes->get(i))));
	}
	desc->append(u')');
	$Class* returnType = m->getReturnType();
	if (returnType == $Void::TYPE) {
		desc->append(u'V');
	} else {
		desc->append($(getTypeDescriptor(returnType)));
	}
	return desc->toString();
}

$String* Util::getTypeDescriptor($Class* type) {
	$init(Util);
	$useLocalObjectStack();
	if ($nc(type)->isPrimitive()) {
		if (type == $Integer::TYPE) {
			return "I"_s;
		} else if (type == $Boolean::TYPE) {
			return "Z"_s;
		} else if (type == $Byte::TYPE) {
			return "B"_s;
		} else if (type == $Character::TYPE) {
			return "C"_s;
		} else if (type == $Short::TYPE) {
			return "S"_s;
		} else if (type == $Long::TYPE) {
			return "J"_s;
		} else if (type == $Float::TYPE) {
			return "F"_s;
		} else if (type == $Double::TYPE) {
			return "D"_s;
		} else if (type == $Void::TYPE) {
			return "V"_s;
		} else {
			$throwNew($Error, $$str({"unrecognized primitive type: "_s, type}));
		}
	} else if (type->isArray()) {
		return $$nc(type->getName())->replace(u'.', u'/');
	} else {
		return $str({"L"_s, $($$nc(type->getName())->replace(u'.', u'/')), ";"_s});
	}
}

$String* Util::getUnqualifiedName($Class* c) {
	$init(Util);
	$var($String, binaryName, $nc(c)->getName());
	return $nc(binaryName)->substring($nc(binaryName)->lastIndexOf(u'.') + 1);
}

$Boolean* Util::lambda$static$1() {
	$init(Util);
	return $Boolean::valueOf($Boolean::getBoolean("java.rmi.server.ignoreStubClasses"_s));
}

$String* Util::lambda$static$0() {
	$init(Util);
	return $System::getProperty("sun.rmi.server.logLevel"_s);
}

void Util::clinit$($Class* clazz) {
	$useLocalObjectStack();
	$beforeCallerSensitive();
	Util::logLevel = $LogStream::parseLevel($$cast($String, $AccessController::doPrivileged($cast($PrivilegedAction, $$new(Util$$Lambda$lambda$static$0)))));
	$assignStatic(Util::serverRefLog, $Log::getLog("sun.rmi.server.ref"_s, "transport"_s, Util::logLevel));
	Util::ignoreStubClasses = $$sure($Boolean, $AccessController::doPrivileged($cast($PrivilegedAction, $$new(Util$$Lambda$lambda$static$1$1))))->booleanValue();
	$assignStatic(Util::withoutStubs, $Collections::synchronizedMap($$new($WeakHashMap, 11)));
	$load($RemoteRef);
	$assignStatic(Util::stubConsParamTypes, $new($ClassArray, {$RemoteRef::class$}));
}

Util::Util() {
}

$Class* Util::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("sun.rmi.server.Util$$Lambda$lambda$static$0")) {
			return Util$$Lambda$lambda$static$0::load$(name, initialize);
		}
		if (name->equals("sun.rmi.server.Util$$Lambda$lambda$static$1$1")) {
			return Util$$Lambda$lambda$static$1$1::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"logLevel", "I", nullptr, $STATIC | $FINAL, $staticField(Util, logLevel)},
		{"serverRefLog", "Lsun/rmi/runtime/Log;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Util, serverRefLog)},
		{"ignoreStubClasses", "Z", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Util, ignoreStubClasses)},
		{"withoutStubs", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/Class<*>;Ljava/lang/Void;>;", $PRIVATE | $STATIC | $FINAL, $staticField(Util, withoutStubs)},
		{"stubConsParamTypes", "[Ljava/lang/Class;", "[Ljava/lang/Class<*>;", $PRIVATE | $STATIC | $FINAL, $staticField(Util, stubConsParamTypes)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(Util, init$, void)},
		{"checkMethod", "(Ljava/lang/reflect/Method;)V", nullptr, $PRIVATE | $STATIC, $staticMethod(Util, checkMethod, void, $Method*)},
		{"computeMethodHash", "(Ljava/lang/reflect/Method;)J", nullptr, $PUBLIC | $STATIC, $staticMethod(Util, computeMethodHash, int64_t, $Method*)},
		{"createProxy", "(Ljava/lang/Class;Ljava/rmi/server/RemoteRef;Z)Ljava/rmi/Remote;", "(Ljava/lang/Class<*>;Ljava/rmi/server/RemoteRef;Z)Ljava/rmi/Remote;", $PUBLIC | $STATIC, $staticMethod(Util, createProxy, $Remote*, $Class*, $RemoteRef*, bool), "java.rmi.StubNotFoundException"},
		{"createSkeleton", "(Ljava/rmi/Remote;)Ljava/rmi/server/Skeleton;", nullptr, $STATIC, $staticMethod(Util, createSkeleton, $Skeleton*, $Remote*), "java.rmi.server.SkeletonNotFoundException"},
		{"createStub", "(Ljava/lang/Class;Ljava/rmi/server/RemoteRef;)Ljava/rmi/server/RemoteStub;", "(Ljava/lang/Class<*>;Ljava/rmi/server/RemoteRef;)Ljava/rmi/server/RemoteStub;", $PRIVATE | $STATIC, $staticMethod(Util, createStub, $RemoteStub*, $Class*, $RemoteRef*), "java.rmi.StubNotFoundException"},
		{"getMethodNameAndDescriptor", "(Ljava/lang/reflect/Method;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticMethod(Util, getMethodNameAndDescriptor, $String*, $Method*)},
		{"getRemoteClass", "(Ljava/lang/Class;)Ljava/lang/Class;", "(Ljava/lang/Class<*>;)Ljava/lang/Class<*>;", $PRIVATE | $STATIC, $staticMethod(Util, getRemoteClass, $Class*, $Class*), "java.lang.ClassNotFoundException"},
		{"getRemoteInterfaces", "(Ljava/lang/Class;)[Ljava/lang/Class;", "(Ljava/lang/Class<*>;)[Ljava/lang/Class<*>;", $PRIVATE | $STATIC, $staticMethod(Util, getRemoteInterfaces, $ClassArray*, $Class*)},
		{"getRemoteInterfaces", "(Ljava/util/ArrayList;Ljava/lang/Class;)V", "(Ljava/util/ArrayList<Ljava/lang/Class<*>;>;Ljava/lang/Class<*>;)V", $PRIVATE | $STATIC, $staticMethod(Util, getRemoteInterfaces, void, $ArrayList*, $Class*)},
		{"getTypeDescriptor", "(Ljava/lang/Class;)Ljava/lang/String;", "(Ljava/lang/Class<*>;)Ljava/lang/String;", $PRIVATE | $STATIC, $staticMethod(Util, getTypeDescriptor, $String*, $Class*)},
		{"getUnqualifiedName", "(Ljava/lang/Class;)Ljava/lang/String;", "(Ljava/lang/Class<*>;)Ljava/lang/String;", $PUBLIC | $STATIC, $staticMethod(Util, getUnqualifiedName, $String*, $Class*)},
		{"lambda$static$0", "()Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(Util, lambda$static$0, $String*)},
		{"lambda$static$1", "()Ljava/lang/Boolean;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(Util, lambda$static$1, $Boolean*)},
		{"stubClassExists", "(Ljava/lang/Class;)Z", "(Ljava/lang/Class<*>;)Z", $PRIVATE | $STATIC, $staticMethod(Util, stubClassExists, bool, $Class*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.rmi.server.Util$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"sun.rmi.server.Util",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"sun.rmi.server.Util$1"
	};
	$loadClass(Util, name, initialize, &classInfo$$, Util::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(Util);
	});
	return class$;
}

$Class* Util::class$ = nullptr;

		} // server
	} // rmi
} // sun