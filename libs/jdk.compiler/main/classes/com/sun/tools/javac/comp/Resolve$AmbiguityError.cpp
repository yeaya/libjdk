#include <com/sun/tools/javac/comp/Resolve$AmbiguityError.h>
#include <com/sun/tools/javac/code/Kinds$Kind.h>
#include <com/sun/tools/javac/code/Kinds$KindName.h>
#include <com/sun/tools/javac/code/Kinds.h>
#include <com/sun/tools/javac/code/Symbol$TypeSymbol.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/Types.h>
#include <com/sun/tools/javac/comp/Resolve$ResolveError.h>
#include <com/sun/tools/javac/comp/Resolve.h>
#include <com/sun/tools/javac/util/AbstractLog.h>
#include <com/sun/tools/javac/util/DiagnosticSource.h>
#include <com/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition.h>
#include <com/sun/tools/javac/util/JCDiagnostic$DiagnosticType.h>
#include <com/sun/tools/javac/util/JCDiagnostic$Factory.h>
#include <com/sun/tools/javac/util/JCDiagnostic.h>
#include <com/sun/tools/javac/util/List.h>
#include <com/sun/tools/javac/util/Log.h>
#include <com/sun/tools/javac/util/Name.h>
#include <com/sun/tools/javac/util/Names.h>
#include <java/util/Optional.h>
#include <jcpp.h>

#undef AMBIGUOUS
#undef TYP

using $Kinds = ::com::sun::tools::javac::code::Kinds;
using $Kinds$Kind = ::com::sun::tools::javac::code::Kinds$Kind;
using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Symbol$TypeSymbol = ::com::sun::tools::javac::code::Symbol$TypeSymbol;
using $Type = ::com::sun::tools::javac::code::Type;
using $Resolve = ::com::sun::tools::javac::comp::Resolve;
using $Resolve$ResolveError = ::com::sun::tools::javac::comp::Resolve$ResolveError;
using $DiagnosticSource = ::com::sun::tools::javac::util::DiagnosticSource;
using $JCDiagnostic = ::com::sun::tools::javac::util::JCDiagnostic;
using $JCDiagnostic$DiagnosticPosition = ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition;
using $JCDiagnostic$DiagnosticType = ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticType;
using $List = ::com::sun::tools::javac::util::List;
using $Name = ::com::sun::tools::javac::util::Name;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

bool Resolve$AmbiguityError::exists() {
	return true;
}

void Resolve$AmbiguityError::init$($Resolve* this$0, $Symbol* sym1, $Symbol* sym2) {
	$useLocalObjectStack();
	$set(this, this$0, this$0);
	$init($Kinds$Kind);
	$Resolve$ResolveError::init$(this$0, $Kinds$Kind::AMBIGUOUS, "ambiguity error"_s);
	$set(this, ambiguousSyms, $List::nil());
	$set(this, ambiguousSyms, $$nc(flatten(sym2))->appendList($(flatten(sym1))));
}

$List* Resolve$AmbiguityError::flatten($Symbol* sym) {
	$init($Kinds$Kind);
	if ($nc(sym)->kind == $Kinds$Kind::AMBIGUOUS) {
		return $nc($$cast(Resolve$AmbiguityError, sym->baseSymbol()))->ambiguousSyms;
	} else {
		return $List::of(sym);
	}
}

Resolve$AmbiguityError* Resolve$AmbiguityError::addAmbiguousSymbol($Symbol* s) {
	$set(this, ambiguousSyms, $nc(this->ambiguousSyms)->prepend(s));
	return this;
}

$JCDiagnostic* Resolve$AmbiguityError::getDiagnostic($JCDiagnostic$DiagnosticType* dkind, $JCDiagnostic$DiagnosticPosition* pos, $Symbol* location, $Type* site, $Name* name, $List* argtypes, $List* typeargtypes) {
	$useLocalObjectStack();
	$var($List, diagSyms, $nc(this->ambiguousSyms)->reverse());
	$var($Symbol, s1, $cast($Symbol, $nc(diagSyms)->head));
	$var($Symbol, s2, $cast($Symbol, $nc(diagSyms->tail)->head));
	$var($Name, sname, $nc(s1)->name);
	if (sname == $nc(this->this$0->names)->init) {
		$assign(sname, $nc(s1->owner)->name);
	}
	$var($DiagnosticSource, var$0, $nc(this->this$0->log)->currentSource());
	$var($String, var$1, "ref.ambiguous"_s);
	return $nc(this->this$0->diags)->create(dkind, var$0, pos, var$1, $$new($ObjectArray, {
		sname,
		$($Kinds::kindName(s1)),
		s1,
		$(s1->location(site, this->this$0->types)),
		$($Kinds::kindName(s2)),
		s2,
		$($nc(s2)->location(site, this->this$0->types))
	}));
}

