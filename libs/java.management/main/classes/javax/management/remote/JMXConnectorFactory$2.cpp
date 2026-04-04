#include <javax/management/remote/JMXConnectorFactory$2.h>
#include <java/lang/ClassLoader.h>
#include <javax/management/remote/JMXConnectorFactory$2$1.h>
#include <javax/management/remote/JMXConnectorFactory.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JMXConnectorFactory$2$1 = ::javax::management::remote::JMXConnectorFactory$2$1;

namespace javax {
	namespace management {
		namespace remote {

void JMXConnectorFactory$2::init$($ClassLoader* val$parent) {
	$set(this, val$parent, val$parent);
}

$Object* JMXConnectorFactory$2::run() {
	return $new($JMXConnectorFactory$2$1, this, this->val$parent);
}

JMXConnectorFactory$2::JMXConnectorFactory$2() {
}

$Class* JMXConnectorFactory$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$parent", "Ljava/lang/ClassLoader;", nullptr, $FINAL | $SYNTHETIC, $field(JMXConnectorFactory$2, val$parent)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/ClassLoader;)V", "()V", 0, $method(JMXConnectorFactory$2, init$, void, $ClassLoader*)},
		{"run", "()Ljava/lang/ClassLoader;", nullptr, $PUBLIC, $virtualMethod(JMXConnectorFactory$2, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"javax.management.remote.JMXConnectorFactory",
		"wrap",
		"(Ljava/lang/ClassLoader;)Ljava/lang/ClassLoader;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.management.remote.JMXConnectorFactory$2", nullptr, nullptr, 0},
		{"javax.management.remote.JMXConnectorFactory$2$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.management.remote.JMXConnectorFactory$2",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/ClassLoader;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.management.remote.JMXConnectorFactory"
	};
	$loadClass(JMXConnectorFactory$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JMXConnectorFactory$2);
	});
	return class$;
}

$Class* JMXConnectorFactory$2::class$ = nullptr;

		} // remote
	} // management
} // javax