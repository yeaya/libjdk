#include <com/sun/tools/javac/code/Types$9.h>
#include <com/sun/tools/javac/code/Type$CapturedType.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/Types$TypeMapping.h>
#include <com/sun/tools/javac/code/Types.h>
#include <jcpp.h>

using $Type = ::com::sun::tools::javac::code::Type;
using $Type$CapturedType = ::com::sun::tools::javac::code::Type$CapturedType;
using $Types = ::com::sun::tools::javac::code::Types;
using $Types$TypeMapping = ::com::sun::tools::javac::code::Types$TypeMapping;
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

void Types$9::init$($Types* this$0) {
	$set(this, this$0, this$0);
	$Types$TypeMapping::init$();
}

$Type* Types$9::visitCapturedType($Type$CapturedType* t, $Void* _unused) {
	return this->this$0->cvarLowerBound(t);
}

$Object* Types$9::visitCapturedType($Type$CapturedType* t, Object$* _unused) {
	return $of(this->visitCapturedType(t, $cast($Void, _unused)));
}

Types$9::Types$9() {
}

$Class* Types$9::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/tools/javac/code/Types;", nullptr, $FINAL | $SYNTHETIC, $field(Types$9, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/tools/javac/code/Types;)V", nullptr, 0, $method(Types$9, init$, void, $Types*)},
		{"visitCapturedType", "(Lcom/sun/tools/javac/code/Type$CapturedType;Ljava/lang/Void;)Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC, $virtualMethod(Types$9, visitCapturedType, $Type*, $Type$CapturedType*, $Void*)},
		{"visitCapturedType", "(Lcom/sun/tools/javac/code/Type$CapturedType;Ljava/lang/Object;)Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(Types$9, visitCapturedType, $Object*, $Type$CapturedType*, Object$*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.sun.tools.javac.code.Types",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.code.Types$9", nullptr, nullptr, 0},
		{"com.sun.tools.javac.code.Types$TypeMapping", "com.sun.tools.javac.code.Types", "TypeMapping", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.tools.javac.code.Types$9",
		"com.sun.tools.javac.code.Types$TypeMapping",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"Lcom/sun/tools/javac/code/Types$TypeMapping<Ljava/lang/Void;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.tools.javac.code.Types"
	};
	$loadClass(Types$9, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(Types$9));
	});
	return class$;
}

$Class* Types$9::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com