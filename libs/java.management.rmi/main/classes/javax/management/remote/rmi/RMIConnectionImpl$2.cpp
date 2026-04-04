#include <javax/management/remote/rmi/RMIConnectionImpl$2.h>
#include <com/sun/jmx/remote/util/ClassLoaderWithRepository.h>
#include <java/lang/ClassLoader.h>
#include <javax/management/loading/ClassLoaderRepository.h>
#include <javax/management/remote/rmi/RMIConnectionImpl.h>
#include <jcpp.h>

using $ClassLoaderWithRepository = ::com::sun::jmx::remote::util::ClassLoaderWithRepository;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ClassLoaderRepository = ::javax::management::loading::ClassLoaderRepository;
using $RMIConnectionImpl = ::javax::management::remote::rmi::RMIConnectionImpl;

namespace javax {
	namespace management {
		namespace remote {
			namespace rmi {

void RMIConnectionImpl$2::init$($RMIConnectionImpl* this$0, $ClassLoaderRepository* val$repository, $ClassLoader* val$dcl) {
	$set(this, this$0, this$0);
	$set(this, val$repository, val$repository);
	$set(this, val$dcl, val$dcl);
}

$Object* RMIConnectionImpl$2::run() {
	return $new($ClassLoaderWithRepository, this->val$repository, this->val$dcl);
}

RMIConnectionImpl$2::RMIConnectionImpl$2() {
}

$Class* RMIConnectionImpl$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/management/remote/rmi/RMIConnectionImpl;", nullptr, $FINAL | $SYNTHETIC, $field(RMIConnectionImpl$2, this$0)},
		{"val$dcl", "Ljava/lang/ClassLoader;", nullptr, $FINAL | $SYNTHETIC, $field(RMIConnectionImpl$2, val$dcl)},
		{"val$repository", "Ljavax/management/loading/ClassLoaderRepository;", nullptr, $FINAL | $SYNTHETIC, $field(RMIConnectionImpl$2, val$repository)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/management/remote/rmi/RMIConnectionImpl;Ljavax/management/loading/ClassLoaderRepository;Ljava/lang/ClassLoader;)V", "()V", 0, $method(RMIConnectionImpl$2, init$, void, $RMIConnectionImpl*, $ClassLoaderRepository*, $ClassLoader*)},
		{"run", "()Lcom/sun/jmx/remote/util/ClassLoaderWithRepository;", nullptr, $PUBLIC, $virtualMethod(RMIConnectionImpl$2, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"javax.management.remote.rmi.RMIConnectionImpl",
		"<init>",
		"(Ljavax/management/remote/rmi/RMIServerImpl;Ljava/lang/String;Ljava/lang/ClassLoader;Ljavax/security/auth/Subject;Ljava/util/Map;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.management.remote.rmi.RMIConnectionImpl$2", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.management.remote.rmi.RMIConnectionImpl$2",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedAction<Lcom/sun/jmx/remote/util/ClassLoaderWithRepository;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.management.remote.rmi.RMIConnectionImpl"
	};
	$loadClass(RMIConnectionImpl$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(RMIConnectionImpl$2);
	});
	return class$;
}

$Class* RMIConnectionImpl$2::class$ = nullptr;

			} // rmi
		} // remote
	} // management
} // javax