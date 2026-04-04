#include <com/sun/tools/javac/api/JavacTaskPool$ReusableContext$ReusableLog$1.h>
#include <com/sun/tools/javac/api/JavacTaskPool$ReusableContext$ReusableLog.h>
#include <com/sun/tools/javac/util/Context.h>
#include <javax/tools/Diagnostic.h>
#include <javax/tools/DiagnosticListener.h>
#include <jcpp.h>

using $JavacTaskPool$ReusableContext$ReusableLog = ::com::sun::tools::javac::api::JavacTaskPool$ReusableContext$ReusableLog;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Diagnostic = ::javax::tools::Diagnostic;
using $DiagnosticListener = ::javax::tools::DiagnosticListener;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace api {

void JavacTaskPool$ReusableContext$ReusableLog$1::init$($JavacTaskPool$ReusableContext$ReusableLog* this$0) {
	$set(this, this$0, this$0);
}

void JavacTaskPool$ReusableContext$ReusableLog$1::report($Diagnostic* diagnostic) {
	if (this->cachedListener == nullptr) {
		$load($DiagnosticListener);
		$set(this, cachedListener, $cast($DiagnosticListener, $nc(this->this$0->context)->get($DiagnosticListener::class$)));
	}
	$nc(this->cachedListener)->report(diagnostic);
}

JavacTaskPool$ReusableContext$ReusableLog$1::JavacTaskPool$ReusableContext$ReusableLog$1() {
}

$Class* JavacTaskPool$ReusableContext$ReusableLog$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/tools/javac/api/JavacTaskPool$ReusableContext$ReusableLog;", nullptr, $FINAL | $SYNTHETIC, $field(JavacTaskPool$ReusableContext$ReusableLog$1, this$0)},
		{"cachedListener", "Ljavax/tools/DiagnosticListener;", "Ljavax/tools/DiagnosticListener<Ljavax/tools/JavaFileObject;>;", 0, $field(JavacTaskPool$ReusableContext$ReusableLog$1, cachedListener)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/tools/javac/api/JavacTaskPool$ReusableContext$ReusableLog;)V", nullptr, 0, $method(JavacTaskPool$ReusableContext$ReusableLog$1, init$, void, $JavacTaskPool$ReusableContext$ReusableLog*)},
		{"report", "(Ljavax/tools/Diagnostic;)V", "(Ljavax/tools/Diagnostic<+Ljavax/tools/JavaFileObject;>;)V", $PUBLIC, $virtualMethod(JavacTaskPool$ReusableContext$ReusableLog$1, report, void, $Diagnostic*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.sun.tools.javac.api.JavacTaskPool$ReusableContext$ReusableLog",
		"clear",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.api.JavacTaskPool$ReusableContext", "com.sun.tools.javac.api.JavacTaskPool", "ReusableContext", $STATIC},
		{"com.sun.tools.javac.api.JavacTaskPool$ReusableContext$ReusableLog", "com.sun.tools.javac.api.JavacTaskPool$ReusableContext", "ReusableLog", $STATIC},
		{"com.sun.tools.javac.api.JavacTaskPool$ReusableContext$ReusableLog$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.tools.javac.api.JavacTaskPool$ReusableContext$ReusableLog$1",
		"java.lang.Object",
		"javax.tools.DiagnosticListener",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljavax/tools/DiagnosticListener<Ljavax/tools/JavaFileObject;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.tools.javac.api.JavacTaskPool"
	};
	$loadClass(JavacTaskPool$ReusableContext$ReusableLog$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JavacTaskPool$ReusableContext$ReusableLog$1);
	});
	return class$;
}

$Class* JavacTaskPool$ReusableContext$ReusableLog$1::class$ = nullptr;

				} // api
			} // javac
		} // tools
	} // sun
} // com