#include <sun/awt/datatransfer/ClassLoaderObjectOutputStream$2.h>
#include <java/lang/ClassLoader.h>
#include <sun/awt/datatransfer/ClassLoaderObjectOutputStream.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ClassLoaderObjectOutputStream = ::sun::awt::datatransfer::ClassLoaderObjectOutputStream;

namespace sun {
	namespace awt {
		namespace datatransfer {

void ClassLoaderObjectOutputStream$2::init$($ClassLoaderObjectOutputStream* this$0, $Class* val$cl) {
	$set(this, this$0, this$0);
	$set(this, val$cl, val$cl);
}

$Object* ClassLoaderObjectOutputStream$2::run() {
	$beforeCallerSensitive();
	return $nc(this->val$cl)->getClassLoader();
}

ClassLoaderObjectOutputStream$2::ClassLoaderObjectOutputStream$2() {
}

$Class* ClassLoaderObjectOutputStream$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/awt/datatransfer/ClassLoaderObjectOutputStream;", nullptr, $FINAL | $SYNTHETIC, $field(ClassLoaderObjectOutputStream$2, this$0)},
		{"val$cl", "Ljava/lang/Class;", nullptr, $FINAL | $SYNTHETIC, $field(ClassLoaderObjectOutputStream$2, val$cl)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/awt/datatransfer/ClassLoaderObjectOutputStream;Ljava/lang/Class;)V", "()V", 0, $method(ClassLoaderObjectOutputStream$2, init$, void, $ClassLoaderObjectOutputStream*, $Class*)},
		{"run", "()Ljava/lang/ClassLoader;", nullptr, $PUBLIC, $virtualMethod(ClassLoaderObjectOutputStream$2, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.awt.datatransfer.ClassLoaderObjectOutputStream",
		"annotateProxyClass",
		"(Ljava/lang/Class;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.awt.datatransfer.ClassLoaderObjectOutputStream$2", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.awt.datatransfer.ClassLoaderObjectOutputStream$2",
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
		"sun.awt.datatransfer.ClassLoaderObjectOutputStream"
	};
	$loadClass(ClassLoaderObjectOutputStream$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ClassLoaderObjectOutputStream$2);
	});
	return class$;
}

$Class* ClassLoaderObjectOutputStream$2::class$ = nullptr;

		} // datatransfer
	} // awt
} // sun