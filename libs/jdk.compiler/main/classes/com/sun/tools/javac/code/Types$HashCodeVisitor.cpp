#include <com/sun/tools/javac/code/Types$HashCodeVisitor.h>
#include <com/sun/tools/javac/code/BoundKind.h>
#include <com/sun/tools/javac/code/Symbol$TypeSymbol.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/code/Type$ArrayType.h>
#include <com/sun/tools/javac/code/Type$ClassType.h>
#include <com/sun/tools/javac/code/Type$ErrorType.h>
#include <com/sun/tools/javac/code/Type$MethodType.h>
#include <com/sun/tools/javac/code/Type$TypeVar.h>
#include <com/sun/tools/javac/code/Type$UndetVar.h>
#include <com/sun/tools/javac/code/Type$WildcardType.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/TypeTag.h>
#include <com/sun/tools/javac/code/Types$UnaryVisitor.h>
#include <com/sun/tools/javac/code/Types.h>
#include <com/sun/tools/javac/util/List.h>
#include <com/sun/tools/javac/util/Name.h>
#include <java/util/Iterator.h>
#include <jcpp.h>

#undef METHOD

using $Type = ::com::sun::tools::javac::code::Type;
using $Type$ArrayType = ::com::sun::tools::javac::code::Type$ArrayType;
using $Type$ClassType = ::com::sun::tools::javac::code::Type$ClassType;
using $Type$ErrorType = ::com::sun::tools::javac::code::Type$ErrorType;
using $Type$MethodType = ::com::sun::tools::javac::code::Type$MethodType;
using $Type$TypeVar = ::com::sun::tools::javac::code::Type$TypeVar;
using $Type$UndetVar = ::com::sun::tools::javac::code::Type$UndetVar;
using $Type$WildcardType = ::com::sun::tools::javac::code::Type$WildcardType;
using $TypeTag = ::com::sun::tools::javac::code::TypeTag;
using $Types$UnaryVisitor = ::com::sun::tools::javac::code::Types$UnaryVisitor;
using $List = ::com::sun::tools::javac::util::List;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $Void = ::java::lang::Void;
using $Iterator = ::java::util::Iterator;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

void Types$HashCodeVisitor::init$() {
	$Types$UnaryVisitor::init$();
}

$Integer* Types$HashCodeVisitor::visitType($Type* t, $Void* ignored) {
	return $Integer::valueOf($$nc($nc(t)->getTag())->ordinal());
}

$Integer* Types$HashCodeVisitor::visitClassType($Type$ClassType* t, $Void* ignored) {
	$useLocalObjectStack();
	int32_t result = $$sure($Integer, visit($($nc(t)->getEnclosingType())))->intValue();
	result *= 127;
	result += $$nc($nc(t->tsym)->flatName())->hashCode();
	{
		$var($Iterator, i$, $$nc(t->getTypeArguments())->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Type, s, $cast($Type, i$->next()));
			{
				result *= 127;
				result += $$sure($Integer, visit(s))->intValue();
			}
		}
	}
	return $Integer::valueOf(result);
}

$Integer* Types$HashCodeVisitor::visitMethodType($Type$MethodType* t, $Void* ignored) {
	$useLocalObjectStack();
	$init($TypeTag);
	int32_t h = $TypeTag::METHOD->ordinal();
	{
		$var($List, thisargs, $nc(t)->argtypes$);
		for (; $nc(thisargs)->tail != nullptr; $assign(thisargs, thisargs->tail)) {
			h = (h << 5) + $$sure($Integer, visit($cast($Type, thisargs->head)))->intValue();
		}
	}
	return $Integer::valueOf((h << 5) + $$sure($Integer, visit(t->restype))->intValue());
}

$Integer* Types$HashCodeVisitor::visitWildcardType($Type$WildcardType* t, $Void* ignored) {
	int32_t result = $nc($nc(t)->kind)->hashCode();
	if (t->type != nullptr) {
		result *= 127;
		result += $$sure($Integer, visit(t->type))->intValue();
	}
	return $Integer::valueOf(result);
}

$Integer* Types$HashCodeVisitor::visitArrayType($Type$ArrayType* t, $Void* ignored) {
	return $Integer::valueOf($$sure($Integer, visit($nc(t)->elemtype))->intValue() + 12);
}

$Integer* Types$HashCodeVisitor::visitTypeVar($Type$TypeVar* t, $Void* ignored) {
	return $Integer::valueOf($System::identityHashCode(t));
}

$Integer* Types$HashCodeVisitor::visitUndetVar($Type$UndetVar* t, $Void* ignored) {
	return $Integer::valueOf($System::identityHashCode(t));
}

$Integer* Types$HashCodeVisitor::visitErrorType($Type$ErrorType* t, $Void* ignored) {
	return $Integer::valueOf(0);
}

$Object* Types$HashCodeVisitor::visitUndetVar($Type$UndetVar* t, Object$* ignored) {
	return $of(this->visitUndetVar(t, $cast($Void, ignored)));
}

$Object* Types$HashCodeVisitor::visitErrorType($Type$ErrorType* t, Object$* ignored) {
	return $of(this->visitErrorType(t, $cast($Void, ignored)));
}

$Object* Types$HashCodeVisitor::visitTypeVar($Type$TypeVar* t, Object$* ignored) {
	return $of(this->visitTypeVar(t, $cast($Void, ignored)));
}

$Object* Types$HashCodeVisitor::visitMethodType($Type$MethodType* t, Object$* ignored) {
	return $of(this->visitMethodType(t, $cast($Void, ignored)));
}

$Object* Types$HashCodeVisitor::visitArrayType($Type$ArrayType* t, Object$* ignored) {
	return $of(this->visitArrayType(t, $cast($Void, ignored)));
}

