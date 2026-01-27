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

$MethodInfo _NavigationFilter$FilterBypass_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PROTECTED, $method(NavigationFilter$FilterBypass, init$, void)},
	{"getCaret", "()Ljavax/swing/text/Caret;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(NavigationFilter$FilterBypass, getCaret, $Caret*)},
	{"moveDot", "(ILjavax/swing/text/Position$Bias;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(NavigationFilter$FilterBypass, moveDot, void, int32_t, $Position$Bias*)},
	{"setDot", "(ILjavax/swing/text/Position$Bias;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(NavigationFilter$FilterBypass, setDot, void, int32_t, $Position$Bias*)},
	{}
};

$InnerClassInfo _NavigationFilter$FilterBypass_InnerClassesInfo_[] = {
	{"javax.swing.text.NavigationFilter$FilterBypass", "javax.swing.text.NavigationFilter", "FilterBypass", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _NavigationFilter$FilterBypass_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"javax.swing.text.NavigationFilter$FilterBypass",
	"java.lang.Object",
	nullptr,
	nullptr,
	_NavigationFilter$FilterBypass_MethodInfo_,
	nullptr,
	nullptr,
	_NavigationFilter$FilterBypass_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.text.NavigationFilter"
};

$Object* allocate$NavigationFilter$FilterBypass($Class* clazz) {
	return $of($alloc(NavigationFilter$FilterBypass));
}

void NavigationFilter$FilterBypass::init$() {
}

NavigationFilter$FilterBypass::NavigationFilter$FilterBypass() {
}

$Class* NavigationFilter$FilterBypass::load$($String* name, bool initialize) {
	$loadClass(NavigationFilter$FilterBypass, name, initialize, &_NavigationFilter$FilterBypass_ClassInfo_, allocate$NavigationFilter$FilterBypass);
	return class$;
}

$Class* NavigationFilter$FilterBypass::class$ = nullptr;

		} // text
	} // swing
} // javax