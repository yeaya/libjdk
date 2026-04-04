#include <com/sun/tools/javac/code/DeferredCompletionFailureHandler$FlipSymbolDescription.h>
#include <com/sun/tools/javac/code/DeferredCompletionFailureHandler.h>
#include <com/sun/tools/javac/code/Kinds$Kind.h>
#include <com/sun/tools/javac/code/Scope$WriteableScope.h>
#include <com/sun/tools/javac/code/Symbol$ClassSymbol.h>
#include <com/sun/tools/javac/code/Symbol$Completer.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/code/Type.h>
#include <jcpp.h>

using $Kinds$Kind = ::com::sun::tools::javac::code::Kinds$Kind;
using $Scope$WriteableScope = ::com::sun::tools::javac::code::Scope$WriteableScope;
using $Symbol$ClassSymbol = ::com::sun::tools::javac::code::Symbol$ClassSymbol;
using $Symbol$Completer = ::com::sun::tools::javac::code::Symbol$Completer;
using $Type = ::com::sun::tools::javac::code::Type;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

void DeferredCompletionFailureHandler$FlipSymbolDescription::init$($Symbol$ClassSymbol* sym, $Symbol$Completer* completer) {
	$set(this, sym, sym);
	$set(this, type, $nc(sym)->type);
	$set(this, kind, sym->kind);
	$set(this, members, nullptr);
	$set(this, completer, completer);
}

void DeferredCompletionFailureHandler$FlipSymbolDescription::flip() {
	$useLocalObjectStack();
	$var($Type, prevType, $nc(this->sym)->type);
	$set(this->sym, type, this->type);
	$set(this, type, prevType);
	$Kinds$Kind* prevKind = this->sym->kind;
	$set(this->sym, kind, this->kind);
	$set(this, kind, prevKind);
	$var($Symbol$Completer, prevCompleter, this->sym->completer);
	$set(this->sym, completer, this->completer);
	$set(this, completer, prevCompleter);
	$var($Scope$WriteableScope, prevMembers, this->sym->members_field);
	$set(this->sym, members_field, this->members);
	$set(this, members, prevMembers);
}

DeferredCompletionFailureHandler$FlipSymbolDescription::DeferredCompletionFailureHandler$FlipSymbolDescription() {
}

$Class* DeferredCompletionFailureHandler$FlipSymbolDescription::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"sym", "Lcom/sun/tools/javac/code/Symbol$ClassSymbol;", nullptr, $PUBLIC | $FINAL, $field(DeferredCompletionFailureHandler$FlipSymbolDescription, sym)},
		{"type", "Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC, $field(DeferredCompletionFailureHandler$FlipSymbolDescription, type)},
		{"kind", "Lcom/sun/tools/javac/code/Kinds$Kind;", nullptr, $PUBLIC, $field(DeferredCompletionFailureHandler$FlipSymbolDescription, kind)},
		{"members", "Lcom/sun/tools/javac/code/Scope$WriteableScope;", nullptr, $PUBLIC, $field(DeferredCompletionFailureHandler$FlipSymbolDescription, members)},
		{"completer", "Lcom/sun/tools/javac/code/Symbol$Completer;", nullptr, $PUBLIC, $field(DeferredCompletionFailureHandler$FlipSymbolDescription, completer)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/tools/javac/code/Symbol$ClassSymbol;Lcom/sun/tools/javac/code/Symbol$Completer;)V", nullptr, $PUBLIC, $method(DeferredCompletionFailureHandler$FlipSymbolDescription, init$, void, $Symbol$ClassSymbol*, $Symbol$Completer*)},
		{"flip", "()V", nullptr, $PUBLIC, $virtualMethod(DeferredCompletionFailureHandler$FlipSymbolDescription, flip, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.code.DeferredCompletionFailureHandler$FlipSymbolDescription", "com.sun.tools.javac.code.DeferredCompletionFailureHandler", "FlipSymbolDescription", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.tools.javac.code.DeferredCompletionFailureHandler$FlipSymbolDescription",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.tools.javac.code.DeferredCompletionFailureHandler"
	};
	$loadClass(DeferredCompletionFailureHandler$FlipSymbolDescription, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DeferredCompletionFailureHandler$FlipSymbolDescription);
	});
	return class$;
}

$Class* DeferredCompletionFailureHandler$FlipSymbolDescription::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com