#include <com/sun/tools/javac/comp/Infer$IncorporationAction.h>
#include <com/sun/tools/javac/code/Type$UndetVar.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/comp/Infer$IncorporationBinaryOpKind.h>
#include <com/sun/tools/javac/comp/Infer.h>
#include <com/sun/tools/javac/comp/InferenceContext.h>
#include <com/sun/tools/javac/util/Warner.h>
#include <jcpp.h>

#undef IS_SAME_TYPE
#undef IS_SUBTYPE

using $Type = ::com::sun::tools::javac::code::Type;
using $Type$UndetVar = ::com::sun::tools::javac::code::Type$UndetVar;
using $Infer = ::com::sun::tools::javac::comp::Infer;
using $Infer$IncorporationBinaryOpKind = ::com::sun::tools::javac::comp::Infer$IncorporationBinaryOpKind;
using $InferenceContext = ::com::sun::tools::javac::comp::InferenceContext;
using $Warner = ::com::sun::tools::javac::util::Warner;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

void Infer$IncorporationAction::init$($Infer* this$0, $Type$UndetVar* uv, $Type* t) {
	$set(this, this$0, this$0);
	$set(this, uv, uv);
	$set(this, t, t);
}

bool Infer$IncorporationAction::isSubtype($Type* s, $Type* t, $Warner* warn) {
	$init($Infer$IncorporationBinaryOpKind);
	return this->this$0->doIncorporationOp($Infer$IncorporationBinaryOpKind::IS_SUBTYPE, s, t, warn);
}

bool Infer$IncorporationAction::isSameType($Type* s, $Type* t) {
	$init($Infer$IncorporationBinaryOpKind);
	return this->this$0->doIncorporationOp($Infer$IncorporationBinaryOpKind::IS_SAME_TYPE, s, t, nullptr);
}

$String* Infer$IncorporationAction::toString() {
	$useLocalObjectStack();
	return $String::format("%s[undet=%s,t=%s]"_s, $$new($ObjectArray, {
		$($of(this)->getClass()->getSimpleName()),
		$nc(this->uv)->qtype,
		this->t
	}));
}

Infer$IncorporationAction::Infer$IncorporationAction() {
}

$Class* Infer$IncorporationAction::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/tools/javac/comp/Infer;", nullptr, $FINAL | $SYNTHETIC, $field(Infer$IncorporationAction, this$0)},
		{"uv", "Lcom/sun/tools/javac/code/Type$UndetVar;", nullptr, 0, $field(Infer$IncorporationAction, uv)},
		{"t", "Lcom/sun/tools/javac/code/Type;", nullptr, 0, $field(Infer$IncorporationAction, t)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/tools/javac/comp/Infer;Lcom/sun/tools/javac/code/Type$UndetVar;Lcom/sun/tools/javac/code/Type;)V", nullptr, 0, $method(Infer$IncorporationAction, init$, void, $Infer*, $Type$UndetVar*, $Type*)},
		{"apply", "(Lcom/sun/tools/javac/comp/InferenceContext;Lcom/sun/tools/javac/util/Warner;)V", nullptr, $ABSTRACT, $virtualMethod(Infer$IncorporationAction, apply, void, $InferenceContext*, $Warner*)},
		{"dup", "(Lcom/sun/tools/javac/code/Type$UndetVar;)Lcom/sun/tools/javac/comp/Infer$IncorporationAction;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Infer$IncorporationAction, dup, Infer$IncorporationAction*, $Type$UndetVar*)},
		{"isSameType", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Type;)Z", nullptr, 0, $virtualMethod(Infer$IncorporationAction, isSameType, bool, $Type*, $Type*)},
		{"isSubtype", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/Warner;)Z", nullptr, 0, $virtualMethod(Infer$IncorporationAction, isSubtype, bool, $Type*, $Type*, $Warner*)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(Infer$IncorporationAction, toString, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.comp.Infer$IncorporationAction", "com.sun.tools.javac.comp.Infer", "IncorporationAction", $PUBLIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER | $ABSTRACT,
		"com.sun.tools.javac.comp.Infer$IncorporationAction",
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
		"com.sun.tools.javac.comp.Infer"
	};
	$loadClass(Infer$IncorporationAction, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Infer$IncorporationAction);
	});
	return class$;
}

$Class* Infer$IncorporationAction::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com