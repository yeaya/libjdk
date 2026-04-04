#include <com/sun/tools/javac/comp/Annotate$AnnotationValueContext.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/TypeTag.h>
#include <com/sun/tools/javac/comp/Annotate.h>
#include <com/sun/tools/javac/comp/Check$CheckContext.h>
#include <com/sun/tools/javac/comp/Check$NestedCheckContext.h>
#include <com/sun/tools/javac/util/Warner.h>
#include <jcpp.h>

#undef NONE

using $Type = ::com::sun::tools::javac::code::Type;
using $TypeTag = ::com::sun::tools::javac::code::TypeTag;
using $Annotate = ::com::sun::tools::javac::comp::Annotate;
using $Check$CheckContext = ::com::sun::tools::javac::comp::Check$CheckContext;
using $Check$NestedCheckContext = ::com::sun::tools::javac::comp::Check$NestedCheckContext;
using $Warner = ::com::sun::tools::javac::util::Warner;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

void Annotate$AnnotationValueContext::init$($Annotate* this$0, $Check$CheckContext* enclosingContext) {
	$set(this, this$0, this$0);
	$Check$NestedCheckContext::init$(enclosingContext);
}

bool Annotate$AnnotationValueContext::compatible($Type* found, $Type* req, $Warner* warn) {
	$init($TypeTag);
	bool var$0 = $nc(found)->hasTag($TypeTag::NONE);
	return var$0 || $Check$NestedCheckContext::compatible(found, req, warn);
}

Annotate$AnnotationValueContext::Annotate$AnnotationValueContext() {
}

$Class* Annotate$AnnotationValueContext::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/tools/javac/comp/Annotate;", nullptr, $FINAL | $SYNTHETIC, $field(Annotate$AnnotationValueContext, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/tools/javac/comp/Annotate;Lcom/sun/tools/javac/comp/Check$CheckContext;)V", nullptr, 0, $method(Annotate$AnnotationValueContext, init$, void, $Annotate*, $Check$CheckContext*)},
		{"compatible", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/Warner;)Z", nullptr, $PUBLIC, $virtualMethod(Annotate$AnnotationValueContext, compatible, bool, $Type*, $Type*, $Warner*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.comp.Annotate$AnnotationValueContext", "com.sun.tools.javac.comp.Annotate", "AnnotationValueContext", 0},
		{"com.sun.tools.javac.comp.Check$NestedCheckContext", "com.sun.tools.javac.comp.Check", "NestedCheckContext", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.tools.javac.comp.Annotate$AnnotationValueContext",
		"com.sun.tools.javac.comp.Check$NestedCheckContext",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.tools.javac.comp.Annotate"
	};
	$loadClass(Annotate$AnnotationValueContext, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Annotate$AnnotationValueContext);
	});
	return class$;
}

$Class* Annotate$AnnotationValueContext::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com