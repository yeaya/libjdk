#include <com/sun/tools/javac/comp/Infer$PropagateBounds.h>
#include <com/sun/tools/javac/code/Type$UndetVar$InferenceBound.h>
#include <com/sun/tools/javac/code/Type$UndetVar.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/TypeTag.h>
#include <com/sun/tools/javac/code/Types.h>
#include <com/sun/tools/javac/comp/Infer$IncorporationAction.h>
#include <com/sun/tools/javac/comp/Infer.h>
#include <com/sun/tools/javac/comp/InferenceContext.h>
#include <com/sun/tools/javac/util/List.h>
#include <com/sun/tools/javac/util/Warner.h>
#include <java/util/EnumSet.h>
#include <java/util/Iterator.h>
#include <java/util/Set.h>
#include <jcpp.h>

#undef EQ
#undef UNDETVAR

using $Type$UndetVar$InferenceBoundArray = $Array<::com::sun::tools::javac::code::Type$UndetVar$InferenceBound>;
using $Type = ::com::sun::tools::javac::code::Type;
using $Type$UndetVar = ::com::sun::tools::javac::code::Type$UndetVar;
using $Type$UndetVar$InferenceBound = ::com::sun::tools::javac::code::Type$UndetVar$InferenceBound;
using $TypeTag = ::com::sun::tools::javac::code::TypeTag;
using $Infer = ::com::sun::tools::javac::comp::Infer;
using $Infer$IncorporationAction = ::com::sun::tools::javac::comp::Infer$IncorporationAction;
using $InferenceContext = ::com::sun::tools::javac::comp::InferenceContext;
using $Warner = ::com::sun::tools::javac::util::Warner;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $EnumSet = ::java::util::EnumSet;
using $Iterator = ::java::util::Iterator;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

void Infer$PropagateBounds::init$($Infer* this$0, $Type$UndetVar* uv, $Type* t, $Type$UndetVar$InferenceBound* ib) {
	$set(this, this$0, this$0);
	$Infer$IncorporationAction::init$(this$0, uv, t);
	$set(this, ib, ib);
}

$Infer$IncorporationAction* Infer$PropagateBounds::dup($Type$UndetVar* that) {
	return $new(Infer$PropagateBounds, this->this$0, that, this->t, this->ib);
}

void Infer$PropagateBounds::apply($InferenceContext* inferenceContext, $Warner* warner) {
	$useLocalObjectStack();
	$var($Type, undetT, $nc(inferenceContext)->asUndetVar(this->t));
	$init($TypeTag);
	bool var$0 = $nc(undetT)->hasTag($TypeTag::UNDETVAR);
	if (var$0 && !$cast($Type$UndetVar, undetT)->isCaptured()) {
		$var($Type$UndetVar, uv2, $cast($Type$UndetVar, undetT));
		uv2->addBound($($nc(this->ib)->complement()), this->uv, this->this$0->types);
		{
			$var($Iterator, i$, $$nc(backwards())->iterator());
			for (; $nc(i$)->hasNext();) {
				$Type$UndetVar$InferenceBound* ib2 = $cast($Type$UndetVar$InferenceBound, i$->next());
				{
					$var($Iterator, i$, $$nc(uv2->getBounds($$new($Type$UndetVar$InferenceBoundArray, {ib2})))->iterator());
					for (; $nc(i$)->hasNext();) {
						$var($Type, b, $cast($Type, i$->next()));
						{
							$nc(this->uv)->addBound(ib2, b, this->this$0->types);
						}
					}
				}
			}
		}
	}
	{
		$var($Iterator, i$, $$nc(forward())->iterator());
		for (; $nc(i$)->hasNext();) {
			$Type$UndetVar$InferenceBound* ib2 = $cast($Type$UndetVar$InferenceBound, i$->next());
			{
				$var($Iterator, i$, $$nc($nc(this->uv)->getBounds($$new($Type$UndetVar$InferenceBoundArray, {ib2})))->iterator());
				for (; $nc(i$)->hasNext();) {
					$var($Type, l, $cast($Type, i$->next()));
					{
						$var($Type, undet, inferenceContext->asUndetVar(l));
						bool var$1 = $nc(undet)->hasTag($TypeTag::UNDETVAR);
						if (var$1 && !$cast($Type$UndetVar, undet)->isCaptured()) {
							$var($Type$UndetVar, uv2, $cast($Type$UndetVar, undet));
							uv2->addBound(this->ib, $(inferenceContext->asInstType(this->t)), this->this$0->types);
						}
					}
				}
			}
		}
	}
}

