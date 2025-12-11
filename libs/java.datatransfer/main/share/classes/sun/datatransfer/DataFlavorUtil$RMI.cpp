#include <sun/datatransfer/DataFlavorUtil$RMI.h>

#include <java/io/IOException.h>
#include <java/lang/AssertionError.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/ClassNotFoundException.h>
#include <java/lang/IllegalAccessException.h>
#include <java/lang/InstantiationException.h>
#include <java/lang/NoSuchMethodException.h>
#include <java/lang/ReflectiveOperationException.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/InvocationTargetException.h>
#include <java/lang/reflect/Method.h>
#include <sun/datatransfer/DataFlavorUtil.h>
#include <jcpp.h>

using $IOException = ::java::io::IOException;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $ClassNotFoundException = ::java::lang::ClassNotFoundException;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalAccessException = ::java::lang::IllegalAccessException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InstantiationException = ::java::lang::InstantiationException;
using $MethodInfo = ::java::lang::MethodInfo;
using $NoSuchMethodException = ::java::lang::NoSuchMethodException;
using $ReflectiveOperationException = ::java::lang::ReflectiveOperationException;
using $Constructor = ::java::lang::reflect::Constructor;
using $InvocationTargetException = ::java::lang::reflect::InvocationTargetException;
using $Method = ::java::lang::reflect::Method;

namespace sun {
	namespace datatransfer {

$FieldInfo _DataFlavorUtil$RMI_FieldInfo_[] = {
	{"remoteClass", "Ljava/lang/Class;", "Ljava/lang/Class<*>;", $PRIVATE | $STATIC | $FINAL, $staticField(DataFlavorUtil$RMI, remoteClass$)},
	{"marshallObjectClass", "Ljava/lang/Class;", "Ljava/lang/Class<*>;", $PRIVATE | $STATIC | $FINAL, $staticField(DataFlavorUtil$RMI, marshallObjectClass)},
	{"marshallCtor", "Ljava/lang/reflect/Constructor;", "Ljava/lang/reflect/Constructor<*>;", $PRIVATE | $STATIC | $FINAL, $staticField(DataFlavorUtil$RMI, marshallCtor)},
	{"marshallGet", "Ljava/lang/reflect/Method;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(DataFlavorUtil$RMI, marshallGet)},
	{}
};

$MethodInfo _DataFlavorUtil$RMI_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(DataFlavorUtil$RMI::*)()>(&DataFlavorUtil$RMI::init$))},
	{"getClass", "(Ljava/lang/String;)Ljava/lang/Class;", "(Ljava/lang/String;)Ljava/lang/Class<*>;", $PRIVATE | $STATIC, $method(static_cast<$Class*(*)($String*)>(&DataFlavorUtil$RMI::getClass))},
	{"getConstructor", "(Ljava/lang/Class;[Ljava/lang/Class;)Ljava/lang/reflect/Constructor;", "(Ljava/lang/Class<*>;[Ljava/lang/Class<*>;)Ljava/lang/reflect/Constructor<*>;", $PRIVATE | $STATIC | $TRANSIENT, $method(static_cast<$Constructor*(*)($Class*,$ClassArray*)>(&DataFlavorUtil$RMI::getConstructor))},
	{"getMarshalledObject", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Object*(*)(Object$*)>(&DataFlavorUtil$RMI::getMarshalledObject)), "java.io.IOException,java.lang.ClassNotFoundException"},
	{"getMethod", "(Ljava/lang/Class;Ljava/lang/String;[Ljava/lang/Class;)Ljava/lang/reflect/Method;", "(Ljava/lang/Class<*>;Ljava/lang/String;[Ljava/lang/Class<*>;)Ljava/lang/reflect/Method;", $PRIVATE | $STATIC | $TRANSIENT, $method(static_cast<$Method*(*)($Class*,$String*,$ClassArray*)>(&DataFlavorUtil$RMI::getMethod))},
	{"isRemote", "(Ljava/lang/Class;)Z", "(Ljava/lang/Class<*>;)Z", $PUBLIC | $STATIC, $method(static_cast<bool(*)($Class*)>(&DataFlavorUtil$RMI::isRemote))},
	{"newMarshalledObject", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Object*(*)(Object$*)>(&DataFlavorUtil$RMI::newMarshalledObject)), "java.io.IOException"},
	{"remoteClass", "()Ljava/lang/Class;", "()Ljava/lang/Class<*>;", $STATIC, $method(static_cast<$Class*(*)()>(&DataFlavorUtil$RMI::remoteClass))},
	{}
};

$InnerClassInfo _DataFlavorUtil$RMI_InnerClassesInfo_[] = {
	{"sun.datatransfer.DataFlavorUtil$RMI", "sun.datatransfer.DataFlavorUtil", "RMI", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _DataFlavorUtil$RMI_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.datatransfer.DataFlavorUtil$RMI",
	"java.lang.Object",
	nullptr,
	_DataFlavorUtil$RMI_FieldInfo_,
	_DataFlavorUtil$RMI_MethodInfo_,
	nullptr,
	nullptr,
	_DataFlavorUtil$RMI_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.datatransfer.DataFlavorUtil"
};

$Object* allocate$DataFlavorUtil$RMI($Class* clazz) {
	return $of($alloc(DataFlavorUtil$RMI));
}

$Class* DataFlavorUtil$RMI::remoteClass$ = nullptr;
$Class* DataFlavorUtil$RMI::marshallObjectClass = nullptr;
$Constructor* DataFlavorUtil$RMI::marshallCtor = nullptr;
$Method* DataFlavorUtil$RMI::marshallGet = nullptr;

void DataFlavorUtil$RMI::init$() {
}

$Class* DataFlavorUtil$RMI::getClass($String* name) {
	$init(DataFlavorUtil$RMI);
	$beforeCallerSensitive();
	try {
		return $Class::forName(name, true, nullptr);
	} catch ($ClassNotFoundException& e) {
		return nullptr;
	}
	$shouldNotReachHere();
}

$Constructor* DataFlavorUtil$RMI::getConstructor($Class* c, $ClassArray* types) {
	$init(DataFlavorUtil$RMI);
	$beforeCallerSensitive();
	try {
		return (c == nullptr) ? ($Constructor*)nullptr : $nc(c)->getDeclaredConstructor(types);
	} catch ($NoSuchMethodException& x) {
		$throwNew($AssertionError, $of(x));
	}
	$shouldNotReachHere();
}

$Method* DataFlavorUtil$RMI::getMethod($Class* c, $String* name, $ClassArray* types) {
	$init(DataFlavorUtil$RMI);
	$beforeCallerSensitive();
	try {
		return (c == nullptr) ? ($Method*)nullptr : $nc(c)->getMethod(name, types);
	} catch ($NoSuchMethodException& e) {
		$throwNew($AssertionError, $of(e));
	}
	$shouldNotReachHere();
}

$Class* DataFlavorUtil$RMI::remoteClass() {
	$init(DataFlavorUtil$RMI);
	return DataFlavorUtil$RMI::remoteClass$;
}

bool DataFlavorUtil$RMI::isRemote($Class* c) {
	$init(DataFlavorUtil$RMI);
	return (DataFlavorUtil$RMI::remoteClass$ != nullptr) && $nc(DataFlavorUtil$RMI::remoteClass$)->isAssignableFrom(c);
}

$Object* DataFlavorUtil$RMI::newMarshalledObject(Object$* obj) {
	$init(DataFlavorUtil$RMI);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	try {
		return $of(DataFlavorUtil$RMI::marshallCtor == nullptr ? ($Object*)nullptr : $nc(DataFlavorUtil$RMI::marshallCtor)->newInstance($$new($ObjectArray, {obj})));
	} catch ($InstantiationException& x) {
		$throwNew($AssertionError, $of(x));
	} catch ($IllegalAccessException& x) {
		$throwNew($AssertionError, $of(x));
	} catch ($InvocationTargetException& x) {
		$var($Throwable, cause, x->getCause());
		if ($instanceOf($IOException, cause)) {
			$throw($cast($IOException, cause));
		}
		$throwNew($AssertionError, $of(x));
	}
	$shouldNotReachHere();
}

$Object* DataFlavorUtil$RMI::getMarshalledObject(Object$* obj) {
	$init(DataFlavorUtil$RMI);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	try {
		return $of(DataFlavorUtil$RMI::marshallGet == nullptr ? ($Object*)nullptr : $nc(DataFlavorUtil$RMI::marshallGet)->invoke(obj, $$new($ObjectArray, 0)));
	} catch ($IllegalAccessException& x) {
		$throwNew($AssertionError, $of(x));
	} catch ($InvocationTargetException& x) {
		$var($Throwable, cause, x->getCause());
		if ($instanceOf($IOException, cause)) {
			$throw($cast($IOException, cause));
		}
		if ($instanceOf($ClassNotFoundException, cause)) {
			$throw($cast($ClassNotFoundException, cause));
		}
		$throwNew($AssertionError, $of(x));
	}
	$shouldNotReachHere();
}

void clinit$DataFlavorUtil$RMI($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(DataFlavorUtil$RMI::remoteClass$, DataFlavorUtil$RMI::getClass("java.rmi.Remote"_s));
	$assignStatic(DataFlavorUtil$RMI::marshallObjectClass, DataFlavorUtil$RMI::getClass("java.rmi.MarshalledObject"_s));
	$assignStatic(DataFlavorUtil$RMI::marshallCtor, DataFlavorUtil$RMI::getConstructor(DataFlavorUtil$RMI::marshallObjectClass, $$new($ClassArray, {$Object::class$})));
	$assignStatic(DataFlavorUtil$RMI::marshallGet, DataFlavorUtil$RMI::getMethod(DataFlavorUtil$RMI::marshallObjectClass, "get"_s, $$new($ClassArray, 0)));
}

DataFlavorUtil$RMI::DataFlavorUtil$RMI() {
}

$Class* DataFlavorUtil$RMI::load$($String* name, bool initialize) {
	$loadClass(DataFlavorUtil$RMI, name, initialize, &_DataFlavorUtil$RMI_ClassInfo_, clinit$DataFlavorUtil$RMI, allocate$DataFlavorUtil$RMI);
	return class$;
}

$Class* DataFlavorUtil$RMI::class$ = nullptr;

	} // datatransfer
} // sun