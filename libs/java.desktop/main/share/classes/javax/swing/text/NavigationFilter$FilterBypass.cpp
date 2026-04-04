#include <javax/swing/text/NavigationFilter$FilterBypass.h>
#include <javax/swing/text/Caret.h>
#include <javax/swing/text/NavigationFilter.h>
#include <javax/swing/text/Position$Bias.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Caret = ::javax::swing::text::Caret;
using $Position$Bias = ::javax::swing::text::Position$Bias;

namespace javax {
	namespace swing {
		namespace text {

void NavigationFilter$FilterBypass::init$() {
}

NavigationFilter$FilterBypass::NavigationFilter$FilterBypass() {
}

$Class* NavigationFilter$FilterBypass::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PROTECTED, $method(NavigationFilter$FilterBypass, init$, void)},
		{"getCaret", "()Ljavax/swing/text/Caret;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(NavigationFilter$FilterBypass, getCaret, $Caret*)},
		{"moveDot", "(ILjavax/swing/text/Position$Bias;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(NavigationFilter$FilterBypass, moveDot, void, int32_t, $Position$Bias*)},
		{"setDot", "(ILjavax/swing/text/Position$Bias;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(NavigationFilter$FilterBypass, setDot, void, int32_t, $Position$Bias*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.text.NavigationFilter$FilterBypass", "javax.swing.text.NavigationFilter", "FilterBypass", $PUBLIC | $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER | $ABSTRACT,
		"javax.swing.text.NavigationFilter$FilterBypass",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.text.NavigationFilter"
	};
	$loadClass(NavigationFilter$FilterBypass, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(NavigationFilter$FilterBypass);
	});
	return class$;
}

$Class* NavigationFilter$FilterBypass::class$ = nullptr;

		} // text
	} // swing
} // javax