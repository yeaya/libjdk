#include <com/sun/tools/javac/comp/Infer$1.h>
#include <com/sun/tools/javac/code/Flags.h>
#include <com/sun/tools/javac/code/Symbol$TypeSymbol.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/code/Type$StructuralTypeMapping.h>
#include <com/sun/tools/javac/code/Type$TypeVar.h>
#include <com/sun/tools/javac/code/Type$UndetVar.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/Types$TypeMapping.h>
#include <com/sun/tools/javac/code/Types.h>
#include <com/sun/tools/javac/comp/Infer$AbstractIncorporationEngine.h>
#include <com/sun/tools/javac/comp/Infer.h>
#include <jcpp.h>

#undef THROWS

using $Flags = ::com::sun::tools::javac::code::Flags;
using $Type = ::com::sun::tools::javac::code::Type;
using $Type$StructuralTypeMapping = ::com::sun::tools::javac::code::Type$StructuralTypeMapping;
using $Type$TypeVar = ::com::sun::tools::javac::code::Type$TypeVar;
using $Type$UndetVar = ::com::sun::tools::javac::code::Type$UndetVar;
using $Infer = ::com::sun::tools::javac::comp::Infer;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Void = ::java::lang::Void;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

void Infer$1::init$($Infer* this$0) {
	$set(this, this$0, this$0);
	$Type$StructuralTypeMapping::init$();
}

$Type* Infer$1::visitTypeVar($Type$TypeVar* tv, $Void* aVoid) {
	$useLocalObjectStack();
	$var($Type$UndetVar, uv, $new($Type$UndetVar, tv, $(this->this$0->incorporationEngine()), this->this$0->types));
	if (($nc($nc(tv)->tsym)->flags() & $Flags::THROWS) != 0) {
		uv->setThrow();
	}
	return uv;
}

$Object* Infer$1::visitTypeVar($Type$TypeVar* tv, Object$* aVoid) {
	return $of(this->visitTypeVar(tv, $cast($Void, aVoid)));
}

Infer$1::Infer$1() {
}

$Class* Infer$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/tools/javac/comp/Infer;", nullptr, $FINAL | $SYNTHETIC, $field(Infer$1, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/tools/javac/comp/Infer;)V", nullptr, 0, $method(Infer$1, init$, void, $Infer*)},
		{"visitTypeVar", "(Lcom/sun/tools/javac/code/Type$TypeVar;Ljava/lang/Void;)Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC, $virtualMethod(Infer$1, visitTypeVar, $Type*, $Type$TypeVar*, $Void*)},
		{"visitTypeVar", "(Lcom/sun/tools/javac/code/Type$TypeVar;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(Infer$1, visitTypeVar, $Object*, $Type$TypeVar*, Object$*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.sun.tools.javac.comp.Infer",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.comp.Infer$1", nullptr, nullptr, 0},
		{"com.sun.tools.javac.code.Type$StructuralTypeMapping", "com.sun.tools.javac.code.Type", "StructuralTypeMapping", $PUBLIC | $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.tools.javac.comp.Infer$1",
		"com.sun.tools.javac.code.Type$StructuralTypeMapping",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"Lcom/sun/tools/javac/code/Type$StructuralTypeMapping<Ljava/lang/Void;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.tools.javac.comp.Infer"
	};
	$loadClass(Infer$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(Infer$1));
	});
	return class$;
}

$Class* Infer$1::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com