$Symbol* Resolve$AmbiguityError::mergeAbstracts($Type* site) {
	$useLocalObjectStack();
	$var($List, ambiguousInOrder, $nc(this->ambiguousSyms)->reverse());
	return $cast($Symbol, $$nc($nc(this->this$0->types)->mergeAbstracts(ambiguousInOrder, site, true))->orElse(this));
}

$Symbol* Resolve$AmbiguityError::access($Name* name, $Symbol$TypeSymbol* location) {
	$useLocalObjectStack();
	$var($Symbol, firstAmbiguity, $cast($Symbol, $nc(this->ambiguousSyms)->last()));
	$init($Kinds$Kind);
	return $nc(firstAmbiguity)->kind == $Kinds$Kind::TYP ? $cast($Symbol, $nc($($nc(this->this$0->types)->createErrorType(name, location, firstAmbiguity->type)))->tsym) : firstAmbiguity;
}

Resolve$AmbiguityError::Resolve$AmbiguityError() {
}

$Class* Resolve$AmbiguityError::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/tools/javac/comp/Resolve;", nullptr, $FINAL | $SYNTHETIC, $field(Resolve$AmbiguityError, this$0)},
		{"ambiguousSyms", "Lcom/sun/tools/javac/util/List;", "Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Symbol;>;", 0, $field(Resolve$AmbiguityError, ambiguousSyms)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/tools/javac/comp/Resolve;Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/code/Symbol;)V", nullptr, 0, $method(Resolve$AmbiguityError, init$, void, $Resolve*, $Symbol*, $Symbol*)},
		{"access", "(Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/code/Symbol$TypeSymbol;)Lcom/sun/tools/javac/code/Symbol;", nullptr, $PROTECTED, $virtualMethod(Resolve$AmbiguityError, access, $Symbol*, $Name*, $Symbol$TypeSymbol*)},
		{"addAmbiguousSymbol", "(Lcom/sun/tools/javac/code/Symbol;)Lcom/sun/tools/javac/comp/Resolve$AmbiguityError;", nullptr, 0, $virtualMethod(Resolve$AmbiguityError, addAmbiguousSymbol, Resolve$AmbiguityError*, $Symbol*)},
		{"exists", "()Z", nullptr, $PUBLIC, $virtualMethod(Resolve$AmbiguityError, exists, bool)},
		{"flatten", "(Lcom/sun/tools/javac/code/Symbol;)Lcom/sun/tools/javac/util/List;", "(Lcom/sun/tools/javac/code/Symbol;)Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Symbol;>;", $PRIVATE, $method(Resolve$AmbiguityError, flatten, $List*, $Symbol*)},
		{"getDiagnostic", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticType;Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/util/List;)Lcom/sun/tools/javac/util/JCDiagnostic;", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticType;Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;)Lcom/sun/tools/javac/util/JCDiagnostic;", 0, $virtualMethod(Resolve$AmbiguityError, getDiagnostic, $JCDiagnostic*, $JCDiagnostic$DiagnosticType*, $JCDiagnostic$DiagnosticPosition*, $Symbol*, $Type*, $Name*, $List*, $List*)},
		{"mergeAbstracts", "(Lcom/sun/tools/javac/code/Type;)Lcom/sun/tools/javac/code/Symbol;", nullptr, 0, $virtualMethod(Resolve$AmbiguityError, mergeAbstracts, $Symbol*, $Type*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.comp.Resolve$AmbiguityError", "com.sun.tools.javac.comp.Resolve", "AmbiguityError", 0},
		{"com.sun.tools.javac.comp.Resolve$ResolveError", "com.sun.tools.javac.comp.Resolve", "ResolveError", $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.tools.javac.comp.Resolve$AmbiguityError",
		"com.sun.tools.javac.comp.Resolve$ResolveError",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.tools.javac.comp.Resolve"
	};
	$loadClass(Resolve$AmbiguityError, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(Resolve$AmbiguityError));
	});
	return class$;
}

$Class* Resolve$AmbiguityError::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com