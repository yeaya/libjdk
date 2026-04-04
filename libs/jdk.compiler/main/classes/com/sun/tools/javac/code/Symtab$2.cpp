#include <com/sun/tools/javac/code/Symtab$2.h>
#include <com/sun/tools/javac/code/Scope$WriteableScope.h>
#include <com/sun/tools/javac/code/Symbol$ClassSymbol.h>
#include <com/sun/tools/javac/code/Symbol$Completer.h>
#include <com/sun/tools/javac/code/Symbol$CompletionFailure.h>
#include <com/sun/tools/javac/code/Symbol$MethodSymbol.h>
#include <com/sun/tools/javac/code/Symbol$TypeSymbol.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/code/Symtab.h>
#include <com/sun/tools/javac/code/Type$ClassType.h>
#include <com/sun/tools/javac/code/Type$MethodType.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/util/List.h>
#include <com/sun/tools/javac/util/Name.h>
#include <com/sun/tools/javac/util/Names.h>
#include <jcpp.h>

using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Symbol$Completer = ::com::sun::tools::javac::code::Symbol$Completer;
using $Symbol$CompletionFailure = ::com::sun::tools::javac::code::Symbol$CompletionFailure;
using $Symbol$MethodSymbol = ::com::sun::tools::javac::code::Symbol$MethodSymbol;
using $Symtab = ::com::sun::tools::javac::code::Symtab;
using $Type = ::com::sun::tools::javac::code::Type;
using $Type$ClassType = ::com::sun::tools::javac::code::Type$ClassType;
using $Type$MethodType = ::com::sun::tools::javac::code::Type$MethodType;
using $List = ::com::sun::tools::javac::util::List;
using $Name = ::com::sun::tools::javac::util::Name;
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

void Symtab$2::init$($Symtab* this$0, $Symbol$Completer* val$completer, $Type* val$type) {
	$set(this, this$0, this$0);
	$set(this, val$completer, val$completer);
	$set(this, val$type, val$type);
}

void Symtab$2::complete($Symbol* sym) {
	$useLocalObjectStack();
	try {
		$nc(this->val$completer)->complete(sym);
	} catch ($Symbol$CompletionFailure& e) {
		$nc(sym)->flags_field |= 1;
		$set($nc($cast($Type$ClassType, sym->type)), supertype_field, this->this$0->objectType);
		$var($List, var$0, $List::of(this->val$type));
		$var($Type, var$1, sym->type);
		$var($Symbol$MethodSymbol, boxMethod, $new($Symbol$MethodSymbol, 1 | 8, $nc(this->this$0->names)->valueOf, $$new($Type$MethodType, var$0, var$1, $($List::nil()), this->this$0->methodClass), sym));
		$$nc(sym->members())->enter(boxMethod);
		$var($Name, var$2, $nc($nc($nc(this->val$type)->tsym)->name)->append($nc(this->this$0->names)->Value));
		$var($List, var$3, $List::nil());
		$var($Type, var$4, this->val$type);
		$var($Symbol$MethodSymbol, unboxMethod, $new($Symbol$MethodSymbol, 1, var$2, $$new($Type$MethodType, var$3, var$4, $($List::nil()), this->this$0->methodClass), sym));
		$$nc(sym->members())->enter(unboxMethod);
	}
}

bool Symtab$2::isTerminal() {
	return $nc(this->val$completer)->isTerminal();
}

Symtab$2::Symtab$2() {
}

$Class* Symtab$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/tools/javac/code/Symtab;", nullptr, $FINAL | $SYNTHETIC, $field(Symtab$2, this$0)},
		{"val$type", "Lcom/sun/tools/javac/code/Type;", nullptr, $FINAL | $SYNTHETIC, $field(Symtab$2, val$type)},
		{"val$completer", "Lcom/sun/tools/javac/code/Symbol$Completer;", nullptr, $FINAL | $SYNTHETIC, $field(Symtab$2, val$completer)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/tools/javac/code/Symtab;Lcom/sun/tools/javac/code/Symbol$Completer;Lcom/sun/tools/javac/code/Type;)V", "()V", 0, $method(Symtab$2, init$, void, $Symtab*, $Symbol$Completer*, $Type*)},
		{"complete", "(Lcom/sun/tools/javac/code/Symbol;)V", nullptr, $PUBLIC, $virtualMethod(Symtab$2, complete, void, $Symbol*), "com.sun.tools.javac.code.Symbol$CompletionFailure"},
		{"isTerminal", "()Z", nullptr, $PUBLIC, $virtualMethod(Symtab$2, isTerminal, bool)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.sun.tools.javac.code.Symtab",
		"synthesizeBoxTypeIfMissing",
		"(Lcom/sun/tools/javac/code/Type;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.code.Symtab$2", nullptr, nullptr, 0},
		{"com.sun.tools.javac.code.Symbol$Completer", "com.sun.tools.javac.code.Symbol", "Completer", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.tools.javac.code.Symtab$2",
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
		"com.sun.tools.javac.code.Symtab"
	};
	$loadClass(Symtab$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Symtab$2);
	});
	return class$;
}

$Class* Symtab$2::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com