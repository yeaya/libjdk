#include <javax/management/modelmbean/RequiredModelMBean$6.h>
#include <java/lang/ClassNotFoundException.h>
#include <javax/management/loading/ClassLoaderRepository.h>
#include <javax/management/modelmbean/RequiredModelMBean.h>
#include <sun/reflect/misc/ReflectUtil.h>
#include <jcpp.h>

using $ClassNotFoundExceptionArray = $Array<::java::lang::ClassNotFoundException>;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassNotFoundException = ::java::lang::ClassNotFoundException;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ClassLoaderRepository = ::javax::management::loading::ClassLoaderRepository;
using $RequiredModelMBean = ::javax::management::modelmbean::RequiredModelMBean;
using $ReflectUtil = ::sun::reflect::misc::ReflectUtil;

namespace javax {
	namespace management {
		namespace modelmbean {

void RequiredModelMBean$6::init$($RequiredModelMBean* this$0, $String* val$className, $ClassNotFoundExceptionArray* val$caughtException) {
	$set(this, this$0, this$0);
	$set(this, val$className, val$className);
	$set(this, val$caughtException, val$caughtException);
}

$Object* RequiredModelMBean$6::run() {
	$beforeCallerSensitive();
	try {
		$ReflectUtil::checkPackageAccess(this->val$className);
		return $of($Class::forName(this->val$className));
	} catch ($ClassNotFoundException& e) {
		$var($ClassLoaderRepository, clr, this->this$0->getClassLoaderRepository());
		try {
			if (clr == nullptr) {
				$throwNew($ClassNotFoundException, this->val$className);
			}
			return $of($nc(clr)->loadClass(this->val$className));
		} catch ($ClassNotFoundException& ex) {
			$nc(this->val$caughtException)->set(0, ex);
		}
	}
	return nullptr;
}

RequiredModelMBean$6::RequiredModelMBean$6() {
}

$Class* RequiredModelMBean$6::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/management/modelmbean/RequiredModelMBean;", nullptr, $FINAL | $SYNTHETIC, $field(RequiredModelMBean$6, this$0)},
		{"val$caughtException", "[Ljava/lang/ClassNotFoundException;", nullptr, $FINAL | $SYNTHETIC, $field(RequiredModelMBean$6, val$caughtException)},
		{"val$className", "Ljava/lang/String;", nullptr, $FINAL | $SYNTHETIC, $field(RequiredModelMBean$6, val$className)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/management/modelmbean/RequiredModelMBean;Ljava/lang/String;[Ljava/lang/ClassNotFoundException;)V", "()V", 0, $method(RequiredModelMBean$6, init$, void, $RequiredModelMBean*, $String*, $ClassNotFoundExceptionArray*)},
		{"run", "()Ljava/lang/Class;", "()Ljava/lang/Class<*>;", $PUBLIC, $virtualMethod(RequiredModelMBean$6, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"javax.management.modelmbean.RequiredModelMBean",
		"loadClass",
		"(Ljava/lang/String;)Ljava/lang/Class;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.management.modelmbean.RequiredModelMBean$6", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.management.modelmbean.RequiredModelMBean$6",
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
	$loadClass(RequiredModelMBean$6, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(RequiredModelMBean$6);
	});
	return class$;
}

$Class* RequiredModelMBean$6::class$ = nullptr;

		} // modelmbean
	} // management
} // javax