$Object* Types$HashCodeVisitor::visitWildcardType($Type$WildcardType* t, Object$* ignored) {
	return $of(this->visitWildcardType(t, $cast($Void, ignored)));
}

$Object* Types$HashCodeVisitor::visitClassType($Type$ClassType* t, Object$* ignored) {
	return $of(this->visitClassType(t, $cast($Void, ignored)));
}

$Object* Types$HashCodeVisitor::visitType($Type* t, Object$* ignored) {
	return $of(this->visitType(t, $cast($Void, ignored)));
}

Types$HashCodeVisitor::Types$HashCodeVisitor() {
}

$Class* Types$HashCodeVisitor::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(Types$HashCodeVisitor, init$, void)},
		{"visitArrayType", "(Lcom/sun/tools/javac/code/Type$ArrayType;Ljava/lang/Void;)Ljava/lang/Integer;", nullptr, $PUBLIC, $virtualMethod(Types$HashCodeVisitor, visitArrayType, $Integer*, $Type$ArrayType*, $Void*)},
		{"visitArrayType", "(Lcom/sun/tools/javac/code/Type$ArrayType;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(Types$HashCodeVisitor, visitArrayType, $Object*, $Type$ArrayType*, Object$*)},
		{"visitClassType", "(Lcom/sun/tools/javac/code/Type$ClassType;Ljava/lang/Void;)Ljava/lang/Integer;", nullptr, $PUBLIC, $virtualMethod(Types$HashCodeVisitor, visitClassType, $Integer*, $Type$ClassType*, $Void*)},
		{"visitClassType", "(Lcom/sun/tools/javac/code/Type$ClassType;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(Types$HashCodeVisitor, visitClassType, $Object*, $Type$ClassType*, Object$*)},
		{"visitErrorType", "(Lcom/sun/tools/javac/code/Type$ErrorType;Ljava/lang/Void;)Ljava/lang/Integer;", nullptr, $PUBLIC, $virtualMethod(Types$HashCodeVisitor, visitErrorType, $Integer*, $Type$ErrorType*, $Void*)},
		{"visitErrorType", "(Lcom/sun/tools/javac/code/Type$ErrorType;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(Types$HashCodeVisitor, visitErrorType, $Object*, $Type$ErrorType*, Object$*)},
		{"visitMethodType", "(Lcom/sun/tools/javac/code/Type$MethodType;Ljava/lang/Void;)Ljava/lang/Integer;", nullptr, $PUBLIC, $virtualMethod(Types$HashCodeVisitor, visitMethodType, $Integer*, $Type$MethodType*, $Void*)},
		{"visitMethodType", "(Lcom/sun/tools/javac/code/Type$MethodType;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(Types$HashCodeVisitor, visitMethodType, $Object*, $Type$MethodType*, Object$*)},
		{"visitType", "(Lcom/sun/tools/javac/code/Type;Ljava/lang/Void;)Ljava/lang/Integer;", nullptr, $PUBLIC, $virtualMethod(Types$HashCodeVisitor, visitType, $Integer*, $Type*, $Void*)},
		{"visitType", "(Lcom/sun/tools/javac/code/Type;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(Types$HashCodeVisitor, visitType, $Object*, $Type*, Object$*)},
		{"visitTypeVar", "(Lcom/sun/tools/javac/code/Type$TypeVar;Ljava/lang/Void;)Ljava/lang/Integer;", nullptr, $PUBLIC, $virtualMethod(Types$HashCodeVisitor, visitTypeVar, $Integer*, $Type$TypeVar*, $Void*)},
		{"visitTypeVar", "(Lcom/sun/tools/javac/code/Type$TypeVar;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(Types$HashCodeVisitor, visitTypeVar, $Object*, $Type$TypeVar*, Object$*)},
		{"visitUndetVar", "(Lcom/sun/tools/javac/code/Type$UndetVar;Ljava/lang/Void;)Ljava/lang/Integer;", nullptr, $PUBLIC, $virtualMethod(Types$HashCodeVisitor, visitUndetVar, $Integer*, $Type$UndetVar*, $Void*)},
		{"visitUndetVar", "(Lcom/sun/tools/javac/code/Type$UndetVar;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(Types$HashCodeVisitor, visitUndetVar, $Object*, $Type$UndetVar*, Object$*)},
		{"visitWildcardType", "(Lcom/sun/tools/javac/code/Type$WildcardType;Ljava/lang/Void;)Ljava/lang/Integer;", nullptr, $PUBLIC, $virtualMethod(Types$HashCodeVisitor, visitWildcardType, $Integer*, $Type$WildcardType*, $Void*)},
		{"visitWildcardType", "(Lcom/sun/tools/javac/code/Type$WildcardType;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(Types$HashCodeVisitor, visitWildcardType, $Object*, $Type$WildcardType*, Object$*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.code.Types$HashCodeVisitor", "com.sun.tools.javac.code.Types", "HashCodeVisitor", $PRIVATE | $STATIC},
		{"com.sun.tools.javac.code.Types$UnaryVisitor", "com.sun.tools.javac.code.Types", "UnaryVisitor", $PUBLIC | $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.tools.javac.code.Types$HashCodeVisitor",
		"com.sun.tools.javac.code.Types$UnaryVisitor",
		nullptr,
		nullptr,
		methodInfos$$,
		"Lcom/sun/tools/javac/code/Types$UnaryVisitor<Ljava/lang/Integer;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.tools.javac.code.Types"
	};
	$loadClass(Types$HashCodeVisitor, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Types$HashCodeVisitor);
	});
	return class$;
}

$Class* Types$HashCodeVisitor::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com