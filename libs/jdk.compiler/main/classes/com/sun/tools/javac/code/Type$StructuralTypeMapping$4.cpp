#include <com/sun/tools/javac/code/Type$StructuralTypeMapping$4.h>
#include <com/sun/tools/javac/code/Symbol$TypeSymbol.h>
#include <com/sun/tools/javac/code/Type$MethodType.h>
#include <com/sun/tools/javac/code/Type$StructuralTypeMapping.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/util/List.h>
#include <jcpp.h>

using $Symbol$TypeSymbol = ::com::sun::tools::javac::code::Symbol$TypeSymbol;
using $Type = ::com::sun::tools::javac::code::Type;
using $Type$MethodType = ::com::sun::tools::javac::code::Type$MethodType;
using $Type$StructuralTypeMapping = ::com::sun::tools::javac::code::Type$StructuralTypeMapping;
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
				namespace code {

void Type$StructuralTypeMapping$4::init$($Type$StructuralTypeMapping* this$0, $List* argtypes, $Type* restype, $List* thrown, $Symbol$TypeSymbol* methodClass) {
	$set(this, this$0, this$0);
	$Type$MethodType::init$(argtypes, restype, thrown, methodClass);
}

bool Type$StructuralTypeMapping$4::needsStripping() {
	return true;
}

Type$StructuralTypeMapping$4::Type$StructuralTypeMapping$4() {
}

$Class* Type$StructuralTypeMapping$4::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/tools/javac/code/Type$StructuralTypeMapping;", nullptr, $FINAL | $SYNTHETIC, $field(Type$StructuralTypeMapping$4, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/tools/javac/code/Type$StructuralTypeMapping;Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/code/Symbol$TypeSymbol;)V", nullptr, 0, $method(Type$StructuralTypeMapping$4, init$, void, $Type$StructuralTypeMapping*, $List*, $Type*, $List*, $Symbol$TypeSymbol*)},
		{"needsStripping", "()Z", nullptr, $PROTECTED, $virtualMethod(Type$StructuralTypeMapping$4, needsStripping, bool)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.sun.tools.javac.code.Type$StructuralTypeMapping",
		"visitMethodType",
		"(Lcom/sun/tools/javac/code/Type$MethodType;Ljava/lang/Object;)Lcom/sun/tools/javac/code/Type;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.code.Type$StructuralTypeMapping", "com.sun.tools.javac.code.Type", "StructuralTypeMapping", $PUBLIC | $STATIC | $ABSTRACT},
		{"com.sun.tools.javac.code.Type$StructuralTypeMapping$4", nullptr, nullptr, 0},
		{"com.sun.tools.javac.code.Type$MethodType", "com.sun.tools.javac.code.Type", "MethodType", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.tools.javac.code.Type$StructuralTypeMapping$4",
		"com.sun.tools.javac.code.Type$MethodType",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.tools.javac.code.Type"
	};
	$loadClass(Type$StructuralTypeMapping$4, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(Type$StructuralTypeMapping$4));
	});
	return class$;
}

$Class* Type$StructuralTypeMapping$4::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com