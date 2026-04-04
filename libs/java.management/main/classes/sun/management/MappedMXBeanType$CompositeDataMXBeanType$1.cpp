#include <sun/management/MappedMXBeanType$CompositeDataMXBeanType$1.h>
#include <java/lang/reflect/Method.h>
#include <sun/management/MappedMXBeanType$CompositeDataMXBeanType.h>
#include <sun/management/MappedMXBeanType.h>
#include <jcpp.h>

#undef COMPOSITE_DATA_CLASS

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MappedMXBeanType = ::sun::management::MappedMXBeanType;
using $MappedMXBeanType$CompositeDataMXBeanType = ::sun::management::MappedMXBeanType$CompositeDataMXBeanType;

namespace sun {
	namespace management {

void MappedMXBeanType$CompositeDataMXBeanType$1::init$($MappedMXBeanType$CompositeDataMXBeanType* this$0) {
	$set(this, this$0, this$0);
}

$Object* MappedMXBeanType$CompositeDataMXBeanType$1::run() {
	$beforeCallerSensitive();
	$init($MappedMXBeanType);
	return $of($nc(this->this$0->javaClass)->getMethod("from"_s, $$new($ClassArray, {$MappedMXBeanType::COMPOSITE_DATA_CLASS})));
}

MappedMXBeanType$CompositeDataMXBeanType$1::MappedMXBeanType$CompositeDataMXBeanType$1() {
}

$Class* MappedMXBeanType$CompositeDataMXBeanType$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/management/MappedMXBeanType$CompositeDataMXBeanType;", nullptr, $FINAL | $SYNTHETIC, $field(MappedMXBeanType$CompositeDataMXBeanType$1, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/management/MappedMXBeanType$CompositeDataMXBeanType;)V", nullptr, 0, $method(MappedMXBeanType$CompositeDataMXBeanType$1, init$, void, $MappedMXBeanType$CompositeDataMXBeanType*)},
		{"run", "()Ljava/lang/reflect/Method;", nullptr, $PUBLIC, $virtualMethod(MappedMXBeanType$CompositeDataMXBeanType$1, run, $Object*), "java.lang.NoSuchMethodException"},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.management.MappedMXBeanType$CompositeDataMXBeanType",
		"<init>",
		"(Ljava/lang/Class;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.management.MappedMXBeanType$CompositeDataMXBeanType", "sun.management.MappedMXBeanType", "CompositeDataMXBeanType", $STATIC},
		{"sun.management.MappedMXBeanType$CompositeDataMXBeanType$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.management.MappedMXBeanType$CompositeDataMXBeanType$1",
		"java.lang.Object",
		"java.security.PrivilegedExceptionAction",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedExceptionAction<Ljava/lang/reflect/Method;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.management.MappedMXBeanType"
	};
	$loadClass(MappedMXBeanType$CompositeDataMXBeanType$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MappedMXBeanType$CompositeDataMXBeanType$1);
	});
	return class$;
}

$Class* MappedMXBeanType$CompositeDataMXBeanType$1::class$ = nullptr;

	} // management
} // sun