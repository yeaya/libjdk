#include <sun/awt/datatransfer/ClassLoaderObjectOutputStream$1.h>
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

void ClassLoaderObjectOutputStream$1::init$($ClassLoaderObjectOutputStream* this$0, $Class* val$cl) {
	$set(this, this$0, this$0);
	$set(this, val$cl, val$cl);
}

$Object* ClassLoaderObjectOutputStream$1::run() {
	$beforeCallerSensitive();
	return $nc(this->val$cl)->getClassLoader();
}

ClassLoaderObjectOutputStream$1::ClassLoaderObjectOutputStream$1() {
}

$Class* ClassLoaderObjectOutputStream$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/awt/datatransfer/ClassLoaderObjectOutputStream;", nullptr, $FINAL | $SYNTHETIC, $field(ClassLoaderObjectOutputStream$1, this$0)},
		{"val$cl", "Ljava/lang/Class;", nullptr, $FINAL | $SYNTHETIC, $field(ClassLoaderObjectOutputStream$1, val$cl)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/awt/datatransfer/ClassLoaderObjectOutputStream;Ljava/lang/Class;)V", "()V", 0, $method(ClassLoaderObjectOutputStream$1, init$, void, $ClassLoaderObjectOutputStream*, $Class*)},
		{"run", "()Ljava/lang/ClassLoader;", nullptr, $PUBLIC, $virtualMethod(ClassLoaderObjectOutputStream$1, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.awt.datatransfer.ClassLoaderObjectOutputStream",
		"annotateClass",
		"(Ljava/lang/Class;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.awt.datatransfer.ClassLoaderObjectOutputStream$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.awt.datatransfer.ClassLoaderObjectOutputStream$1",
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
	$loadClass(ClassLoaderObjectOutputStream$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ClassLoaderObjectOutputStream$1);
	});
	return class$;
}

$Class* ClassLoaderObjectOutputStream$1::class$ = nullptr;

		} // datatransfer
	} // awt
} // sun