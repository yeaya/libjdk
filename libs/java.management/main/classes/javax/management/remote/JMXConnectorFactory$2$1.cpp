#include <javax/management/remote/JMXConnectorFactory$2$1.h>
#include <java/lang/ClassLoader.h>
#include <javax/management/remote/JMXConnectorFactory$2.h>
#include <sun/reflect/misc/ReflectUtil.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JMXConnectorFactory$2 = ::javax::management::remote::JMXConnectorFactory$2;
using $ReflectUtil = ::sun::reflect::misc::ReflectUtil;

namespace javax {
	namespace management {
		namespace remote {

void JMXConnectorFactory$2$1::init$($JMXConnectorFactory$2* this$0, $ClassLoader* arg0) {
	$set(this, this$0, this$0);
	$ClassLoader::init$(arg0);
}

$Class* JMXConnectorFactory$2$1::loadClass($String* name, bool resolve) {
	$ReflectUtil::checkPackageAccess(name);
	return $ClassLoader::loadClass(name, resolve);
}

JMXConnectorFactory$2$1::JMXConnectorFactory$2$1() {
}

$Class* JMXConnectorFactory$2$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/management/remote/JMXConnectorFactory$2;", nullptr, $FINAL | $SYNTHETIC, $field(JMXConnectorFactory$2$1, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/management/remote/JMXConnectorFactory$2;Ljava/lang/ClassLoader;)V", nullptr, 0, $method(JMXConnectorFactory$2$1, init$, void, $JMXConnectorFactory$2*, $ClassLoader*)},
		{"loadClass", "(Ljava/lang/String;Z)Ljava/lang/Class;", "(Ljava/lang/String;Z)Ljava/lang/Class<*>;", $PROTECTED, $virtualMethod(JMXConnectorFactory$2$1, loadClass, $Class*, $String*, bool), "java.lang.ClassNotFoundException"},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"javax.management.remote.JMXConnectorFactory$2",
		"run",
		"()Ljava/lang/ClassLoader;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.management.remote.JMXConnectorFactory$2", nullptr, nullptr, 0},
		{"javax.management.remote.JMXConnectorFactory$2$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.management.remote.JMXConnectorFactory$2$1",
		"java.lang.ClassLoader",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.management.remote.JMXConnectorFactory"
	};
	$loadClass(JMXConnectorFactory$2$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JMXConnectorFactory$2$1);
	});
	return class$;
}

$Class* JMXConnectorFactory$2$1::class$ = nullptr;

		} // remote
	} // management
} // javax