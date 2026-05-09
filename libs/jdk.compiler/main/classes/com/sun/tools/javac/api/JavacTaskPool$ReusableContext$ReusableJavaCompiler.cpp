#include <com/sun/tools/javac/api/JavacTaskPool$ReusableContext$ReusableJavaCompiler.h>
#include <com/sun/tools/javac/api/JavacTaskPool$ReusableContext.h>
#include <com/sun/tools/javac/main/JavaCompiler.h>
#include <com/sun/tools/javac/util/Context$Factory.h>
#include <com/sun/tools/javac/util/Context.h>
#include <java/io/Serializable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <jcpp.h>

using $JavaCompiler = ::com::sun::tools::javac::main::JavaCompiler;
using $Context = ::com::sun::tools::javac::util::Context;
using $Context$Factory = ::com::sun::tools::javac::util::Context$Factory;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodHandle = ::java::lang::invoke::MethodHandle;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace api {

class JavacTaskPool$ReusableContext$ReusableJavaCompiler$$Lambda$ReusableJavaCompiler : public $Context$Factory {
	$class(JavacTaskPool$ReusableContext$ReusableJavaCompiler$$Lambda$ReusableJavaCompiler, $NO_CLASS_INIT, $Context$Factory)
public:
	void init$() {
	}
	virtual $Object* make($Context* context) override {
		return $new(JavacTaskPool$ReusableContext$ReusableJavaCompiler, context);
	}
};
$Class* JavacTaskPool$ReusableContext$ReusableJavaCompiler$$Lambda$ReusableJavaCompiler::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(JavacTaskPool$ReusableContext$ReusableJavaCompiler$$Lambda$ReusableJavaCompiler, init$, void)},
		{"make", "(Lcom/sun/tools/javac/util/Context;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(JavacTaskPool$ReusableContext$ReusableJavaCompiler$$Lambda$ReusableJavaCompiler, make, $Object*, $Context*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"com.sun.tools.javac.api.JavacTaskPool$ReusableContext$ReusableJavaCompiler$$Lambda$ReusableJavaCompiler",
		"java.lang.Object",
		"com.sun.tools.javac.util.Context$Factory",
		nullptr,
		methodInfos$$
	};
	$loadClass(JavacTaskPool$ReusableContext$ReusableJavaCompiler$$Lambda$ReusableJavaCompiler, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JavacTaskPool$ReusableContext$ReusableJavaCompiler$$Lambda$ReusableJavaCompiler);
	});
	return class$;
}
$Class* JavacTaskPool$ReusableContext$ReusableJavaCompiler$$Lambda$ReusableJavaCompiler::class$ = nullptr;

$Context$Factory* JavacTaskPool$ReusableContext$ReusableJavaCompiler::factory = nullptr;

void JavacTaskPool$ReusableContext$ReusableJavaCompiler::init$($Context* context) {
	$JavaCompiler::init$(context);
}

void JavacTaskPool$ReusableContext$ReusableJavaCompiler::close() {
}

void JavacTaskPool$ReusableContext$ReusableJavaCompiler::clear() {
	newRound();
}

void JavacTaskPool$ReusableContext$ReusableJavaCompiler::checkReusable() {
}

void JavacTaskPool$ReusableContext$ReusableJavaCompiler::clinit$($Class* clazz) {
	$assignStatic(JavacTaskPool$ReusableContext$ReusableJavaCompiler::factory, $new(JavacTaskPool$ReusableContext$ReusableJavaCompiler$$Lambda$ReusableJavaCompiler));
}

JavacTaskPool$ReusableContext$ReusableJavaCompiler::JavacTaskPool$ReusableContext$ReusableJavaCompiler() {
}

$Class* JavacTaskPool$ReusableContext$ReusableJavaCompiler::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("com.sun.tools.javac.api.JavacTaskPool$ReusableContext$ReusableJavaCompiler$$Lambda$ReusableJavaCompiler")) {
			return JavacTaskPool$ReusableContext$ReusableJavaCompiler$$Lambda$ReusableJavaCompiler::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"factory", "Lcom/sun/tools/javac/util/Context$Factory;", "Lcom/sun/tools/javac/util/Context$Factory<Lcom/sun/tools/javac/main/JavaCompiler;>;", $STATIC | $FINAL, $staticField(JavacTaskPool$ReusableContext$ReusableJavaCompiler, factory)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/tools/javac/util/Context;)V", nullptr, 0, $method(JavacTaskPool$ReusableContext$ReusableJavaCompiler, init$, void, $Context*)},
		{"checkReusable", "()V", nullptr, $PROTECTED, $virtualMethod(JavacTaskPool$ReusableContext$ReusableJavaCompiler, checkReusable, void)},
		{"clear", "()V", nullptr, 0, $virtualMethod(JavacTaskPool$ReusableContext$ReusableJavaCompiler, clear, void)},
		{"close", "()V", nullptr, $PUBLIC, $virtualMethod(JavacTaskPool$ReusableContext$ReusableJavaCompiler, close, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.api.JavacTaskPool$ReusableContext", "com.sun.tools.javac.api.JavacTaskPool", "ReusableContext", $STATIC},
		{"com.sun.tools.javac.api.JavacTaskPool$ReusableContext$ReusableJavaCompiler", "com.sun.tools.javac.api.JavacTaskPool$ReusableContext", "ReusableJavaCompiler", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.tools.javac.api.JavacTaskPool$ReusableContext$ReusableJavaCompiler",
		"com.sun.tools.javac.main.JavaCompiler",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.tools.javac.api.JavacTaskPool"
	};
	$loadClass(JavacTaskPool$ReusableContext$ReusableJavaCompiler, name, initialize, &classInfo$$, JavacTaskPool$ReusableContext$ReusableJavaCompiler::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(JavacTaskPool$ReusableContext$ReusableJavaCompiler);
	});
	return class$;
}

$Class* JavacTaskPool$ReusableContext$ReusableJavaCompiler::class$ = nullptr;

				} // api
			} // javac
		} // tools
	} // sun
} // com