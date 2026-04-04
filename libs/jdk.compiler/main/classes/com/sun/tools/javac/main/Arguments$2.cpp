#include <com/sun/tools/javac/main/Arguments$2.h>
#include <com/sun/tools/javac/main/Arguments.h>
#include <com/sun/tools/javac/main/Option.h>
#include <com/sun/tools/javac/main/OptionHelper$GrumpyHelper.h>
#include <com/sun/tools/javac/main/OptionHelper.h>
#include <com/sun/tools/javac/util/Log.h>
#include <com/sun/tools/javac/util/Options.h>
#include <jcpp.h>

using $Arguments = ::com::sun::tools::javac::main::Arguments;
using $Option = ::com::sun::tools::javac::main::Option;
using $OptionHelper$GrumpyHelper = ::com::sun::tools::javac::main::OptionHelper$GrumpyHelper;
using $Log = ::com::sun::tools::javac::util::Log;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace main {

void Arguments$2::init$($Arguments* this$0, $Log* log) {
	$set(this, this$0, this$0);
	$OptionHelper$GrumpyHelper::init$(log);
}

$String* Arguments$2::get($Option* option) {
	return $nc(this->this$0->options)->get(option);
}

void Arguments$2::put($String* name, $String* value) {
	$nc(this->this$0->options)->put(name, value);
}

void Arguments$2::remove($String* name) {
	$nc(this->this$0->options)->remove(name);
}

$Log* Arguments$2::getLog() {
	return this->this$0->log;
}

Arguments$2::Arguments$2() {
}

$Class* Arguments$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/tools/javac/main/Arguments;", nullptr, $FINAL | $SYNTHETIC, $field(Arguments$2, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/tools/javac/main/Arguments;Lcom/sun/tools/javac/util/Log;)V", nullptr, 0, $method(Arguments$2, init$, void, $Arguments*, $Log*)},
		{"get", "(Lcom/sun/tools/javac/main/Option;)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(Arguments$2, get, $String*, $Option*)},
		{"getLog", "()Lcom/sun/tools/javac/util/Log;", nullptr, $PUBLIC, $virtualMethod(Arguments$2, getLog, $Log*)},
		{"put", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(Arguments$2, put, void, $String*, $String*)},
		{"remove", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(Arguments$2, remove, void, $String*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.sun.tools.javac.main.Arguments",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.main.Arguments$2", nullptr, nullptr, 0},
		{"com.sun.tools.javac.main.OptionHelper$GrumpyHelper", "com.sun.tools.javac.main.OptionHelper", "GrumpyHelper", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.tools.javac.main.Arguments$2",
		"com.sun.tools.javac.main.OptionHelper$GrumpyHelper",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.tools.javac.main.Arguments"
	};
	$loadClass(Arguments$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Arguments$2);
	});
	return class$;
}

$Class* Arguments$2::class$ = nullptr;

				} // main
			} // javac
		} // tools
	} // sun
} // com