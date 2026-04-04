#include <com/sun/tools/javac/comp/Infer$AbstractIncorporationEngine.h>
#include <com/sun/tools/javac/code/Type$UndetVar$InferenceBound.h>
#include <com/sun/tools/javac/code/Type$UndetVar.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/comp/Infer$SubstBounds.h>
#include <com/sun/tools/javac/comp/Infer.h>
#include <com/sun/tools/javac/util/List.h>
#include <java/util/AbstractCollection.h>
#include <java/util/ArrayDeque.h>
#include <java/util/Collection.h>
#include <jcpp.h>

using $Type = ::com::sun::tools::javac::code::Type;
using $Type$UndetVar = ::com::sun::tools::javac::code::Type$UndetVar;
using $Type$UndetVar$InferenceBound = ::com::sun::tools::javac::code::Type$UndetVar$InferenceBound;
using $Infer = ::com::sun::tools::javac::comp::Infer;
using $Infer$SubstBounds = ::com::sun::tools::javac::comp::Infer$SubstBounds;
using $List = ::com::sun::tools::javac::util::List;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractCollection = ::java::util::AbstractCollection;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

void Infer$AbstractIncorporationEngine::init$($Infer* this$0) {
	$set(this, this$0, this$0);
}

void Infer$AbstractIncorporationEngine::varInstantiated($Type$UndetVar* uv) {
	$nc($nc(uv)->incorporationActions)->addFirst($$new($Infer$SubstBounds, this->this$0, uv));
}

void Infer$AbstractIncorporationEngine::varBoundChanged($Type$UndetVar* uv, $Type$UndetVar$InferenceBound* ib, $Type* bound, bool update) {
	if ($nc(uv)->isCaptured()) {
		return;
	}
	$nc(uv->incorporationActions)->addAll($$cast($AbstractCollection, getIncorporationActions(uv, ib, bound, update)));
}

Infer$AbstractIncorporationEngine::Infer$AbstractIncorporationEngine() {
}

$Class* Infer$AbstractIncorporationEngine::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/tools/javac/comp/Infer;", nullptr, $FINAL | $SYNTHETIC, $field(Infer$AbstractIncorporationEngine, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/tools/javac/comp/Infer;)V", nullptr, 0, $method(Infer$AbstractIncorporationEngine, init$, void, $Infer*)},
		{"getIncorporationActions", "(Lcom/sun/tools/javac/code/Type$UndetVar;Lcom/sun/tools/javac/code/Type$UndetVar$InferenceBound;Lcom/sun/tools/javac/code/Type;Z)Lcom/sun/tools/javac/util/List;", "(Lcom/sun/tools/javac/code/Type$UndetVar;Lcom/sun/tools/javac/code/Type$UndetVar$InferenceBound;Lcom/sun/tools/javac/code/Type;Z)Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/comp/Infer$IncorporationAction;>;", $ABSTRACT, $virtualMethod(Infer$AbstractIncorporationEngine, getIncorporationActions, $List*, $Type$UndetVar*, $Type$UndetVar$InferenceBound*, $Type*, bool)},
		{"varBoundChanged", "(Lcom/sun/tools/javac/code/Type$UndetVar;Lcom/sun/tools/javac/code/Type$UndetVar$InferenceBound;Lcom/sun/tools/javac/code/Type;Z)V", nullptr, $PUBLIC, $virtualMethod(Infer$AbstractIncorporationEngine, varBoundChanged, void, $Type$UndetVar*, $Type$UndetVar$InferenceBound*, $Type*, bool)},
		{"varInstantiated", "(Lcom/sun/tools/javac/code/Type$UndetVar;)V", nullptr, $PUBLIC, $virtualMethod(Infer$AbstractIncorporationEngine, varInstantiated, void, $Type$UndetVar*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.comp.Infer$AbstractIncorporationEngine", "com.sun.tools.javac.comp.Infer", "AbstractIncorporationEngine", $ABSTRACT},
		{"com.sun.tools.javac.code.Type$UndetVar", "com.sun.tools.javac.code.Type", "UndetVar", $PUBLIC | $STATIC},
		{"com.sun.tools.javac.code.Type$UndetVar$UndetVarListener", "com.sun.tools.javac.code.Type$UndetVar", "UndetVarListener", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $ABSTRACT,
		"com.sun.tools.javac.comp.Infer$AbstractIncorporationEngine",
		"java.lang.Object",
		"com.sun.tools.javac.code.Type$UndetVar$UndetVarListener",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.tools.javac.comp.Infer"
	};
	$loadClass(Infer$AbstractIncorporationEngine, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Infer$AbstractIncorporationEngine);
	});
	return class$;
}

$Class* Infer$AbstractIncorporationEngine::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com