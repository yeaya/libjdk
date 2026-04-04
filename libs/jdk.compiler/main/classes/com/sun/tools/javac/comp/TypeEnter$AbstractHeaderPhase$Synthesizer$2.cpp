#include <com/sun/tools/javac/comp/TypeEnter$AbstractHeaderPhase$Synthesizer$2.h>
#include <com/sun/tools/javac/code/Symbol$TypeSymbol.h>
#include <com/sun/tools/javac/code/Type$ClassType.h>
#include <com/sun/tools/javac/code/Type$ErrorType.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/comp/TypeEnter$AbstractHeaderPhase$Synthesizer.h>
#include <com/sun/tools/javac/util/List.h>
#include <jcpp.h>

using $Symbol$TypeSymbol = ::com::sun::tools::javac::code::Symbol$TypeSymbol;
using $Type = ::com::sun::tools::javac::code::Type;
using $Type$ErrorType = ::com::sun::tools::javac::code::Type$ErrorType;
using $TypeEnter$AbstractHeaderPhase$Synthesizer = ::com::sun::tools::javac::comp::TypeEnter$AbstractHeaderPhase$Synthesizer;
using $List = ::com::sun::tools::javac::util::List;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

void TypeEnter$AbstractHeaderPhase$Synthesizer$2::init$($TypeEnter$AbstractHeaderPhase$Synthesizer* this$2, $Type* originalType, $Symbol$TypeSymbol* tsym) {
	$set(this, this$2, this$2);
	$Type$ErrorType::init$(originalType, tsym);
}

$List* TypeEnter$AbstractHeaderPhase$Synthesizer$2::getTypeArguments() {
	return this->typarams_field;
}

TypeEnter$AbstractHeaderPhase$Synthesizer$2::TypeEnter$AbstractHeaderPhase$Synthesizer$2() {
}

$Class* TypeEnter$AbstractHeaderPhase$Synthesizer$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$2", "Lcom/sun/tools/javac/comp/TypeEnter$AbstractHeaderPhase$Synthesizer;", nullptr, $FINAL | $SYNTHETIC, $field(TypeEnter$AbstractHeaderPhase$Synthesizer$2, this$2)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/tools/javac/comp/TypeEnter$AbstractHeaderPhase$Synthesizer;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Symbol$TypeSymbol;)V", nullptr, 0, $method(TypeEnter$AbstractHeaderPhase$Synthesizer$2, init$, void, $TypeEnter$AbstractHeaderPhase$Synthesizer*, $Type*, $Symbol$TypeSymbol*)},
		{"getTypeArguments", "()Lcom/sun/tools/javac/util/List;", "()Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;", $PUBLIC, $virtualMethod(TypeEnter$AbstractHeaderPhase$Synthesizer$2, getTypeArguments, $List*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.sun.tools.javac.comp.TypeEnter$AbstractHeaderPhase$Synthesizer",
		"synthesizeClass",
		"(Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/code/Symbol;)Lcom/sun/tools/javac/code/Symbol$ClassSymbol;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.comp.TypeEnter$AbstractHeaderPhase", "com.sun.tools.javac.comp.TypeEnter", "AbstractHeaderPhase", $PRIVATE | $ABSTRACT},
		{"com.sun.tools.javac.comp.TypeEnter$AbstractHeaderPhase$Synthesizer", "com.sun.tools.javac.comp.TypeEnter$AbstractHeaderPhase", "Synthesizer", $PRIVATE},
		{"com.sun.tools.javac.comp.TypeEnter$AbstractHeaderPhase$Synthesizer$2", nullptr, nullptr, 0},
		{"com.sun.tools.javac.code.Type$ErrorType", "com.sun.tools.javac.code.Type", "ErrorType", $PUBLIC | $STATIC},
		{"com.sun.tools.javac.code.Symbol$ClassSymbol", "com.sun.tools.javac.code.Symbol", "ClassSymbol", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.tools.javac.comp.TypeEnter$AbstractHeaderPhase$Synthesizer$2",
		"com.sun.tools.javac.code.Type$ErrorType",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.tools.javac.comp.TypeEnter"
	};
	$loadClass(TypeEnter$AbstractHeaderPhase$Synthesizer$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(TypeEnter$AbstractHeaderPhase$Synthesizer$2));
	});
	return class$;
}

$Class* TypeEnter$AbstractHeaderPhase$Synthesizer$2::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com