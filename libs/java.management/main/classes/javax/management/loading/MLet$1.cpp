#include <javax/management/loading/MLet$1.h>
#include <javax/management/MBeanServer.h>
#include <javax/management/loading/ClassLoaderRepository.h>
#include <javax/management/loading/MLet.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MBeanServer = ::javax::management::MBeanServer;
using $MLet = ::javax::management::loading::MLet;

namespace javax {
	namespace management {
		namespace loading {

void MLet$1::init$($MLet* this$0, $MBeanServer* val$server) {
	$set(this, this$0, this$0);
	$set(this, val$server, val$server);
}

$Object* MLet$1::run() {
	return $nc(this->val$server)->getClassLoaderRepository();
}

MLet$1::MLet$1() {
}

$Class* MLet$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/management/loading/MLet;", nullptr, $FINAL | $SYNTHETIC, $field(MLet$1, this$0)},
		{"val$server", "Ljavax/management/MBeanServer;", nullptr, $FINAL | $SYNTHETIC, $field(MLet$1, val$server)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/management/loading/MLet;Ljavax/management/MBeanServer;)V", "()V", 0, $method(MLet$1, init$, void, $MLet*, $MBeanServer*)},
		{"run", "()Ljavax/management/loading/ClassLoaderRepository;", nullptr, $PUBLIC, $virtualMethod(MLet$1, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"javax.management.loading.MLet",
		"setMBeanServer",
		"(Ljavax/management/MBeanServer;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.management.loading.MLet$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.management.loading.MLet$1",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljavax/management/loading/ClassLoaderRepository;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.management.loading.MLet"
	};
	$loadClass(MLet$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MLet$1);
	});
	return class$;
}

$Class* MLet$1::class$ = nullptr;

		} // loading
	} // management
} // javax