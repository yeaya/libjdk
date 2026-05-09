#include <sun/rmi/registry/RegistryImpl$2.h>
#include <java/io/ObjectInputFilter$FilterInfo.h>
#include <java/io/ObjectInputFilter$Status.h>
#include <java/io/ObjectInputFilter.h>
#include <java/io/Serializable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/rmi/server/ObjID.h>
#include <sun/rmi/registry/RegistryImpl.h>
#include <sun/rmi/server/UnicastServerRef.h>
#include <sun/rmi/transport/LiveRef.h>
#include <jcpp.h>

using $ObjectInputFilter = ::java::io::ObjectInputFilter;
using $ObjectInputFilter$FilterInfo = ::java::io::ObjectInputFilter$FilterInfo;
using $ObjectInputFilter$Status = ::java::io::ObjectInputFilter$Status;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $RegistryImpl = ::sun::rmi::registry::RegistryImpl;
using $UnicastServerRef = ::sun::rmi::server::UnicastServerRef;
using $LiveRef = ::sun::rmi::transport::LiveRef;

namespace sun {
	namespace rmi {
		namespace registry {

class RegistryImpl$2$$Lambda$registryFilter : public $ObjectInputFilter {
	$class(RegistryImpl$2$$Lambda$registryFilter, $NO_CLASS_INIT, $ObjectInputFilter)
public:
	void init$() {
	}
	virtual $ObjectInputFilter$Status* checkInput($ObjectInputFilter$FilterInfo* filterInfo) override {
		return $RegistryImpl::registryFilter(filterInfo);
	}
};
$Class* RegistryImpl$2$$Lambda$registryFilter::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(RegistryImpl$2$$Lambda$registryFilter, init$, void)},
		{"checkInput", "(Ljava/io/ObjectInputFilter$FilterInfo;)Ljava/io/ObjectInputFilter$Status;", nullptr, $PUBLIC, $virtualMethod(RegistryImpl$2$$Lambda$registryFilter, checkInput, $ObjectInputFilter$Status*, $ObjectInputFilter$FilterInfo*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"sun.rmi.registry.RegistryImpl$2$$Lambda$registryFilter",
		"java.lang.Object",
		"java.io.ObjectInputFilter",
		nullptr,
		methodInfos$$
	};
	$loadClass(RegistryImpl$2$$Lambda$registryFilter, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(RegistryImpl$2$$Lambda$registryFilter);
	});
	return class$;
}
$Class* RegistryImpl$2$$Lambda$registryFilter::class$ = nullptr;

void RegistryImpl$2::init$($RegistryImpl* this$0, int32_t val$port) {
	$set(this, this$0, this$0);
	this->val$port = val$port;
}

$Object* RegistryImpl$2::run() {
	$useLocalObjectStack();
	$init($RegistryImpl);
	$var($LiveRef, lref, $new($LiveRef, $RegistryImpl::id, this->val$port));
	this->this$0->setup($$new($UnicastServerRef, lref, $$new(RegistryImpl$2$$Lambda$registryFilter)));
	return nullptr;
}

RegistryImpl$2::RegistryImpl$2() {
}

$Class* RegistryImpl$2::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("sun.rmi.registry.RegistryImpl$2$$Lambda$registryFilter")) {
			return RegistryImpl$2$$Lambda$registryFilter::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/rmi/registry/RegistryImpl;", nullptr, $FINAL | $SYNTHETIC, $field(RegistryImpl$2, this$0)},
		{"val$port", "I", nullptr, $FINAL | $SYNTHETIC, $field(RegistryImpl$2, val$port)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/rmi/registry/RegistryImpl;I)V", "()V", 0, $method(RegistryImpl$2, init$, void, $RegistryImpl*, int32_t)},
		{"run", "()Ljava/lang/Void;", nullptr, $PUBLIC, $virtualMethod(RegistryImpl$2, run, $Object*), "java.rmi.RemoteException"},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.rmi.registry.RegistryImpl",
		"<init>",
		"(I)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.rmi.registry.RegistryImpl$2", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.rmi.registry.RegistryImpl$2",
		"java.lang.Object",
		"java.security.PrivilegedExceptionAction",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedExceptionAction<Ljava/lang/Void;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.rmi.registry.RegistryImpl"
	};
	$loadClass(RegistryImpl$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(RegistryImpl$2);
	});
	return class$;
}

$Class* RegistryImpl$2::class$ = nullptr;

		} // registry
	} // rmi
} // sun