#include <sun/management/VMManagementImpl$1.h>
#include <sun/management/VMManagementImpl.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $VMManagementImpl = ::sun::management::VMManagementImpl;

namespace sun {
	namespace management {

void VMManagementImpl$1::init$($VMManagementImpl* this$0) {
	$set(this, this$0, this$0);
}

$Object* VMManagementImpl$1::run() {
	return $of($System::getProperty("sun.management.compiler"_s));
}

VMManagementImpl$1::VMManagementImpl$1() {
}

$Class* VMManagementImpl$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/management/VMManagementImpl;", nullptr, $FINAL | $SYNTHETIC, $field(VMManagementImpl$1, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/management/VMManagementImpl;)V", nullptr, 0, $method(VMManagementImpl$1, init$, void, $VMManagementImpl*)},
		{"run", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(VMManagementImpl$1, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.management.VMManagementImpl",
		"getCompilerName",
		"()Ljava/lang/String;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.management.VMManagementImpl$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.management.VMManagementImpl$1",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/String;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.management.VMManagementImpl"
	};
	$loadClass(VMManagementImpl$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(VMManagementImpl$1);
	});
	return class$;
}

$Class* VMManagementImpl$1::class$ = nullptr;

	} // management
} // sun