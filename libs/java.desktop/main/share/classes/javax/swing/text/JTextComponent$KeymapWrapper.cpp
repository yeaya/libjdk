#include <javax/swing/text/JTextComponent$KeymapWrapper.h>
#include <java/awt/event/KeyEvent.h>
#include <javax/swing/Action.h>
#include <javax/swing/InputMap.h>
#include <javax/swing/KeyStroke.h>
#include <javax/swing/text/JTextComponent.h>
#include <javax/swing/text/Keymap.h>
#include <jcpp.h>

#undef CHAR_UNDEFINED

using $KeyStrokeArray = $Array<::javax::swing::KeyStroke>;
using $KeyEvent = ::java::awt::event::KeyEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $InputMap = ::javax::swing::InputMap;
using $KeyStroke = ::javax::swing::KeyStroke;
using $Keymap = ::javax::swing::text::Keymap;

namespace javax {
	namespace swing {
		namespace text {

$Object* JTextComponent$KeymapWrapper::DefaultActionKey = nullptr;

void JTextComponent$KeymapWrapper::init$($Keymap* keymap) {
	$InputMap::init$();
	$set(this, keymap, keymap);
}

$KeyStrokeArray* JTextComponent$KeymapWrapper::keys() {
	$useLocalObjectStack();
	$var($KeyStrokeArray, sKeys, $InputMap::keys());
	$var($KeyStrokeArray, keymapKeys, $nc(this->keymap)->getBoundKeyStrokes());
	int32_t sCount = (sKeys == nullptr) ? 0 : sKeys->length;
	int32_t keymapCount = (keymapKeys == nullptr) ? 0 : keymapKeys->length;
	if (sCount == 0) {
		return keymapKeys;
	}
	if (keymapCount == 0) {
		return sKeys;
	}
	$var($KeyStrokeArray, retValue, $new($KeyStrokeArray, sCount + keymapCount));
	$System::arraycopy(sKeys, 0, retValue, 0, sCount);
	$System::arraycopy(keymapKeys, 0, retValue, sCount, keymapCount);
	return retValue;
}

int32_t JTextComponent$KeymapWrapper::size() {
	$var($KeyStrokeArray, keymapStrokes, $nc(this->keymap)->getBoundKeyStrokes());
	int32_t keymapCount = (keymapStrokes == nullptr) ? 0 : keymapStrokes->length;
	return $InputMap::size() + keymapCount;
}

$Object* JTextComponent$KeymapWrapper::get($KeyStroke* keyStroke) {
	$var($Object, retValue, $nc(this->keymap)->getAction(keyStroke));
	if (retValue == nullptr) {
		$assign(retValue, $InputMap::get(keyStroke));
		bool var$0 = retValue == nullptr && $nc(keyStroke)->getKeyChar() != $KeyEvent::CHAR_UNDEFINED;
		if (var$0 && $nc(this->keymap)->getDefaultAction() != nullptr) {
			$assign(retValue, JTextComponent$KeymapWrapper::DefaultActionKey);
		}
	}
	return retValue;
}

void JTextComponent$KeymapWrapper::clinit$($Class* clazz) {
	$assignStatic(JTextComponent$KeymapWrapper::DefaultActionKey, $new($Object));
}

JTextComponent$KeymapWrapper::JTextComponent$KeymapWrapper() {
}

$Class* JTextComponent$KeymapWrapper::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"DefaultActionKey", "Ljava/lang/Object;", nullptr, $STATIC | $FINAL, $staticField(JTextComponent$KeymapWrapper, DefaultActionKey)},
		{"keymap", "Ljavax/swing/text/Keymap;", nullptr, $PRIVATE, $field(JTextComponent$KeymapWrapper, keymap)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/text/Keymap;)V", nullptr, 0, $method(JTextComponent$KeymapWrapper, init$, void, $Keymap*)},
		{"get", "(Ljavax/swing/KeyStroke;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(JTextComponent$KeymapWrapper, get, $Object*, $KeyStroke*)},
		{"keys", "()[Ljavax/swing/KeyStroke;", nullptr, $PUBLIC, $virtualMethod(JTextComponent$KeymapWrapper, keys, $KeyStrokeArray*)},
		{"size", "()I", nullptr, $PUBLIC, $virtualMethod(JTextComponent$KeymapWrapper, size, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.text.JTextComponent$KeymapWrapper", "javax.swing.text.JTextComponent", "KeymapWrapper", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.text.JTextComponent$KeymapWrapper",
		"javax.swing.InputMap",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.text.JTextComponent"
	};
	$loadClass(JTextComponent$KeymapWrapper, name, initialize, &classInfo$$, JTextComponent$KeymapWrapper::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(JTextComponent$KeymapWrapper);
	});
	return class$;
}

$Class* JTextComponent$KeymapWrapper::class$ = nullptr;

		} // text
	} // swing
} // javax