#include <com/sun/tools/javac/comp/DeferredAttr$3.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/TypeTag.h>
#include <com/sun/tools/javac/code/Types$TypeMapping.h>
#include <com/sun/tools/javac/comp/DeferredAttr$DeferredType.h>
#include <com/sun/tools/javac/comp/DeferredAttr.h>
#include <com/sun/tools/javac/comp/Env.h>
#include <com/sun/tools/javac/tree/JCTree$JCExpression.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <com/sun/tools/javac/tree/TreeCopier.h>
#include <jcpp.h>

#undef DEFERRED

using $Type = ::com::sun::tools::javac::code::Type;
using $TypeTag = ::com::sun::tools::javac::code::TypeTag;
using $Types$TypeMapping = ::com::sun::tools::javac::code::Types$TypeMapping;
using $DeferredAttr = ::com::sun::tools::javac::comp::DeferredAttr;
using $DeferredAttr$DeferredType = ::com::sun::tools::javac::comp::DeferredAttr$DeferredType;
using $JCTree$JCExpression = ::com::sun::tools::javac::tree::JCTree$JCExpression;
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
				namespace comp {

void DeferredAttr$3::init$($DeferredAttr* this$0) {
	$set(this, this$0, this$0);
	$Types$TypeMapping::init$();
}

$Type* DeferredAttr$3::visitType($Type* t, $Void* v) {
	$useLocalObjectStack();
	$init($TypeTag);
	if ($nc(t)->hasTag($TypeTag::DEFERRED)) {
		$var($DeferredAttr$DeferredType, dt, $cast($DeferredAttr$DeferredType, t));
		return $new($DeferredAttr$DeferredType, this->this$0, $$cast($JCTree$JCExpression, $nc(this->this$0->treeCopier)->copy(dt->tree)), dt->env);
	}
	return t;
}

$Object* DeferredAttr$3::visitType($Type* t, Object$* v) {
	return $of(this->visitType(t, $cast($Void, v)));
}

DeferredAttr$3::DeferredAttr$3() {
}

$Class* DeferredAttr$3::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/tools/javac/comp/DeferredAttr;", nullptr, $FINAL | $SYNTHETIC, $field(DeferredAttr$3, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/tools/javac/comp/DeferredAttr;)V", nullptr, 0, $method(DeferredAttr$3, init$, void, $DeferredAttr*)},
		{"visitType", "(Lcom/sun/tools/javac/code/Type;Ljava/lang/Void;)Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC, $virtualMethod(DeferredAttr$3, visitType, $Type*, $Type*, $Void*)},
		{"visitType", "(Lcom/sun/tools/javac/code/Type;Ljava/lang/Object;)Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(DeferredAttr$3, visitType, $Object*, $Type*, Object$*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.sun.tools.javac.comp.DeferredAttr",
		"<init>",
		"(Lcom/sun/tools/javac/util/Context;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.comp.DeferredAttr$3", nullptr, nullptr, 0},
		{"com.sun.tools.javac.code.Types$TypeMapping", "com.sun.tools.javac.code.Types", "TypeMapping", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.tools.javac.comp.DeferredAttr$3",
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
		"com.sun.tools.javac.comp.DeferredAttr"
	};
	$loadClass(DeferredAttr$3, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(DeferredAttr$3));
	});
	return class$;
}

$Class* DeferredAttr$3::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com