#include <com/sun/tools/javac/comp/Modules$1.h>
#include <com/sun/tools/javac/code/Flags.h>
#include <com/sun/tools/javac/code/Kinds$Kind.h>
#include <com/sun/tools/javac/code/ModuleFinder.h>
#include <com/sun/tools/javac/code/Symbol$ClassSymbol.h>
#include <com/sun/tools/javac/code/Symbol$CompletionFailure.h>
#include <com/sun/tools/javac/code/Symbol$ModuleSymbol.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/comp/Modules.h>
#include <com/sun/tools/javac/util/List.h>
#include <javax/tools/JavaFileObject$Kind.h>
#include <javax/tools/JavaFileObject.h>
#include <jcpp.h>

#undef AUTOMATIC_MODULE
#undef CLASS
#undef ERR

using $Flags = ::com::sun::tools::javac::code::Flags;
using $Kinds$Kind = ::com::sun::tools::javac::code::Kinds$Kind;
using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Symbol$CompletionFailure = ::com::sun::tools::javac::code::Symbol$CompletionFailure;
using $Symbol$ModuleSymbol = ::com::sun::tools::javac::code::Symbol$ModuleSymbol;
using $Modules = ::com::sun::tools::javac::comp::Modules;
using $List = ::com::sun::tools::javac::util::List;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JavaFileObject$Kind = ::javax::tools::JavaFileObject$Kind;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

void Modules$1::init$($Modules* this$0) {
	$set(this, this$0, this$0);
}

void Modules$1::complete($Symbol* sym) {
	$var($Symbol$ModuleSymbol, msym, $nc(this->this$0->moduleFinder)->findModule($cast($Symbol$ModuleSymbol, sym)));
	$init($Kinds$Kind);
	if ($nc(msym)->kind == $Kinds$Kind::ERR) {
		initErrModule(msym);
	} else if ((msym->flags_field & $Flags::AUTOMATIC_MODULE) != 0) {
		this->this$0->setupAutomaticModule(msym);
	} else {
		try {
			$nc(msym->module_info)->complete();
		} catch ($Symbol$CompletionFailure& cf) {
			$set(msym, kind, $Kinds$Kind::ERR);
			initErrModule(msym);
			this->this$0->completeModule(msym);
			$throw(cf);
		}
	}
	$init($JavaFileObject$Kind);
	if ($nc(msym->module_info)->classfile == nullptr || msym->module_info->classfile->getKind() == $JavaFileObject$Kind::CLASS) {
		this->this$0->completeModule(msym);
	}
}

void Modules$1::initErrModule($Symbol$ModuleSymbol* msym) {
	$set($nc(msym), directives, $List::nil());
	$set(msym, exports, $List::nil());
	$set(msym, provides, $List::nil());
	$set(msym, requires, $List::nil());
	$set(msym, uses, $List::nil());
}

$String* Modules$1::toString() {
	return "mainCompleter"_s;
}

Modules$1::Modules$1() {
}

$Class* Modules$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/tools/javac/comp/Modules;", nullptr, $FINAL | $SYNTHETIC, $field(Modules$1, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/tools/javac/comp/Modules;)V", nullptr, 0, $method(Modules$1, init$, void, $Modules*)},
		{"complete", "(Lcom/sun/tools/javac/code/Symbol;)V", nullptr, $PUBLIC, $virtualMethod(Modules$1, complete, void, $Symbol*), "com.sun.tools.javac.code.Symbol$CompletionFailure"},
		{"initErrModule", "(Lcom/sun/tools/javac/code/Symbol$ModuleSymbol;)V", nullptr, $PRIVATE, $method(Modules$1, initErrModule, void, $Symbol$ModuleSymbol*)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(Modules$1, toString, $String*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.sun.tools.javac.comp.Modules",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.comp.Modules$1", nullptr, nullptr, 0},
		{"com.sun.tools.javac.code.Symbol$Completer", "com.sun.tools.javac.code.Symbol", "Completer", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.tools.javac.comp.Modules$1",
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
		"com.sun.tools.javac.comp.Modules"
	};
	$loadClass(Modules$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Modules$1);
	});
	return class$;
}

$Class* Modules$1::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com