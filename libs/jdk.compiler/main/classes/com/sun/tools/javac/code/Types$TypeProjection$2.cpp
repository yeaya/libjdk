#include <com/sun/tools/javac/code/Types$TypeProjection$2.h>
#include <com/sun/tools/javac/code/Symbol$TypeSymbol.h>
#include <com/sun/tools/javac/code/Type$ArrayType.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/TypeMetadata.h>
#include <com/sun/tools/javac/code/Types$TypeProjection.h>
#include <jcpp.h>

using $Symbol$TypeSymbol = ::com::sun::tools::javac::code::Symbol$TypeSymbol;
using $Type = ::com::sun::tools::javac::code::Type;
using $Type$ArrayType = ::com::sun::tools::javac::code::Type$ArrayType;
using $TypeMetadata = ::com::sun::tools::javac::code::TypeMetadata;
using $Types$TypeProjection = ::com::sun::tools::javac::code::Types$TypeProjection;
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

void Types$TypeProjection$2::init$($Types$TypeProjection* this$1, $Type* elemtype, $Symbol$TypeSymbol* arrayClass, $TypeMetadata* metadata) {
	$set(this, this$1, this$1);
	$Type$ArrayType::init$(elemtype, arrayClass, metadata);
}

bool Types$TypeProjection$2::needsStripping() {
	return true;
}

Types$TypeProjection$2::Types$TypeProjection$2() {
}

$Class* Types$TypeProjection$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$1", "Lcom/sun/tools/javac/code/Types$TypeProjection;", nullptr, $FINAL | $SYNTHETIC, $field(Types$TypeProjection$2, this$1)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/tools/javac/code/Types$TypeProjection;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Symbol$TypeSymbol;Lcom/sun/tools/javac/code/TypeMetadata;)V", nullptr, 0, $method(Types$TypeProjection$2, init$, void, $Types$TypeProjection*, $Type*, $Symbol$TypeSymbol*, $TypeMetadata*)},
		{"needsStripping", "()Z", nullptr, $PROTECTED, $virtualMethod(Types$TypeProjection$2, needsStripping, bool)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.sun.tools.javac.code.Types$TypeProjection",
		"visitArrayType",
		"(Lcom/sun/tools/javac/code/Type$ArrayType;Lcom/sun/tools/javac/code/Types$ProjectionKind;)Lcom/sun/tools/javac/code/Type;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.code.Types$TypeProjection", "com.sun.tools.javac.code.Types", "TypeProjection", 0},
		{"com.sun.tools.javac.code.Types$TypeProjection$2", nullptr, nullptr, 0},
		{"com.sun.tools.javac.code.Type$ArrayType", "com.sun.tools.javac.code.Type", "ArrayType", $PUBLIC | $STATIC},
		{"com.sun.tools.javac.code.Types$ProjectionKind", "com.sun.tools.javac.code.Types", "ProjectionKind", $STATIC | $ABSTRACT | $ENUM},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.tools.javac.code.Types$TypeProjection$2",
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
		"com.sun.tools.javac.code.Types"
	};
	$loadClass(Types$TypeProjection$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(Types$TypeProjection$2));
	});
	return class$;
}

$Class* Types$TypeProjection$2::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com