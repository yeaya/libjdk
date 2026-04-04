#include <com/sun/tools/javac/code/Types$6.h>
#include <com/sun/tools/javac/code/Type$ErrorType.h>
#include <com/sun/tools/javac/code/Type$UndetVar.h>
#include <com/sun/tools/javac/code/Type$WildcardType.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/TypeTag.h>
#include <com/sun/tools/javac/code/Types$TypeRelation.h>
#include <com/sun/tools/javac/code/Types.h>
#include <jcpp.h>

#undef WILDCARD

using $Type = ::com::sun::tools::javac::code::Type;
using $Type$ErrorType = ::com::sun::tools::javac::code::Type$ErrorType;
using $Type$UndetVar = ::com::sun::tools::javac::code::Type$UndetVar;
using $Type$WildcardType = ::com::sun::tools::javac::code::Type$WildcardType;
using $TypeTag = ::com::sun::tools::javac::code::TypeTag;
using $Types = ::com::sun::tools::javac::code::Types;
using $Types$TypeRelation = ::com::sun::tools::javac::code::Types$TypeRelation;
using $Boolean = ::java::lang::Boolean;
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

void Types$6::init$($Types* this$0) {
	$set(this, this$0, this$0);
	$Types$TypeRelation::init$();
}

$Boolean* Types$6::visitType($Type* t, $Type* s) {
	if ($nc(s)->isPartial()) {
		return $Boolean::valueOf(this->this$0->containedBy(s, t));
	} else {
		return $Boolean::valueOf(this->this$0->isSameType(t, s));
	}
}

$Boolean* Types$6::visitWildcardType($Type$WildcardType* t, $Type* s) {
	$useLocalObjectStack();
	if ($nc(s)->isPartial()) {
		return $Boolean::valueOf(this->this$0->containedBy(s, t));
	} else {
		bool var$1 = this->this$0->isSameWildcard(t, s);
		bool var$0 = var$1 || this->this$0->isCaptureOf(s, t);
		if (!var$0) {
			bool var$3 = $nc(t)->isExtendsBound();
			if (!var$3) {
				$var($Type, var$4, this->this$0->wildLowerBound(t));
				var$3 = this->this$0->isSubtypeNoCapture(var$4, $(this->this$0->wildLowerBound(s)));
			}
			bool var$2 = var$3;
			if (var$2) {
				bool var$5 = t->isSuperBound();
				if (!var$5) {
					$var($Type, var$6, this->this$0->wildUpperBound(s));
					var$5 = this->this$0->isSubtypeNoCapture(var$6, $(this->this$0->wildUpperBound(t)));
				}
				var$2 = var$5;
			}
			var$0 = var$2;
		}
		return $Boolean::valueOf(var$0);
	}
}

$Boolean* Types$6::visitUndetVar($Type$UndetVar* t, $Type* s) {
	$init($TypeTag);
	if (!$nc(s)->hasTag($TypeTag::WILDCARD)) {
		return $Boolean::valueOf(this->this$0->isSameType(t, s));
	} else {
		return $Boolean::valueOf(false);
	}
}

$Boolean* Types$6::visitErrorType($Type$ErrorType* t, $Type* s) {
	return $Boolean::valueOf(true);
}

$Object* Types$6::visitUndetVar($Type$UndetVar* t, Object$* s) {
	return $of(this->visitUndetVar(t, $cast($Type, s)));
}

$Object* Types$6::visitErrorType($Type$ErrorType* t, Object$* s) {
	return $of(this->visitErrorType(t, $cast($Type, s)));
}

$Object* Types$6::visitWildcardType($Type$WildcardType* t, Object$* s) {
	return $of(this->visitWildcardType(t, $cast($Type, s)));
}

$Object* Types$6::visitType($Type* t, Object$* s) {
	return $of(this->visitType(t, $cast($Type, s)));
}

Types$6::Types$6() {
}

$Class* Types$6::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/tools/javac/code/Types;", nullptr, $FINAL | $SYNTHETIC, $field(Types$6, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/tools/javac/code/Types;)V", nullptr, 0, $method(Types$6, init$, void, $Types*)},
		{"visitErrorType", "(Lcom/sun/tools/javac/code/Type$ErrorType;Lcom/sun/tools/javac/code/Type;)Ljava/lang/Boolean;", nullptr, $PUBLIC, $virtualMethod(Types$6, visitErrorType, $Boolean*, $Type$ErrorType*, $Type*)},
		{"visitErrorType", "(Lcom/sun/tools/javac/code/Type$ErrorType;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(Types$6, visitErrorType, $Object*, $Type$ErrorType*, Object$*)},
		{"visitType", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Type;)Ljava/lang/Boolean;", nullptr, $PUBLIC, $virtualMethod(Types$6, visitType, $Boolean*, $Type*, $Type*)},
		{"visitType", "(Lcom/sun/tools/javac/code/Type;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(Types$6, visitType, $Object*, $Type*, Object$*)},
		{"visitUndetVar", "(Lcom/sun/tools/javac/code/Type$UndetVar;Lcom/sun/tools/javac/code/Type;)Ljava/lang/Boolean;", nullptr, $PUBLIC, $virtualMethod(Types$6, visitUndetVar, $Boolean*, $Type$UndetVar*, $Type*)},
		{"visitUndetVar", "(Lcom/sun/tools/javac/code/Type$UndetVar;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(Types$6, visitUndetVar, $Object*, $Type$UndetVar*, Object$*)},
		{"visitWildcardType", "(Lcom/sun/tools/javac/code/Type$WildcardType;Lcom/sun/tools/javac/code/Type;)Ljava/lang/Boolean;", nullptr, $PUBLIC, $virtualMethod(Types$6, visitWildcardType, $Boolean*, $Type$WildcardType*, $Type*)},
		{"visitWildcardType", "(Lcom/sun/tools/javac/code/Type$WildcardType;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(Types$6, visitWildcardType, $Object*, $Type$WildcardType*, Object$*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.sun.tools.javac.code.Types",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.code.Types$6", nullptr, nullptr, 0},
		{"com.sun.tools.javac.code.Types$TypeRelation", "com.sun.tools.javac.code.Types", "TypeRelation", $PUBLIC | $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.tools.javac.code.Types$6",
		"com.sun.tools.javac.code.Types$TypeRelation",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.tools.javac.code.Types"
	};
	$loadClass(Types$6, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Types$6);
	});
	return class$;
}

$Class* Types$6::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com