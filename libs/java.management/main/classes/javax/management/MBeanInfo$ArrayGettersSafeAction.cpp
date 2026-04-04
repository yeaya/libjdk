#include <javax/management/MBeanInfo$ArrayGettersSafeAction.h>
#include <java/lang/NoSuchMethodException.h>
#include <java/lang/reflect/Method.h>
#include <javax/management/MBeanInfo.h>
#include <jcpp.h>

using $MethodArray = $Array<::java::lang::reflect::Method>;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NoSuchMethodException = ::java::lang::NoSuchMethodException;
using $Method = ::java::lang::reflect::Method;

namespace javax {
	namespace management {

void MBeanInfo$ArrayGettersSafeAction::init$($Class* subclass, $Class* immutableClass) {
	$set(this, subclass, subclass);
	$set(this, immutableClass, immutableClass);
}

$Object* MBeanInfo$ArrayGettersSafeAction::run() {
	$useLocalObjectStack();
	$beforeCallerSensitive();
	$var($MethodArray, methods, $nc(this->immutableClass)->getMethods());
	for (int32_t i = 0; i < $nc(methods)->length; ++i) {
		$var($Method, method, methods->get(i));
		$var($String, methodName, $nc(method)->getName());
		bool var$1 = $nc(methodName)->startsWith("get"_s);
		bool var$0 = var$1 && $nc($(method->getParameterTypes()))->length == 0;
		if (var$0 && $nc(method->getReturnType())->isArray()) {
			try {
				$var($Method, submethod, $nc(this->subclass)->getMethod(methodName, $$new($ClassArray, 0)));
				if (!$nc(submethod)->equals(method)) {
					return $of($Boolean::valueOf(false));
				}
			} catch ($NoSuchMethodException& e) {
				return $of($Boolean::valueOf(false));
			}
		}
	}
	return $of($Boolean::valueOf(true));
}

MBeanInfo$ArrayGettersSafeAction::MBeanInfo$ArrayGettersSafeAction() {
}

$Class* MBeanInfo$ArrayGettersSafeAction::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"subclass", "Ljava/lang/Class;", "Ljava/lang/Class<*>;", $PRIVATE | $FINAL, $field(MBeanInfo$ArrayGettersSafeAction, subclass)},
		{"immutableClass", "Ljava/lang/Class;", "Ljava/lang/Class<*>;", $PRIVATE | $FINAL, $field(MBeanInfo$ArrayGettersSafeAction, immutableClass)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/Class;Ljava/lang/Class;)V", "(Ljava/lang/Class<*>;Ljava/lang/Class<*>;)V", 0, $method(MBeanInfo$ArrayGettersSafeAction, init$, void, $Class*, $Class*)},
		{"run", "()Ljava/lang/Boolean;", nullptr, $PUBLIC, $virtualMethod(MBeanInfo$ArrayGettersSafeAction, run, $Object*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.management.MBeanInfo$ArrayGettersSafeAction", "javax.management.MBeanInfo", "ArrayGettersSafeAction", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.management.MBeanInfo$ArrayGettersSafeAction",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Boolean;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.management.MBeanInfo"
	};
	$loadClass(MBeanInfo$ArrayGettersSafeAction, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MBeanInfo$ArrayGettersSafeAction);
	});
	return class$;
}

$Class* MBeanInfo$ArrayGettersSafeAction::class$ = nullptr;

	} // management
} // javax