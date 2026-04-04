#include <com/sun/tools/javac/comp/Modules$3.h>
#include <com/sun/tools/javac/code/Symbol$ModuleSymbol.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/code/Symtab.h>
#include <com/sun/tools/javac/comp/Modules.h>
#include <java/util/HashSet.h>
#include <java/util/Iterator.h>
#include <java/util/Set.h>
#include <jcpp.h>

using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Symbol$ModuleSymbol = ::com::sun::tools::javac::code::Symbol$ModuleSymbol;
using $Modules = ::com::sun::tools::javac::comp::Modules;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $HashSet = ::java::util::HashSet;
using $Iterator = ::java::util::Iterator;
using $Set = ::java::util::Set;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

void Modules$3::init$($Modules* this$0) {
	$set(this, this$0, this$0);
}

void Modules$3::complete($Symbol* sym) {
	$useLocalObjectStack();
	if (this->this$0->inInitModules) {
		$set($nc(sym), completer, this);
		return;
	}
	$var($Symbol$ModuleSymbol, msym, $cast($Symbol$ModuleSymbol, sym));
	$var($Set, allModules, $new($HashSet, $(this->this$0->allModules())));
	allModules->remove($nc(this->this$0->syms)->unnamedModule);
	{
		$var($Iterator, i$, allModules->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Symbol$ModuleSymbol, m, $cast($Symbol$ModuleSymbol, i$->next()));
			{
				$nc(m)->complete();
			}
		}
	}
	this->this$0->initVisiblePackages(msym, allModules);
}

$String* Modules$3::toString() {
	return "unnamedModule Completer"_s;
}

Modules$3::Modules$3() {
}

$Class* Modules$3::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/tools/javac/comp/Modules;", nullptr, $FINAL | $SYNTHETIC, $field(Modules$3, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/tools/javac/comp/Modules;)V", nullptr, 0, $method(Modules$3, init$, void, $Modules*)},
		{"complete", "(Lcom/sun/tools/javac/code/Symbol;)V", nullptr, $PUBLIC, $virtualMethod(Modules$3, complete, void, $Symbol*), "com.sun.tools.javac.code.Symbol$CompletionFailure"},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(Modules$3, toString, $String*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.sun.tools.javac.comp.Modules",
		"getUnnamedModuleCompleter",
		"()Lcom/sun/tools/javac/code/Symbol$Completer;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.comp.Modules$3", nullptr, nullptr, 0},
		{"com.sun.tools.javac.code.Symbol$Completer", "com.sun.tools.javac.code.Symbol", "Completer", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.tools.javac.comp.Modules$3",
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
	$loadClass(Modules$3, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Modules$3);
	});
	return class$;
}

$Class* Modules$3::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com