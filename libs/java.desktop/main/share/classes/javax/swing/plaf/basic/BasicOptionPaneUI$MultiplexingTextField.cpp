#include <javax/swing/plaf/basic/BasicOptionPaneUI$MultiplexingTextField.h>
#include <java/awt/event/KeyEvent.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JTextField.h>
#include <javax/swing/KeyStroke.h>
#include <javax/swing/plaf/basic/BasicOptionPaneUI.h>
#include <jcpp.h>

#undef WHEN_IN_FOCUSED_WINDOW

using $KeyStrokeArray = $Array<::javax::swing::KeyStroke>;
using $KeyEvent = ::java::awt::event::KeyEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $JTextField = ::javax::swing::JTextField;
using $KeyStroke = ::javax::swing::KeyStroke;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

void BasicOptionPaneUI$MultiplexingTextField::init$(int32_t cols) {
	$JTextField::init$(cols);
}

void BasicOptionPaneUI$MultiplexingTextField::setKeyStrokes($KeyStrokeArray* strokes) {
	$set(this, strokes, strokes);
}

bool BasicOptionPaneUI$MultiplexingTextField::processKeyBinding($KeyStroke* ks, $KeyEvent* e, int32_t condition, bool pressed) {
	bool processed = $JTextField::processKeyBinding(ks, e, condition, pressed);
	if (processed && condition != $JComponent::WHEN_IN_FOCUSED_WINDOW) {
		for (int32_t counter = $nc(this->strokes)->length - 1; counter >= 0; --counter) {
			if ($nc($nc(this->strokes)->get(counter))->equals(ks)) {
				return false;
			}
		}
	}
	return processed;
}

BasicOptionPaneUI$MultiplexingTextField::BasicOptionPaneUI$MultiplexingTextField() {
}

$Class* BasicOptionPaneUI$MultiplexingTextField::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"strokes", "[Ljavax/swing/KeyStroke;", nullptr, $PRIVATE, $field(BasicOptionPaneUI$MultiplexingTextField, strokes)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(I)V", nullptr, 0, $method(BasicOptionPaneUI$MultiplexingTextField, init$, void, int32_t)},
		{"processKeyBinding", "(Ljavax/swing/KeyStroke;Ljava/awt/event/KeyEvent;IZ)Z", nullptr, $PROTECTED, $virtualMethod(BasicOptionPaneUI$MultiplexingTextField, processKeyBinding, bool, $KeyStroke*, $KeyEvent*, int32_t, bool)},
		{"setKeyStrokes", "([Ljavax/swing/KeyStroke;)V", nullptr, 0, $virtualMethod(BasicOptionPaneUI$MultiplexingTextField, setKeyStrokes, void, $KeyStrokeArray*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.plaf.basic.BasicOptionPaneUI$MultiplexingTextField", "javax.swing.plaf.basic.BasicOptionPaneUI", "MultiplexingTextField", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.plaf.basic.BasicOptionPaneUI$MultiplexingTextField",
		"javax.swing.JTextField",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.plaf.basic.BasicOptionPaneUI"
	};
	$loadClass(BasicOptionPaneUI$MultiplexingTextField, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(BasicOptionPaneUI$MultiplexingTextField));
	});
	return class$;
}

$Class* BasicOptionPaneUI$MultiplexingTextField::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax