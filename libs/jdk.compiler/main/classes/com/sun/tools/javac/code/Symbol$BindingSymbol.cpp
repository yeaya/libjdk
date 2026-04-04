#include <com/sun/tools/javac/code/Symbol$BindingSymbol.h>
#include <com/sun/tools/javac/code/Flags.h>
#include <com/sun/tools/javac/code/Symbol$VarSymbol.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/util/List.h>
#include <com/sun/tools/javac/util/Name.h>
#include <java/util/AbstractCollection.h>
#include <java/util/Collection.h>
#include <jcpp.h>

#undef HASINIT
#undef MATCH_BINDING
#undef MATCH_BINDING_TO_OUTER

using $Flags = ::com::sun::tools::javac::code::Flags;
using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Symbol$VarSymbol = ::com::sun::tools::javac::code::Symbol$VarSymbol;
using $Type = ::com::sun::tools::javac::code::Type;
using $List = ::com::sun::tools::javac::util::List;
using $Name = ::com::sun::tools::javac::util::Name;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractCollection = ::java::util::AbstractCollection;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

void Symbol$BindingSymbol::init$(int64_t flags, $Name* name, $Type* type, $Symbol* owner) {
	$Symbol$VarSymbol::init$((flags | $Flags::HASINIT) | $Flags::MATCH_BINDING, name, type, owner);
}

bool Symbol$BindingSymbol::isAliasFor(Symbol$BindingSymbol* b) {
	$useLocalObjectStack();
	return $$nc(aliases())->containsAll($$cast($AbstractCollection, $nc(b)->aliases()));
}

$List* Symbol$BindingSymbol::aliases() {
	return $List::of(this);
}

void Symbol$BindingSymbol::preserveBinding() {
	this->flags_field |= $Flags::MATCH_BINDING_TO_OUTER;
}

bool Symbol$BindingSymbol::isPreserved() {
	return (this->flags_field & $Flags::MATCH_BINDING_TO_OUTER) != 0;
}

Symbol$BindingSymbol::Symbol$BindingSymbol() {
}

$Class* Symbol$BindingSymbol::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(JLcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Symbol;)V", nullptr, $PUBLIC, $method(Symbol$BindingSymbol, init$, void, int64_t, $Name*, $Type*, $Symbol*)},
		{"aliases", "()Lcom/sun/tools/javac/util/List;", "()Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Symbol$BindingSymbol;>;", 0, $virtualMethod(Symbol$BindingSymbol, aliases, $List*)},
		{"isAliasFor", "(Lcom/sun/tools/javac/code/Symbol$BindingSymbol;)Z", nullptr, $PUBLIC, $virtualMethod(Symbol$BindingSymbol, isAliasFor, bool, Symbol$BindingSymbol*)},
		{"isPreserved", "()Z", nullptr, $PUBLIC, $virtualMethod(Symbol$BindingSymbol, isPreserved, bool)},
		{"preserveBinding", "()V", nullptr, $PUBLIC, $virtualMethod(Symbol$BindingSymbol, preserveBinding, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.code.Symbol$BindingSymbol", "com.sun.tools.javac.code.Symbol", "BindingSymbol", $PUBLIC | $STATIC},
		{"com.sun.tools.javac.code.Symbol$VarSymbol", "com.sun.tools.javac.code.Symbol", "VarSymbol", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.tools.javac.code.Symbol$BindingSymbol",
		"com.sun.tools.javac.code.Symbol$VarSymbol",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.tools.javac.code.Symbol"
	};
	$loadClass(Symbol$BindingSymbol, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(Symbol$BindingSymbol));
	});
	return class$;
}

$Class* Symbol$BindingSymbol::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com