#include <com/sun/tools/javac/comp/MatchBindingsComputer$MatchBindings.h>
#include <com/sun/tools/javac/comp/MatchBindingsComputer.h>
#include <com/sun/tools/javac/util/List.h>
#include <jcpp.h>

using $List = ::com::sun::tools::javac::util::List;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

void MatchBindingsComputer$MatchBindings::init$($List* bindingsWhenTrue, $List* bindingsWhenFalse) {
	MatchBindingsComputer$MatchBindings::init$(bindingsWhenTrue, bindingsWhenFalse, false);
}

void MatchBindingsComputer$MatchBindings::init$($List* bindingsWhenTrue, $List* bindingsWhenFalse, bool nullPattern) {
	$set(this, bindingsWhenTrue, bindingsWhenTrue);
	$set(this, bindingsWhenFalse, bindingsWhenFalse);
	this->nullPattern = nullPattern;
}

MatchBindingsComputer$MatchBindings::MatchBindingsComputer$MatchBindings() {
}

$Class* MatchBindingsComputer$MatchBindings::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"bindingsWhenTrue", "Lcom/sun/tools/javac/util/List;", "Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Symbol$BindingSymbol;>;", $PUBLIC | $FINAL, $field(MatchBindingsComputer$MatchBindings, bindingsWhenTrue)},
		{"bindingsWhenFalse", "Lcom/sun/tools/javac/util/List;", "Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Symbol$BindingSymbol;>;", $PUBLIC | $FINAL, $field(MatchBindingsComputer$MatchBindings, bindingsWhenFalse)},
		{"nullPattern", "Z", nullptr, $PUBLIC | $FINAL, $field(MatchBindingsComputer$MatchBindings, nullPattern)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/util/List;)V", "(Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Symbol$BindingSymbol;>;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Symbol$BindingSymbol;>;)V", $PUBLIC, $method(MatchBindingsComputer$MatchBindings, init$, void, $List*, $List*)},
		{"<init>", "(Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/util/List;Z)V", "(Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Symbol$BindingSymbol;>;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Symbol$BindingSymbol;>;Z)V", $PUBLIC, $method(MatchBindingsComputer$MatchBindings, init$, void, $List*, $List*, bool)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.comp.MatchBindingsComputer$MatchBindings", "com.sun.tools.javac.comp.MatchBindingsComputer", "MatchBindings", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.tools.javac.comp.MatchBindingsComputer$MatchBindings",
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
		"com.sun.tools.javac.comp.MatchBindingsComputer"
	};
	$loadClass(MatchBindingsComputer$MatchBindings, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MatchBindingsComputer$MatchBindings);
	});
	return class$;
}

$Class* MatchBindingsComputer$MatchBindings::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com