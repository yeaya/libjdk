#include <javax/swing/text/Keymap.h>

#include <javax/swing/Action.h>
#include <javax/swing/KeyStroke.h>
#include <jcpp.h>

using $ActionArray = $Array<::javax::swing::Action>;
using $KeyStrokeArray = $Array<::javax::swing::KeyStroke>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Action = ::javax::swing::Action;
using $KeyStroke = ::javax::swing::KeyStroke;

namespace javax {
	namespace swing {
		namespace text {

$MethodInfo _Keymap_MethodInfo_[] = {
	{"addActionForKeyStroke", "(Ljavax/swing/KeyStroke;Ljavax/swing/Action;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Keymap, addActionForKeyStroke, void, $KeyStroke*, $Action*)},
	{"getAction", "(Ljavax/swing/KeyStroke;)Ljavax/swing/Action;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Keymap, getAction, $Action*, $KeyStroke*)},
	{"getBoundActions", "()[Ljavax/swing/Action;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Keymap, getBoundActions, $ActionArray*)},
	{"getBoundKeyStrokes", "()[Ljavax/swing/KeyStroke;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Keymap, getBoundKeyStrokes, $KeyStrokeArray*)},
	{"getDefaultAction", "()Ljavax/swing/Action;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Keymap, getDefaultAction, $Action*)},
	{"getKeyStrokesForAction", "(Ljavax/swing/Action;)[Ljavax/swing/KeyStroke;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Keymap, getKeyStrokesForAction, $KeyStrokeArray*, $Action*)},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Keymap, getName, $String*)},
	{"getResolveParent", "()Ljavax/swing/text/Keymap;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Keymap, getResolveParent, Keymap*)},
	{"isLocallyDefined", "(Ljavax/swing/KeyStroke;)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Keymap, isLocallyDefined, bool, $KeyStroke*)},
	{"removeBindings", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Keymap, removeBindings, void)},
	{"removeKeyStrokeBinding", "(Ljavax/swing/KeyStroke;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Keymap, removeKeyStrokeBinding, void, $KeyStroke*)},
	{"setDefaultAction", "(Ljavax/swing/Action;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Keymap, setDefaultAction, void, $Action*)},
	{"setResolveParent", "(Ljavax/swing/text/Keymap;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Keymap, setResolveParent, void, Keymap*)},
	{}
};

$ClassInfo _Keymap_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.swing.text.Keymap",
	nullptr,
	nullptr,
	nullptr,
	_Keymap_MethodInfo_
};

$Object* allocate$Keymap($Class* clazz) {
	return $of($alloc(Keymap));
}

$Class* Keymap::load$($String* name, bool initialize) {
	$loadClass(Keymap, name, initialize, &_Keymap_ClassInfo_, allocate$Keymap);
	return class$;
}

$Class* Keymap::class$ = nullptr;

		} // text
	} // swing
} // javax