$EnumSet* Infer$PropagateBounds::forward() {
	$init($Type$UndetVar$InferenceBound);
	return (this->ib == $Type$UndetVar$InferenceBound::EQ) ? $EnumSet::of($Type$UndetVar$InferenceBound::EQ) : $EnumSet::complementOf($($EnumSet::of(this->ib)));
}

$EnumSet* Infer$PropagateBounds::backwards() {
	$init($Type$UndetVar$InferenceBound);
	return (this->ib == $Type$UndetVar$InferenceBound::EQ) ? $EnumSet::allOf($Type$UndetVar$InferenceBound::class$) : $EnumSet::of(this->ib);
}

$String* Infer$PropagateBounds::toString() {
	$useLocalObjectStack();
	return $String::format("%s[undet=%s,t=%s,bound=%s]"_s, $$new($ObjectArray, {
		$($of(this)->getClass()->getSimpleName()),
		$nc(this->uv)->qtype,
		this->t,
		this->ib
	}));
}

Infer$PropagateBounds::Infer$PropagateBounds() {
}

$Class* Infer$PropagateBounds::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/tools/javac/comp/Infer;", nullptr, $FINAL | $SYNTHETIC, $field(Infer$PropagateBounds, this$0)},
		{"ib", "Lcom/sun/tools/javac/code/Type$UndetVar$InferenceBound;", nullptr, 0, $field(Infer$PropagateBounds, ib)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/tools/javac/comp/Infer;Lcom/sun/tools/javac/code/Type$UndetVar;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Type$UndetVar$InferenceBound;)V", nullptr, $PUBLIC, $method(Infer$PropagateBounds, init$, void, $Infer*, $Type$UndetVar*, $Type*, $Type$UndetVar$InferenceBound*)},
		{"apply", "(Lcom/sun/tools/javac/comp/InferenceContext;Lcom/sun/tools/javac/util/Warner;)V", nullptr, 0, $virtualMethod(Infer$PropagateBounds, apply, void, $InferenceContext*, $Warner*)},
		{"backwards", "()Ljava/util/EnumSet;", "()Ljava/util/EnumSet<Lcom/sun/tools/javac/code/Type$UndetVar$InferenceBound;>;", 0, $virtualMethod(Infer$PropagateBounds, backwards, $EnumSet*)},
		{"dup", "(Lcom/sun/tools/javac/code/Type$UndetVar;)Lcom/sun/tools/javac/comp/Infer$IncorporationAction;", nullptr, $PUBLIC, $virtualMethod(Infer$PropagateBounds, dup, $Infer$IncorporationAction*, $Type$UndetVar*)},
		{"forward", "()Ljava/util/EnumSet;", "()Ljava/util/EnumSet<Lcom/sun/tools/javac/code/Type$UndetVar$InferenceBound;>;", 0, $virtualMethod(Infer$PropagateBounds, forward, $EnumSet*)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(Infer$PropagateBounds, toString, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.comp.Infer$PropagateBounds", "com.sun.tools.javac.comp.Infer", "PropagateBounds", 0},
		{"com.sun.tools.javac.comp.Infer$IncorporationAction", "com.sun.tools.javac.comp.Infer", "IncorporationAction", $PUBLIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.tools.javac.comp.Infer$PropagateBounds",
		"com.sun.tools.javac.comp.Infer$IncorporationAction",
		nullptr,
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
	$loadClass(Infer$PropagateBounds, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Infer$PropagateBounds);
	});
	return class$;
}

$Class* Infer$PropagateBounds::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com