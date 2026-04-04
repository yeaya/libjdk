#include <com/sun/tools/javac/api/JavacTaskPool$ReusableContext$ReusableLog.h>
#include <com/sun/tools/javac/api/JavacTaskPool$ReusableContext$ReusableLog$1.h>
#include <com/sun/tools/javac/api/JavacTaskPool$ReusableContext.h>
#include <com/sun/tools/javac/util/AbstractLog.h>
#include <com/sun/tools/javac/util/Context$Factory.h>
#include <com/sun/tools/javac/util/Context.h>
#include <com/sun/tools/javac/util/Log.h>
#include <java/io/Serializable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/Map.h>
#include <java/util/Set.h>
#include <jcpp.h>

using $JavacTaskPool$ReusableContext$ReusableLog$1 = ::com::sun::tools::javac::api::JavacTaskPool$ReusableContext$ReusableLog$1;
using $Context = ::com::sun::tools::javac::util::Context;
using $Context$Factory = ::com::sun::tools::javac::util::Context$Factory;
using $Log = ::com::sun::tools::javac::util::Log;
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

class JavacTaskPool$ReusableContext$ReusableLog$$Lambda$ReusableLog : public $Context$Factory {
	$class(JavacTaskPool$ReusableContext$ReusableLog$$Lambda$ReusableLog, $NO_CLASS_INIT, $Context$Factory)
public:
	void init$() {
	}
	virtual $Object* make($Context* context) override {
		 return $new(JavacTaskPool$ReusableContext$ReusableLog, context);
	}
};
$Class* JavacTaskPool$ReusableContext$ReusableLog$$Lambda$ReusableLog::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(JavacTaskPool$ReusableContext$ReusableLog$$Lambda$ReusableLog, init$, void)},
		{"make", "(Lcom/sun/tools/javac/util/Context;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(JavacTaskPool$ReusableContext$ReusableLog$$Lambda$ReusableLog, make, $Object*, $Context*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"com.sun.tools.javac.api.JavacTaskPool$ReusableContext$ReusableLog$$Lambda$ReusableLog",
		"java.lang.Object",
		"com.sun.tools.javac.util.Context$Factory",
		nullptr,
		methodInfos$$
	};
	$loadClass(JavacTaskPool$ReusableContext$ReusableLog$$Lambda$ReusableLog, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JavacTaskPool$ReusableContext$ReusableLog$$Lambda$ReusableLog);
	});
	return class$;
}
$Class* JavacTaskPool$ReusableContext$ReusableLog$$Lambda$ReusableLog::class$ = nullptr;

$Context$Factory* JavacTaskPool$ReusableContext$ReusableLog::factory = nullptr;

void JavacTaskPool$ReusableContext$ReusableLog::init$($Context* context) {
	$Log::init$(context);
	$set(this, context, context);
}

void JavacTaskPool$ReusableContext$ReusableLog::clear() {
	$nc(this->recorded)->clear();
	$nc(this->sourceMap)->clear();
	this->nerrors = 0;
	this->nwarnings = 0;
	$set(this, diagListener, $new($JavacTaskPool$ReusableContext$ReusableLog$1, this));
}

void JavacTaskPool$ReusableContext$ReusableLog::clinit$($Class* clazz) {
	$assignStatic(JavacTaskPool$ReusableContext$ReusableLog::factory, $new(JavacTaskPool$ReusableContext$ReusableLog$$Lambda$ReusableLog));
}

JavacTaskPool$ReusableContext$ReusableLog::JavacTaskPool$ReusableContext$ReusableLog() {
}

$Class* JavacTaskPool$ReusableContext$ReusableLog::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("com.sun.tools.javac.api.JavacTaskPool$ReusableContext$ReusableLog$$Lambda$ReusableLog")) {
			return JavacTaskPool$ReusableContext$ReusableLog$$Lambda$ReusableLog::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"factory", "Lcom/sun/tools/javac/util/Context$Factory;", "Lcom/sun/tools/javac/util/Context$Factory<Lcom/sun/tools/javac/util/Log;>;", $STATIC | $FINAL, $staticField(JavacTaskPool$ReusableContext$ReusableLog, factory)},
		{"context", "Lcom/sun/tools/javac/util/Context;", nullptr, 0, $field(JavacTaskPool$ReusableContext$ReusableLog, context)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/tools/javac/util/Context;)V", nullptr, 0, $method(JavacTaskPool$ReusableContext$ReusableLog, init$, void, $Context*)},
		{"clear", "()V", nullptr, 0, $virtualMethod(JavacTaskPool$ReusableContext$ReusableLog, clear, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.api.JavacTaskPool$ReusableContext", "com.sun.tools.javac.api.JavacTaskPool", "ReusableContext", $STATIC},
		{"com.sun.tools.javac.api.JavacTaskPool$ReusableContext$ReusableLog", "com.sun.tools.javac.api.JavacTaskPool$ReusableContext", "ReusableLog", $STATIC},
		{"com.sun.tools.javac.api.JavacTaskPool$ReusableContext$ReusableLog$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.tools.javac.api.JavacTaskPool$ReusableContext$ReusableLog",
		"com.sun.tools.javac.util.Log",
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
	$loadClass(JavacTaskPool$ReusableContext$ReusableLog, name, initialize, &classInfo$$, JavacTaskPool$ReusableContext$ReusableLog::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(JavacTaskPool$ReusableContext$ReusableLog);
	});
	return class$;
}

$Class* JavacTaskPool$ReusableContext$ReusableLog::class$ = nullptr;

				} // api
			} // javac
		} // tools
	} // sun
} // com