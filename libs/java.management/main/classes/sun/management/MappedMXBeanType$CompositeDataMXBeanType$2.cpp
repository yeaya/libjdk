#include <sun/management/MappedMXBeanType$CompositeDataMXBeanType$2.h>
#include <java/lang/reflect/Method.h>
#include <sun/management/MappedMXBeanType$CompositeDataMXBeanType.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MappedMXBeanType$CompositeDataMXBeanType = ::sun::management::MappedMXBeanType$CompositeDataMXBeanType;

namespace sun {
	namespace management {

void MappedMXBeanType$CompositeDataMXBeanType$2::init$($MappedMXBeanType$CompositeDataMXBeanType* this$0) {
	$set(this, this$0, this$0);
}

$Object* MappedMXBeanType$CompositeDataMXBeanType$2::run() {
	$beforeCallerSensitive();
	return $nc(this->this$0->javaClass)->getMethods();
}

MappedMXBeanType$CompositeDataMXBeanType$2::MappedMXBeanType$CompositeDataMXBeanType$2() {
}

$Class* MappedMXBeanType$CompositeDataMXBeanType$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/management/MappedMXBeanType$CompositeDataMXBeanType;", nullptr, $FINAL | $SYNTHETIC, $field(MappedMXBeanType$CompositeDataMXBeanType$2, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/management/MappedMXBeanType$CompositeDataMXBeanType;)V", nullptr, 0, $method(MappedMXBeanType$CompositeDataMXBeanType$2, init$, void, $MappedMXBeanType$CompositeDataMXBeanType*)},
		{"run", "()[Ljava/lang/reflect/Method;", nullptr, $PUBLIC, $virtualMethod(MappedMXBeanType$CompositeDataMXBeanType$2, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.management.MappedMXBeanType$CompositeDataMXBeanType",
		"<init>",
		"(Ljava/lang/Class;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.management.MappedMXBeanType$CompositeDataMXBeanType", "sun.management.MappedMXBeanType", "CompositeDataMXBeanType", $STATIC},
		{"sun.management.MappedMXBeanType$CompositeDataMXBeanType$2", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.management.MappedMXBeanType$CompositeDataMXBeanType$2",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedAction<[Ljava/lang/reflect/Method;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.management.MappedMXBeanType"
	};
	$loadClass(MappedMXBeanType$CompositeDataMXBeanType$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MappedMXBeanType$CompositeDataMXBeanType$2);
	});
	return class$;
}

$Class* MappedMXBeanType$CompositeDataMXBeanType$2::class$ = nullptr;

	} // management
} // sun