#include <javax/swing/plaf/synth/SynthScrollPaneUI$ViewportViewFocusHandler.h>
#include <java/awt/Component.h>
#include <java/awt/event/ContainerEvent.h>
#include <java/awt/event/ContainerListener.h>
#include <java/awt/event/FocusEvent.h>
#include <javax/swing/JScrollPane.h>
#include <javax/swing/plaf/synth/SynthScrollPaneUI.h>
#include <javax/swing/text/JTextComponent.h>
#include <jcpp.h>

using $ContainerEvent = ::java::awt::event::ContainerEvent;
using $ContainerListener = ::java::awt::event::ContainerListener;
using $FocusEvent = ::java::awt::event::FocusEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SynthScrollPaneUI = ::javax::swing::plaf::synth::SynthScrollPaneUI;
using $JTextComponent = ::javax::swing::text::JTextComponent;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace synth {

int32_t SynthScrollPaneUI$ViewportViewFocusHandler::hashCode() {
	return this->$ContainerListener::hashCode();
}

bool SynthScrollPaneUI$ViewportViewFocusHandler::equals(Object$* arg0) {
	return this->$ContainerListener::equals(arg0);
}

$Object* SynthScrollPaneUI$ViewportViewFocusHandler::clone() {
	return this->$ContainerListener::clone();
}

$String* SynthScrollPaneUI$ViewportViewFocusHandler::toString() {
	return this->$ContainerListener::toString();
}

void SynthScrollPaneUI$ViewportViewFocusHandler::finalize() {
	this->$ContainerListener::finalize();
}

void SynthScrollPaneUI$ViewportViewFocusHandler::init$($SynthScrollPaneUI* this$0) {
	$set(this, this$0, this$0);
}

void SynthScrollPaneUI$ViewportViewFocusHandler::componentAdded($ContainerEvent* e) {
	$useLocalObjectStack();
	if ($instanceOf($JTextComponent, $($nc(e)->getChild()))) {
		$$nc(e->getChild())->addFocusListener(this);
		this->this$0->viewportViewHasFocus = $$nc(e->getChild())->isFocusOwner();
		$$nc($SynthScrollPaneUI::access$000(this->this$0))->repaint();
	}
}

void SynthScrollPaneUI$ViewportViewFocusHandler::componentRemoved($ContainerEvent* e) {
	$useLocalObjectStack();
	if ($instanceOf($JTextComponent, $($nc(e)->getChild()))) {
		$$nc(e->getChild())->removeFocusListener(this);
	}
}

void SynthScrollPaneUI$ViewportViewFocusHandler::focusGained($FocusEvent* e) {
	this->this$0->viewportViewHasFocus = true;
	$$nc($SynthScrollPaneUI::access$100(this->this$0))->repaint();
}

void SynthScrollPaneUI$ViewportViewFocusHandler::focusLost($FocusEvent* e) {
	this->this$0->viewportViewHasFocus = false;
	$$nc($SynthScrollPaneUI::access$200(this->this$0))->repaint();
}

SynthScrollPaneUI$ViewportViewFocusHandler::SynthScrollPaneUI$ViewportViewFocusHandler() {
}

$Class* SynthScrollPaneUI$ViewportViewFocusHandler::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/swing/plaf/synth/SynthScrollPaneUI;", nullptr, $FINAL | $SYNTHETIC, $field(SynthScrollPaneUI$ViewportViewFocusHandler, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
		{"<init>", "(Ljavax/swing/plaf/synth/SynthScrollPaneUI;)V", nullptr, $PRIVATE, $method(SynthScrollPaneUI$ViewportViewFocusHandler, init$, void, $SynthScrollPaneUI*)},
		{"componentAdded", "(Ljava/awt/event/ContainerEvent;)V", nullptr, $PUBLIC, $virtualMethod(SynthScrollPaneUI$ViewportViewFocusHandler, componentAdded, void, $ContainerEvent*)},
		{"componentRemoved", "(Ljava/awt/event/ContainerEvent;)V", nullptr, $PUBLIC, $virtualMethod(SynthScrollPaneUI$ViewportViewFocusHandler, componentRemoved, void, $ContainerEvent*)},
		{"focusGained", "(Ljava/awt/event/FocusEvent;)V", nullptr, $PUBLIC, $virtualMethod(SynthScrollPaneUI$ViewportViewFocusHandler, focusGained, void, $FocusEvent*)},
		{"focusLost", "(Ljava/awt/event/FocusEvent;)V", nullptr, $PUBLIC, $virtualMethod(SynthScrollPaneUI$ViewportViewFocusHandler, focusLost, void, $FocusEvent*)},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.plaf.synth.SynthScrollPaneUI$ViewportViewFocusHandler", "javax.swing.plaf.synth.SynthScrollPaneUI", "ViewportViewFocusHandler", $PRIVATE},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.plaf.synth.SynthScrollPaneUI$ViewportViewFocusHandler",
		"java.lang.Object",
		"java.awt.event.ContainerListener,java.awt.event.FocusListener",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.plaf.synth.SynthScrollPaneUI"
	};
	$loadClass(SynthScrollPaneUI$ViewportViewFocusHandler, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(SynthScrollPaneUI$ViewportViewFocusHandler));
	});
	return class$;
}

$Class* SynthScrollPaneUI$ViewportViewFocusHandler::class$ = nullptr;

			} // synth
		} // plaf
	} // swing
} // javax