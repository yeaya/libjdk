#include <com/sun/tools/javac/code/Types$17.h>
#include <com/sun/tools/javac/code/Type$IntersectionClassType.h>
#include <com/sun/tools/javac/code/Type$JCNoType.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/Types$UnaryVisitor.h>
#include <com/sun/tools/javac/code/Types.h>
#include <com/sun/tools/javac/util/List.h>
#include <jcpp.h>

using $Type = ::com::sun::tools::javac::code::Type;
using $Type$IntersectionClassType = ::com::sun::tools::javac::code::Type$IntersectionClassType;
using $Types = ::com::sun::tools::javac::code::Types;
using $Types$UnaryVisitor = ::com::sun::tools::javac::code::Types$UnaryVisitor;
using $List = ::com::sun::tools::javac::util::List;
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
				namespace code {

void Types$17::init$($Types* this$0) {
	$set(this, this$0, this$0);
	$Types$UnaryVisitor::init$();
}

$List* Types$17::visitType($Type* type, $Void* ignored) {
	$useLocalObjectStack();
	if (!$nc(type)->isIntersection()) {
		$var($Type, sup, this->this$0->supertype(type));
		return ($equals(sup, $Type::noType) || sup == type || sup == nullptr) ? this->this$0->interfaces(type) : $$nc(this->this$0->interfaces(type))->prepend(sup);
	} else {
		return $cast($Type$IntersectionClassType, type)->getExplicitComponents();
	}
}

$Object* Types$17::visitType($Type* type, Object$* ignored) {
	return $of(this->visitType(type, $cast($Void, ignored)));
}

Types$17::Types$17() {
}

$Class* Types$17::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/tools/javac/code/Types;", nullptr, $FINAL | $SYNTHETIC, $field(Types$17, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/tools/javac/code/Types;)V", nullptr, 0, $method(Types$17, init$, void, $Types*)},
		{"visitType", "(Lcom/sun/tools/javac/code/Type;Ljava/lang/Void;)Lcom/sun/tools/javac/util/List;", "(Lcom/sun/tools/javac/code/Type;Ljava/lang/Void;)Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;", $PUBLIC, $virtualMethod(Types$17, visitType, $List*, $Type*, $Void*)},
		{"visitType", "(Lcom/sun/tools/javac/code/Type;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(Types$17, visitType, $Object*, $Type*, Object$*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.sun.tools.javac.code.Types",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.code.Types$17", nullptr, nullptr, 0},
		{"com.sun.tools.javac.code.Types$UnaryVisitor", "com.sun.tools.javac.code.Types", "UnaryVisitor", $PUBLIC | $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.tools.javac.code.Types$17",
		"com.sun.tools.javac.code.Types$UnaryVisitor",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"Lcom/sun/tools/javac/code/Types$UnaryVisitor<Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.tools.javac.code.Types"
	};
	$loadClass(Types$17, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Types$17);
	});
	return class$;
}

$Class* Types$17::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com