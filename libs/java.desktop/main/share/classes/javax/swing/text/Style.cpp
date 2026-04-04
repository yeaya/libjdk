#include <javax/swing/text/Style.h>
#include <javax/swing/event/ChangeListener.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ChangeListener = ::javax::swing::event::ChangeListener;

namespace javax {
	namespace swing {
		namespace text {

$Class* Style::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"addChangeListener", "(Ljavax/swing/event/ChangeListener;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Style, addChangeListener, void, $ChangeListener*)},
		{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Style, getName, $String*)},
		{"removeChangeListener", "(Ljavax/swing/event/ChangeListener;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Style, removeChangeListener, void, $ChangeListener*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"javax.swing.text.Style",
		nullptr,
		"javax.swing.text.MutableAttributeSet",
		nullptr,
		methodInfos$$
	};
	$loadClass(Style, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Style);
	});
	return class$;
}

$Class* Style::class$ = nullptr;

		} // text
	} // swing
} // javax