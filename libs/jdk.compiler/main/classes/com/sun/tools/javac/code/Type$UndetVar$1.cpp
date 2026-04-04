#include <com/sun/tools/javac/code/Type$UndetVar$1.h>
#include <com/sun/tools/javac/code/Type$StructuralTypeMapping.h>
#include <com/sun/tools/javac/code/Type$UndetVar.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/Types$TypeMapping.h>
#include <jcpp.h>

using $Type = ::com::sun::tools::javac::code::Type;
using $Type$StructuralTypeMapping = ::com::sun::tools::javac::code::Type$StructuralTypeMapping;
using $Type$UndetVar = ::com::sun::tools::javac::code::Type$UndetVar;
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

void Type$UndetVar$1::init$($Type$UndetVar* this$0) {
	$set(this, this$0, this$0);
	$Type$StructuralTypeMapping::init$();
}

$Type* Type$UndetVar$1::visitUndetVar($Type$UndetVar* uv, $Void* _unused) {
	return $nc(uv)->inst != nullptr ? uv->inst : uv->qtype;
}

$Object* Type$UndetVar$1::visitUndetVar($Type$UndetVar* uv, Object$* _unused) {
	return $of(this->visitUndetVar(uv, $cast($Void, _unused)));
}

Type$UndetVar$1::Type$UndetVar$1() {
}

$Class* Type$UndetVar$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/tools/javac/code/Type$UndetVar;", nullptr, $FINAL | $SYNTHETIC, $field(Type$UndetVar$1, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/tools/javac/code/Type$UndetVar;)V", nullptr, 0, $method(Type$UndetVar$1, init$, void, $Type$UndetVar*)},
		{"visitUndetVar", "(Lcom/sun/tools/javac/code/Type$UndetVar;Ljava/lang/Void;)Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC, $virtualMethod(Type$UndetVar$1, visitUndetVar, $Type*, $Type$UndetVar*, $Void*)},
		{"visitUndetVar", "(Lcom/sun/tools/javac/code/Type$UndetVar;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(Type$UndetVar$1, visitUndetVar, $Object*, $Type$UndetVar*, Object$*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.sun.tools.javac.code.Type$UndetVar",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.code.Type$UndetVar", "com.sun.tools.javac.code.Type", "UndetVar", $PUBLIC | $STATIC},
		{"com.sun.tools.javac.code.Type$UndetVar$1", nullptr, nullptr, 0},
		{"com.sun.tools.javac.code.Type$StructuralTypeMapping", "com.sun.tools.javac.code.Type", "StructuralTypeMapping", $PUBLIC | $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.tools.javac.code.Type$UndetVar$1",
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
		"com.sun.tools.javac.code.Type"
	};
	$loadClass(Type$UndetVar$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(Type$UndetVar$1));
	});
	return class$;
}

$Class* Type$UndetVar$1::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com