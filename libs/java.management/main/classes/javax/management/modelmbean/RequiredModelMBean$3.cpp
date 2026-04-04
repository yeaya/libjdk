#include <javax/management/modelmbean/RequiredModelMBean$3.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/ClassNotFoundException.h>
#include <javax/management/modelmbean/RequiredModelMBean.h>
#include <sun/reflect/misc/ReflectUtil.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $ClassNotFoundException = ::java::lang::ClassNotFoundException;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RequiredModelMBean = ::javax::management::modelmbean::RequiredModelMBean;
using $ReflectUtil = ::sun::reflect::misc::ReflectUtil;

namespace javax {
	namespace management {
		namespace modelmbean {

void RequiredModelMBean$3::init$($RequiredModelMBean* this$0, $String* val$className, $Class* val$rmmbClass) {
	$set(this, this$0, this$0);
	$set(this, val$className, val$className);
	$set(this, val$rmmbClass, val$rmmbClass);
}

$Object* RequiredModelMBean$3::run() {
	$beforeCallerSensitive();
	try {
		$ReflectUtil::checkPackageAccess(this->val$className);
		$var($ClassLoader, targetClassLoader, $nc(this->val$rmmbClass)->getClassLoader());
		$Class* clz = $Class::forName(this->val$className, false, targetClassLoader);
		if (!this->val$rmmbClass->isAssignableFrom(clz)) {
			return nullptr;
		}
		return $of(clz);
	} catch ($ClassNotFoundException& e) {
		return nullptr;
	}
	$shouldNotReachHere();
}

RequiredModelMBean$3::RequiredModelMBean$3() {
}

$Class* RequiredModelMBean$3::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/management/modelmbean/RequiredModelMBean;", nullptr, $FINAL | $SYNTHETIC, $field(RequiredModelMBean$3, this$0)},
		{"val$rmmbClass", "Ljava/lang/Class;", nullptr, $FINAL | $SYNTHETIC, $field(RequiredModelMBean$3, val$rmmbClass)},
		{"val$className", "Ljava/lang/String;", nullptr, $FINAL | $SYNTHETIC, $field(RequiredModelMBean$3, val$className)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/management/modelmbean/RequiredModelMBean;Ljava/lang/String;Ljava/lang/Class;)V", "()V", 0, $method(RequiredModelMBean$3, init$, void, $RequiredModelMBean*, $String*, $Class*)},
		{"run", "()Ljava/lang/Class;", "()Ljava/lang/Class<*>;", $PUBLIC, $virtualMethod(RequiredModelMBean$3, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"javax.management.modelmbean.RequiredModelMBean",
		"findRMMBMethod",
		"(Ljava/lang/String;Ljava/lang/Object;Ljava/lang/String;[Ljava/lang/String;)Ljava/lang/reflect/Method;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.management.modelmbean.RequiredModelMBean$3", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.management.modelmbean.RequiredModelMBean$3",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Class<*>;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.management.modelmbean.RequiredModelMBean"
	};
	$loadClass(RequiredModelMBean$3, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(RequiredModelMBean$3);
	});
	return class$;
}

$Class* RequiredModelMBean$3::class$ = nullptr;

		} // modelmbean
	} // management
} // javax