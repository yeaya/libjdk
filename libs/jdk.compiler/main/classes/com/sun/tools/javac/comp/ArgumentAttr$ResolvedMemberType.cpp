#include <com/sun/tools/javac/comp/ArgumentAttr$ResolvedMemberType.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/TypeTag.h>
#include <com/sun/tools/javac/comp/ArgumentAttr$ArgumentType.h>
#include <com/sun/tools/javac/comp/ArgumentAttr.h>
#include <com/sun/tools/javac/comp/Attr$ResultInfo.h>
#include <com/sun/tools/javac/comp/DeferredAttr$DeferredAttrContext.h>
#include <com/sun/tools/javac/comp/DeferredAttr$DeferredType.h>
#include <com/sun/tools/javac/comp/Env.h>
#include <com/sun/tools/javac/comp/Infer$PartiallyInferredMethodType.h>
#include <com/sun/tools/javac/tree/JCTree$JCExpression.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <com/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition.h>
#include <java/util/Map.h>
#include <jcpp.h>

#undef METHOD

using $Type = ::com::sun::tools::javac::code::Type;
using $TypeTag = ::com::sun::tools::javac::code::TypeTag;
using $ArgumentAttr = ::com::sun::tools::javac::comp::ArgumentAttr;
using $ArgumentAttr$ArgumentType = ::com::sun::tools::javac::comp::ArgumentAttr$ArgumentType;
using $Attr$ResultInfo = ::com::sun::tools::javac::comp::Attr$ResultInfo;
using $DeferredAttr$DeferredAttrContext = ::com::sun::tools::javac::comp::DeferredAttr$DeferredAttrContext;
using $Env = ::com::sun::tools::javac::comp::Env;
using $Infer$PartiallyInferredMethodType = ::com::sun::tools::javac::comp::Infer$PartiallyInferredMethodType;
using $JCTree$JCExpression = ::com::sun::tools::javac::tree::JCTree$JCExpression;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Map = ::java::util::Map;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

void ArgumentAttr$ResolvedMemberType::init$($ArgumentAttr* this$0, $JCTree$JCExpression* tree, $Env* env, $JCTree$JCExpression* speculativeMethod, $Map* speculativeTypes) {
	$set(this, this$0, this$0);
	$ArgumentAttr$ArgumentType::init$(this$0, tree, env, speculativeMethod, speculativeTypes);
}

$Type* ArgumentAttr$ResolvedMemberType::overloadCheck($Attr$ResultInfo* resultInfo, $DeferredAttr$DeferredAttrContext* deferredAttrContext) {
	$useLocalObjectStack();
	$var($Type, mtype, methodType());
	$var($Attr$ResultInfo, localInfo, this->resultInfo(resultInfo));
	$var($Type, t, nullptr);
	$init($TypeTag);
	bool var$0 = mtype != nullptr && mtype->hasTag($TypeTag::METHOD);
	if (var$0 && mtype->isPartial()) {
		$assign(t, $cast($Infer$PartiallyInferredMethodType, mtype)->check(localInfo));
	} else {
		$assign(t, $nc(localInfo)->check($($nc(this->tree)->pos()), $nc(this->speculativeTree$)->type));
	}
	$nc(this->speculativeTypes)->put(localInfo, t);
	return t;
}

ArgumentAttr$ResolvedMemberType::ArgumentAttr$ResolvedMemberType() {
}

$Class* ArgumentAttr$ResolvedMemberType::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/tools/javac/comp/ArgumentAttr;", nullptr, $FINAL | $SYNTHETIC, $field(ArgumentAttr$ResolvedMemberType, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/tools/javac/comp/ArgumentAttr;Lcom/sun/tools/javac/tree/JCTree$JCExpression;Lcom/sun/tools/javac/comp/Env;Lcom/sun/tools/javac/tree/JCTree$JCExpression;Ljava/util/Map;)V", "(Lcom/sun/tools/javac/tree/JCTree$JCExpression;Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;TE;Ljava/util/Map<Lcom/sun/tools/javac/comp/Attr$ResultInfo;Lcom/sun/tools/javac/code/Type;>;)V", $PUBLIC, $method(ArgumentAttr$ResolvedMemberType, init$, void, $ArgumentAttr*, $JCTree$JCExpression*, $Env*, $JCTree$JCExpression*, $Map*)},
		{"methodType", "()Lcom/sun/tools/javac/code/Type;", nullptr, $ABSTRACT, $virtualMethod(ArgumentAttr$ResolvedMemberType, methodType, $Type*)},
		{"overloadCheck", "(Lcom/sun/tools/javac/comp/Attr$ResultInfo;Lcom/sun/tools/javac/comp/DeferredAttr$DeferredAttrContext;)Lcom/sun/tools/javac/code/Type;", nullptr, 0, $virtualMethod(ArgumentAttr$ResolvedMemberType, overloadCheck, $Type*, $Attr$ResultInfo*, $DeferredAttr$DeferredAttrContext*)},
		{"resultInfo", "(Lcom/sun/tools/javac/comp/Attr$ResultInfo;)Lcom/sun/tools/javac/comp/Attr$ResultInfo;", nullptr, $ABSTRACT, $virtualMethod(ArgumentAttr$ResolvedMemberType, resultInfo, $Attr$ResultInfo*, $Attr$ResultInfo*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.comp.ArgumentAttr$ResolvedMemberType", "com.sun.tools.javac.comp.ArgumentAttr", "ResolvedMemberType", $ABSTRACT},
		{"com.sun.tools.javac.comp.ArgumentAttr$ArgumentType", "com.sun.tools.javac.comp.ArgumentAttr", "ArgumentType", $ABSTRACT},
		{"com.sun.tools.javac.tree.JCTree$JCExpression", "com.sun.tools.javac.tree.JCTree", "JCExpression", $PUBLIC | $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $ABSTRACT,
		"com.sun.tools.javac.comp.ArgumentAttr$ResolvedMemberType",
		"com.sun.tools.javac.comp.ArgumentAttr$ArgumentType",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"<E:Lcom/sun/tools/javac/tree/JCTree$JCExpression;>Lcom/sun/tools/javac/comp/ArgumentAttr$ArgumentType<TE;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.tools.javac.comp.ArgumentAttr"
	};
	$loadClass(ArgumentAttr$ResolvedMemberType, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(ArgumentAttr$ResolvedMemberType));
	});
	return class$;
}

$Class* ArgumentAttr$ResolvedMemberType::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com