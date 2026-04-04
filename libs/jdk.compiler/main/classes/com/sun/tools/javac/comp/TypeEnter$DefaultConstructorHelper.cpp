#include <com/sun/tools/javac/comp/TypeEnter$DefaultConstructorHelper.h>
#include <com/sun/tools/javac/code/Symbol$MethodSymbol.h>
#include <com/sun/tools/javac/code/Symbol$TypeSymbol.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/comp/TypeEnter.h>
#include <com/sun/tools/javac/tree/JCTree$JCMethodDecl.h>
#include <com/sun/tools/javac/util/List.h>
#include <jcpp.h>

using $Symbol$MethodSymbol = ::com::sun::tools::javac::code::Symbol$MethodSymbol;
using $Symbol$TypeSymbol = ::com::sun::tools::javac::code::Symbol$TypeSymbol;
using $Type = ::com::sun::tools::javac::code::Type;
using $JCTree$JCMethodDecl = ::com::sun::tools::javac::tree::JCTree$JCMethodDecl;
using $List = ::com::sun::tools::javac::util::List;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

$JCTree$JCMethodDecl* TypeEnter$DefaultConstructorHelper::finalAdjustment($JCTree$JCMethodDecl* md) {
	return md;
}

$Class* TypeEnter$DefaultConstructorHelper::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"constructorSymbol", "()Lcom/sun/tools/javac/code/Symbol$MethodSymbol;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TypeEnter$DefaultConstructorHelper, constructorSymbol, $Symbol$MethodSymbol*)},
		{"constructorType", "()Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TypeEnter$DefaultConstructorHelper, constructorType, $Type*)},
		{"enclosingType", "()Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TypeEnter$DefaultConstructorHelper, enclosingType, $Type*)},
		{"finalAdjustment", "(Lcom/sun/tools/javac/tree/JCTree$JCMethodDecl;)Lcom/sun/tools/javac/tree/JCTree$JCMethodDecl;", nullptr, $PUBLIC, $virtualMethod(TypeEnter$DefaultConstructorHelper, finalAdjustment, $JCTree$JCMethodDecl*, $JCTree$JCMethodDecl*)},
		{"owner", "()Lcom/sun/tools/javac/code/Symbol$TypeSymbol;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TypeEnter$DefaultConstructorHelper, owner, $Symbol$TypeSymbol*)},
		{"superArgs", "()Lcom/sun/tools/javac/util/List;", "()Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/util/Name;>;", $PUBLIC | $ABSTRACT, $virtualMethod(TypeEnter$DefaultConstructorHelper, superArgs, $List*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.comp.TypeEnter$DefaultConstructorHelper", "com.sun.tools.javac.comp.TypeEnter", "DefaultConstructorHelper", $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$INTERFACE | $ABSTRACT,
		"com.sun.tools.javac.comp.TypeEnter$DefaultConstructorHelper",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.tools.javac.comp.TypeEnter"
	};
	$loadClass(TypeEnter$DefaultConstructorHelper, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TypeEnter$DefaultConstructorHelper);
	});
	return class$;
}

$Class* TypeEnter$DefaultConstructorHelper::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com