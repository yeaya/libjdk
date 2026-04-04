#include <com/sun/tools/javac/code/Type$StructuralTypeMapping$3.h>
#include <com/sun/tools/javac/code/Symbol$TypeSymbol.h>
#include <com/sun/tools/javac/code/Type$ArrayType.h>
#include <com/sun/tools/javac/code/Type$StructuralTypeMapping.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/TypeMetadata.h>
#include <jcpp.h>

using $Symbol$TypeSymbol = ::com::sun::tools::javac::code::Symbol$TypeSymbol;
using $Type = ::com::sun::tools::javac::code::Type;
using $Type$ArrayType = ::com::sun::tools::javac::code::Type$ArrayType;
using $Type$StructuralTypeMapping = ::com::sun::tools::javac::code::Type$StructuralTypeMapping;
using $TypeMetadata = ::com::sun::tools::javac::code::TypeMetadata;
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

void Type$StructuralTypeMapping$3::init$($Type$StructuralTypeMapping* this$0, $Type* elemtype, $Symbol$TypeSymbol* arrayClass, $TypeMetadata* metadata) {
	$set(this, this$0, this$0);
	$Type$ArrayType::init$(elemtype, arrayClass, metadata);
}

bool Type$StructuralTypeMapping$3::needsStripping() {
	return true;
}

Type$StructuralTypeMapping$3::Type$StructuralTypeMapping$3() {
}

$Class* Type$StructuralTypeMapping$3::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/tools/javac/code/Type$StructuralTypeMapping;", nullptr, $FINAL | $SYNTHETIC, $field(Type$StructuralTypeMapping$3, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/tools/javac/code/Type$StructuralTypeMapping;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Symbol$TypeSymbol;Lcom/sun/tools/javac/code/TypeMetadata;)V", nullptr, 0, $method(Type$StructuralTypeMapping$3, init$, void, $Type$StructuralTypeMapping*, $Type*, $Symbol$TypeSymbol*, $TypeMetadata*)},
		{"needsStripping", "()Z", nullptr, $PROTECTED, $virtualMethod(Type$StructuralTypeMapping$3, needsStripping, bool)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.sun.tools.javac.code.Type$StructuralTypeMapping",
		"visitArrayType",
		"(Lcom/sun/tools/javac/code/Type$ArrayType;Ljava/lang/Object;)Lcom/sun/tools/javac/code/Type;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.code.Type$StructuralTypeMapping", "com.sun.tools.javac.code.Type", "StructuralTypeMapping", $PUBLIC | $STATIC | $ABSTRACT},
		{"com.sun.tools.javac.code.Type$StructuralTypeMapping$3", nullptr, nullptr, 0},
		{"com.sun.tools.javac.code.Type$ArrayType", "com.sun.tools.javac.code.Type", "ArrayType", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.tools.javac.code.Type$StructuralTypeMapping$3",
		"com.sun.tools.javac.code.Type$ArrayType",
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
	$loadClass(Type$StructuralTypeMapping$3, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(Type$StructuralTypeMapping$3));
	});
	return class$;
}

$Class* Type$StructuralTypeMapping$3::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com