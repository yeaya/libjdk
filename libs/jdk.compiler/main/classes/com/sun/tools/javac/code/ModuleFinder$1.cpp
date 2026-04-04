#include <com/sun/tools/javac/code/ModuleFinder$1.h>
#include <com/sun/tools/javac/code/ClassFinder.h>
#include <com/sun/tools/javac/code/ModuleFinder.h>
#include <com/sun/tools/javac/code/Symbol$ClassSymbol.h>
#include <com/sun/tools/javac/code/Symbol$ModuleSymbol.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <jcpp.h>

using $ModuleFinder = ::com::sun::tools::javac::code::ModuleFinder;
using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Symbol$ModuleSymbol = ::com::sun::tools::javac::code::Symbol$ModuleSymbol;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

void ModuleFinder$1::init$($ModuleFinder* this$0, $Symbol$ModuleSymbol* val$msym) {
	$set(this, this$0, this$0);
	$set(this, val$msym, val$msym);
}

void ModuleFinder$1::complete($Symbol* sym) {
	$nc(this->this$0->classFinder)->fillIn($nc(this->val$msym)->module_info);
}

$String* ModuleFinder$1::toString() {
	return "ModuleInfoCompleter"_s;
}

ModuleFinder$1::ModuleFinder$1() {
}

$Class* ModuleFinder$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/tools/javac/code/ModuleFinder;", nullptr, $FINAL | $SYNTHETIC, $field(ModuleFinder$1, this$0)},
		{"val$msym", "Lcom/sun/tools/javac/code/Symbol$ModuleSymbol;", nullptr, $FINAL | $SYNTHETIC, $field(ModuleFinder$1, val$msym)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/tools/javac/code/ModuleFinder;Lcom/sun/tools/javac/code/Symbol$ModuleSymbol;)V", "()V", 0, $method(ModuleFinder$1, init$, void, $ModuleFinder*, $Symbol$ModuleSymbol*)},
		{"complete", "(Lcom/sun/tools/javac/code/Symbol;)V", nullptr, $PUBLIC, $virtualMethod(ModuleFinder$1, complete, void, $Symbol*), "com.sun.tools.javac.code.Symbol$CompletionFailure"},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(ModuleFinder$1, toString, $String*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.sun.tools.javac.code.ModuleFinder",
		"findModuleInfo",
		"(Lcom/sun/tools/javac/code/Symbol$ModuleSymbol;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.code.ModuleFinder$1", nullptr, nullptr, 0},
		{"com.sun.tools.javac.code.Symbol$Completer", "com.sun.tools.javac.code.Symbol", "Completer", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{"com.sun.tools.javac.code.Symbol$ModuleSymbol", "com.sun.tools.javac.code.Symbol", "ModuleSymbol", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.tools.javac.code.ModuleFinder$1",
		"java.lang.Object",
		"com.sun.tools.javac.code.Symbol$Completer",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.tools.javac.code.ModuleFinder"
	};
	$loadClass(ModuleFinder$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ModuleFinder$1);
	});
	return class$;
}

$Class* ModuleFinder$1::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com