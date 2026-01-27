#include <javax/swing/text/Caret.h>

#include <java/awt/Graphics.h>
#include <java/awt/Point.h>
#include <javax/swing/event/ChangeListener.h>
#include <javax/swing/text/JTextComponent.h>
#include <jcpp.h>

using $Graphics = ::java::awt::Graphics;
using $Point = ::java::awt::Point;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ChangeListener = ::javax::swing::event::ChangeListener;
using $JTextComponent = ::javax::swing::text::JTextComponent;

namespace javax {
	namespace swing {
		namespace text {

$MethodInfo _Caret_MethodInfo_[] = {
	{"addChangeListener", "(Ljavax/swing/event/ChangeListener;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Caret, addChangeListener, void, $ChangeListener*)},
	{"deinstall", "(Ljavax/swing/text/JTextComponent;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Caret, deinstall, void, $JTextComponent*)},
	{"getBlinkRate", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Caret, getBlinkRate, int32_t)},
	{"getDot", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Caret, getDot, int32_t)},
	{"getMagicCaretPosition", "()Ljava/awt/Point;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Caret, getMagicCaretPosition, $Point*)},
	{"getMark", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Caret, getMark, int32_t)},
	{"install", "(Ljavax/swing/text/JTextComponent;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Caret, install, void, $JTextComponent*)},
	{"isSelectionVisible", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Caret, isSelectionVisible, bool)},
	{"isVisible", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Caret, isVisible, bool)},
	{"moveDot", "(I)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Caret, moveDot, void, int32_t)},
	{"paint", "(Ljava/awt/Graphics;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Caret, paint, void, $Graphics*)},
	{"removeChangeListener", "(Ljavax/swing/event/ChangeListener;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Caret, removeChangeListener, void, $ChangeListener*)},
	{"setBlinkRate", "(I)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Caret, setBlinkRate, void, int32_t)},
	{"setDot", "(I)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Caret, setDot, void, int32_t)},
	{"setMagicCaretPosition", "(Ljava/awt/Point;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Caret, setMagicCaretPosition, void, $Point*)},
	{"setSelectionVisible", "(Z)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Caret, setSelectionVisible, void, bool)},
	{"setVisible", "(Z)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Caret, setVisible, void, bool)},
	{}
};

$ClassInfo _Caret_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.swing.text.Caret",
	nullptr,
	nullptr,
	nullptr,
	_Caret_MethodInfo_
};

$Object* allocate$Caret($Class* clazz) {
	return $of($alloc(Caret));
}

$Class* Caret::load$($String* name, bool initialize) {
	$loadClass(Caret, name, initialize, &_Caret_ClassInfo_, allocate$Caret);
	return class$;
}

$Class* Caret::class$ = nullptr;

		} // text
	} // swing
} // javax