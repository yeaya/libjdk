#include <com/sun/tools/javac/code/Type$ErrorType$1.h>
#include <com/sun/tools/javac/code/Symbol$TypeSymbol.h>
#include <com/sun/tools/javac/code/Type$ErrorType.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/TypeMetadata.h>
#include <com/sun/tools/javac/util/List.h>
#include <jcpp.h>

using $Symbol$TypeSymbol = ::com::sun::tools::javac::code::Symbol$TypeSymbol;
using $Type = ::com::sun::tools::javac::code::Type;
using $Type$ErrorType = ::com::sun::tools::javac::code::Type$ErrorType;
using $TypeMetadata = ::com::sun::tools::javac::code::TypeMetadata;
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

void Type$ErrorType$1::init$($Type$ErrorType* this$0, $Type* originalType, $Symbol$TypeSymbol* tsym, $TypeMetadata* metadata) {
	$set(this, this$0, this$0);
	$Type$ErrorType::init$(originalType, tsym, metadata);
}

$Type* Type$ErrorType$1::baseType() {
	return this->this$0->baseType();
}

$List* Type$ErrorType$1::getTypeArguments() {
	return $Type$ErrorType::getTypeArguments();
}

$Type* Type$ErrorType$1::getEnclosingType() {
	return $Type$ErrorType::getEnclosingType();
}

$Type$ErrorType* Type$ErrorType$1::cloneWithMetadata($TypeMetadata* md) {
	return $Type$ErrorType::cloneWithMetadata(md);
}

Type$ErrorType$1::Type$ErrorType$1() {
}

$Class* Type$ErrorType$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/tools/javac/code/Type$ErrorType;", nullptr, $FINAL | $SYNTHETIC, $field(Type$ErrorType$1, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/tools/javac/code/Type$ErrorType;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Symbol$TypeSymbol;Lcom/sun/tools/javac/code/TypeMetadata;)V", nullptr, 0, $method(Type$ErrorType$1, init$, void, $Type$ErrorType*, $Type*, $Symbol$TypeSymbol*, $TypeMetadata*)},
		{"baseType", "()Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC, $virtualMethod(Type$ErrorType$1, baseType, $Type*)},
		{"cloneWithMetadata", "(Lcom/sun/tools/javac/code/TypeMetadata;)Lcom/sun/tools/javac/code/Type$ClassType;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(Type$ErrorType$1, cloneWithMetadata, $Type$ErrorType*, $TypeMetadata*)},
		{"getEnclosingType", "()Ljavax/lang/model/type/TypeMirror;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(Type$ErrorType$1, getEnclosingType, $Type*)},
		{"getTypeArguments", "()Ljava/util/List;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(Type$ErrorType$1, getTypeArguments, $List*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.sun.tools.javac.code.Type$ErrorType",
		"cloneWithMetadata",
		"(Lcom/sun/tools/javac/code/TypeMetadata;)Lcom/sun/tools/javac/code/Type$ErrorType;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.code.Type$ErrorType", "com.sun.tools.javac.code.Type", "ErrorType", $PUBLIC | $STATIC},
		{"com.sun.tools.javac.code.Type$ErrorType$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.tools.javac.code.Type$ErrorType$1",
		"com.sun.tools.javac.code.Type$ErrorType",
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
	$loadClass(Type$ErrorType$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(Type$ErrorType$1));
	});
	return class$;
}

$Class* Type$ErrorType$1::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com