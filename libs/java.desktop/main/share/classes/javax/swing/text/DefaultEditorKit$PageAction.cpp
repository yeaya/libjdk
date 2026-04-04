#include <javax/swing/text/DefaultEditorKit$PageAction.h>
#include <java/awt/Point.h>
#include <java/awt/Rectangle.h>
#include <java/awt/event/ActionEvent.h>
#include <java/lang/Math.h>
#include <javax/swing/text/DefaultEditorKit.h>
#include <javax/swing/text/Document.h>
#include <javax/swing/text/JTextComponent.h>
#include <javax/swing/text/TextAction.h>
#include <jcpp.h>

using $Point = ::java::awt::Point;
using $Rectangle = ::java::awt::Rectangle;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $Document = ::javax::swing::text::Document;
using $JTextComponent = ::javax::swing::text::JTextComponent;
using $TextAction = ::javax::swing::text::TextAction;

namespace javax {
	namespace swing {
		namespace text {

void DefaultEditorKit$PageAction::init$($String* nm, bool left, bool select) {
	$TextAction::init$(nm);
	this->select = select;
	this->left = left;
}

void DefaultEditorKit$PageAction::actionPerformed($ActionEvent* e) {
	$useLocalObjectStack();
	$var($JTextComponent, target, getTextComponent(e));
	if (target != nullptr) {
		int32_t selectedIndex = 0;
		$var($Rectangle, visible, $new($Rectangle));
		target->computeVisibleRect(visible);
		if (this->left) {
			visible->x = $Math::max(0, visible->x - visible->width);
		} else {
			visible->x += visible->width;
		}
		selectedIndex = target->getCaretPosition();
		if (selectedIndex != -1) {
			if (this->left) {
				selectedIndex = target->viewToModel($$new($Point, visible->x, visible->y));
			} else {
				selectedIndex = target->viewToModel($$new($Point, visible->x + visible->width - 1, visible->y + visible->height - 1));
			}
			$var($Document, doc, target->getDocument());
			if ((selectedIndex != 0) && (selectedIndex > ($nc(doc)->getLength() - 1))) {
				selectedIndex = doc->getLength() - 1;
			} else if (selectedIndex < 0) {
				selectedIndex = 0;
			}
			if (this->select) {
				target->moveCaretPosition(selectedIndex);
			} else {
				target->setCaretPosition(selectedIndex);
			}
		}
	}
}

DefaultEditorKit$PageAction::DefaultEditorKit$PageAction() {
}

$Class* DefaultEditorKit$PageAction::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"select", "Z", nullptr, $PRIVATE, $field(DefaultEditorKit$PageAction, select)},
		{"left", "Z", nullptr, $PRIVATE, $field(DefaultEditorKit$PageAction, left)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;ZZ)V", nullptr, $PUBLIC, $method(DefaultEditorKit$PageAction, init$, void, $String*, bool, bool)},
		{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC, $virtualMethod(DefaultEditorKit$PageAction, actionPerformed, void, $ActionEvent*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.text.DefaultEditorKit$PageAction", "javax.swing.text.DefaultEditorKit", "PageAction", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.text.DefaultEditorKit$PageAction",
		"javax.swing.text.TextAction",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.text.DefaultEditorKit"
	};
	$loadClass(DefaultEditorKit$PageAction, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(DefaultEditorKit$PageAction));
	});
	return class$;
}

$Class* DefaultEditorKit$PageAction::class$ = nullptr;

		} // text
	} // swing
} // javax