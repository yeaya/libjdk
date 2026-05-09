#include <java/rmi/MarshalledObject$MarshalledObjectInputStream.h>
#include <java/io/InputStream.h>
#include <java/io/ObjectInputFilter.h>
#include <java/io/ObjectInputStream.h>
#include <java/io/Serializable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/rmi/MarshalledObject.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <sun/rmi/server/MarshalInputStream.h>
#include <jcpp.h>

using $InputStream = ::java::io::InputStream;
using $ObjectInputFilter = ::java::io::ObjectInputFilter;
using $ObjectInputStream = ::java::io::ObjectInputStream;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Void = ::java::lang::Void;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $MarshalInputStream = ::sun::rmi::server::MarshalInputStream;

namespace java {
	namespace rmi {

class MarshalledObject$MarshalledObjectInputStream$$Lambda$lambda$new$0 : public $PrivilegedAction {
	$class(MarshalledObject$MarshalledObjectInputStream$$Lambda$lambda$new$0, $NO_CLASS_INIT, $PrivilegedAction)
public:
	void init$(MarshalledObject$MarshalledObjectInputStream* inst, $ObjectInputFilter* filter) {
		$set(this, inst$, inst);
		$set(this, filter, filter);
	}
	virtual $Object* run() override {
		return $nc(inst$)->lambda$new$0(filter);
	}
	MarshalledObject$MarshalledObjectInputStream* inst$ = nullptr;
	$ObjectInputFilter* filter = nullptr;
};
$Class* MarshalledObject$MarshalledObjectInputStream$$Lambda$lambda$new$0::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(MarshalledObject$MarshalledObjectInputStream$$Lambda$lambda$new$0, inst$)},
		{"filter", "Ljava/io/ObjectInputFilter;", nullptr, $PUBLIC, $field(MarshalledObject$MarshalledObjectInputStream$$Lambda$lambda$new$0, filter)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/rmi/MarshalledObject$MarshalledObjectInputStream;Ljava/io/ObjectInputFilter;)V", nullptr, $PUBLIC, $method(MarshalledObject$MarshalledObjectInputStream$$Lambda$lambda$new$0, init$, void, MarshalledObject$MarshalledObjectInputStream*, $ObjectInputFilter*)},
		{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(MarshalledObject$MarshalledObjectInputStream$$Lambda$lambda$new$0, run, $Object*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"java.rmi.MarshalledObject$MarshalledObjectInputStream$$Lambda$lambda$new$0",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(MarshalledObject$MarshalledObjectInputStream$$Lambda$lambda$new$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MarshalledObject$MarshalledObjectInputStream$$Lambda$lambda$new$0);
	});
	return class$;
}
$Class* MarshalledObject$MarshalledObjectInputStream$$Lambda$lambda$new$0::class$ = nullptr;

void MarshalledObject$MarshalledObjectInputStream::init$($InputStream* objIn, $InputStream* locIn, $ObjectInputFilter* filter) {
	$beforeCallerSensitive();
	$MarshalInputStream::init$(objIn);
	$set(this, locIn, locIn == nullptr ? ($ObjectInputStream*)nullptr : $new($ObjectInputStream, locIn));
	if (filter != nullptr) {
		$AccessController::doPrivileged($cast($PrivilegedAction, $$new(MarshalledObject$MarshalledObjectInputStream$$Lambda$lambda$new$0, this, filter)));
	}
}

$Object* MarshalledObject$MarshalledObjectInputStream::readLocation() {
	return (this->locIn == nullptr ? ($Object*)nullptr : this->locIn->readObject());
}

$Void* MarshalledObject$MarshalledObjectInputStream::lambda$new$0($ObjectInputFilter* filter) {
	this->setObjectInputFilter(filter);
	if (this->locIn != nullptr) {
		this->locIn->setObjectInputFilter(filter);
	}
	return nullptr;
}

MarshalledObject$MarshalledObjectInputStream::MarshalledObject$MarshalledObjectInputStream() {
}

$Class* MarshalledObject$MarshalledObjectInputStream::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("java.rmi.MarshalledObject$MarshalledObjectInputStream$$Lambda$lambda$new$0")) {
			return MarshalledObject$MarshalledObjectInputStream$$Lambda$lambda$new$0::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"locIn", "Ljava/io/ObjectInputStream;", nullptr, $PRIVATE, $field(MarshalledObject$MarshalledObjectInputStream, locIn)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/io/InputStream;Ljava/io/InputStream;Ljava/io/ObjectInputFilter;)V", nullptr, 0, $method(MarshalledObject$MarshalledObjectInputStream, init$, void, $InputStream*, $InputStream*, $ObjectInputFilter*), "java.io.IOException"},
		{"lambda$new$0", "(Ljava/io/ObjectInputFilter;)Ljava/lang/Void;", nullptr, $PRIVATE | $SYNTHETIC, $method(MarshalledObject$MarshalledObjectInputStream, lambda$new$0, $Void*, $ObjectInputFilter*)},
		{"readLocation", "()Ljava/lang/Object;", nullptr, $PROTECTED, $virtualMethod(MarshalledObject$MarshalledObjectInputStream, readLocation, $Object*), "java.io.IOException,java.lang.ClassNotFoundException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.rmi.MarshalledObject$MarshalledObjectInputStream", "java.rmi.MarshalledObject", "MarshalledObjectInputStream", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.rmi.MarshalledObject$MarshalledObjectInputStream",
		"sun.rmi.server.MarshalInputStream",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.rmi.MarshalledObject"
	};
	$loadClass(MarshalledObject$MarshalledObjectInputStream, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(MarshalledObject$MarshalledObjectInputStream));
	});
	return class$;
}

$Class* MarshalledObject$MarshalledObjectInputStream::class$ = nullptr;

	} // rmi
} // java