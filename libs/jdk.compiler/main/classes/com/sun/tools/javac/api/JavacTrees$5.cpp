#include <com/sun/tools/javac/api/JavacTrees$5.h>
#include <com/sun/tools/javac/api/JavacTrees.h>
#include <com/sun/tools/javac/code/Symbol$TypeSymbol.h>
#include <com/sun/tools/javac/code/Type$ClassType.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/TypeMetadata.h>
#include <com/sun/tools/javac/util/List.h>
#include <javax/lang/model/type/TypeKind.h>
#include <jcpp.h>

#undef DECLARED

using $JavacTrees = ::com::sun::tools::javac::api::JavacTrees;
using $Symbol$TypeSymbol = ::com::sun::tools::javac::code::Symbol$TypeSymbol;
using $Type = ::com::sun::tools::javac::code::Type;
using $Type$ClassType = ::com::sun::tools::javac::code::Type$ClassType;
using $TypeMetadata = ::com::sun::tools::javac::code::TypeMetadata;
using $List = ::com::sun::tools::javac::util::List;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $TypeKind = ::javax::lang::model::type::TypeKind;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace api {

void JavacTrees$5::init$($JavacTrees* this$0, $Type* outer, $List* typarams, $Symbol$TypeSymbol* tsym, $TypeMetadata* metadata, $Type$ClassType* val$classType) {
	$set(this, this$0, this$0);
	$set(this, val$classType, val$classType);
	$Type$ClassType::init$(outer, typarams, tsym, metadata);
}

$Type* JavacTrees$5::baseType() {
	return this->val$classType;
}

$TypeKind* JavacTrees$5::getKind() {
	$init($TypeKind);
	return $TypeKind::DECLARED;
}

JavacTrees$5::JavacTrees$5() {
}

$Class* JavacTrees$5::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/tools/javac/api/JavacTrees;", nullptr, $FINAL | $SYNTHETIC, $field(JavacTrees$5, this$0)},
		{"val$classType", "Lcom/sun/tools/javac/code/Type$ClassType;", nullptr, $FINAL | $SYNTHETIC, $field(JavacTrees$5, val$classType)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/tools/javac/api/JavacTrees;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/code/Symbol$TypeSymbol;Lcom/sun/tools/javac/code/TypeMetadata;Lcom/sun/tools/javac/code/Type$ClassType;)V", nullptr, 0, $method(JavacTrees$5, init$, void, $JavacTrees*, $Type*, $List*, $Symbol$TypeSymbol*, $TypeMetadata*, $Type$ClassType*)},
		{"baseType", "()Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC, $virtualMethod(JavacTrees$5, baseType, $Type*)},
		{"getKind", "()Ljavax/lang/model/type/TypeKind;", nullptr, $PUBLIC, $virtualMethod(JavacTrees$5, getKind, $TypeKind*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.sun.tools.javac.api.JavacTrees",
		"getOriginalType",
		"(Ljavax/lang/model/type/ErrorType;)Ljavax/lang/model/type/TypeMirror;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.api.JavacTrees$5", nullptr, nullptr, 0},
		{"com.sun.tools.javac.code.Type$ClassType", "com.sun.tools.javac.code.Type", "ClassType", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.tools.javac.api.JavacTrees$5",
		"com.sun.tools.javac.code.Type$ClassType",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.tools.javac.api.JavacTrees"
	};
	$loadClass(JavacTrees$5, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(JavacTrees$5));
	});
	return class$;
}

$Class* JavacTrees$5::class$ = nullptr;

				} // api
			} // javac
		} // tools
	} // sun
} // com