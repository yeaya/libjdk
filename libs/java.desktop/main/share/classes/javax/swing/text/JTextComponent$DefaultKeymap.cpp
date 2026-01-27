#include <javax/swing/text/JTextComponent$DefaultKeymap.h>

#include <java/util/Enumeration.h>
#include <java/util/Hashtable.h>
#include <java/util/Vector.h>
#include <javax/swing/Action.h>
#include <javax/swing/KeyStroke.h>
#include <javax/swing/text/JTextComponent.h>
#include <javax/swing/text/Keymap.h>
#include <jcpp.h>

using $ActionArray = $Array<::javax::swing::Action>;
using $KeyStrokeArray = $Array<::javax::swing::KeyStroke>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Enumeration = ::java::util::Enumeration;
using $Hashtable = ::java::util::Hashtable;
using $Vector = ::java::util::Vector;
using $Action = ::javax::swing::Action;
using $KeyStroke = ::javax::swing::KeyStroke;
using $Keymap = ::javax::swing::text::Keymap;

namespace javax {
	namespace swing {
		namespace text {

$FieldInfo _JTextComponent$DefaultKeymap_FieldInfo_[] = {
	{"nm", "Ljava/lang/String;", nullptr, 0, $field(JTextComponent$DefaultKeymap, nm)},
	{"parent", "Ljavax/swing/text/Keymap;", nullptr, 0, $field(JTextComponent$DefaultKeymap, parent)},
	{"bindings", "Ljava/util/Hashtable;", "Ljava/util/Hashtable<Ljavax/swing/KeyStroke;Ljavax/swing/Action;>;", 0, $field(JTextComponent$DefaultKeymap, bindings)},
	{"defaultAction", "Ljavax/swing/Action;", nullptr, 0, $field(JTextComponent$DefaultKeymap, defaultAction)},
	{}
};

$MethodInfo _JTextComponent$DefaultKeymap_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;Ljavax/swing/text/Keymap;)V", nullptr, 0, $method(JTextComponent$DefaultKeymap, init$, void, $String*, $Keymap*)},
	{"addActionForKeyStroke", "(Ljavax/swing/KeyStroke;Ljavax/swing/Action;)V", nullptr, $PUBLIC, $virtualMethod(JTextComponent$DefaultKeymap, addActionForKeyStroke, void, $KeyStroke*, $Action*)},
	{"getAction", "(Ljavax/swing/KeyStroke;)Ljavax/swing/Action;", nullptr, $PUBLIC, $virtualMethod(JTextComponent$DefaultKeymap, getAction, $Action*, $KeyStroke*)},
	{"getBoundActions", "()[Ljavax/swing/Action;", nullptr, $PUBLIC, $virtualMethod(JTextComponent$DefaultKeymap, getBoundActions, $ActionArray*)},
	{"getBoundKeyStrokes", "()[Ljavax/swing/KeyStroke;", nullptr, $PUBLIC, $virtualMethod(JTextComponent$DefaultKeymap, getBoundKeyStrokes, $KeyStrokeArray*)},
	{"getDefaultAction", "()Ljavax/swing/Action;", nullptr, $PUBLIC, $virtualMethod(JTextComponent$DefaultKeymap, getDefaultAction, $Action*)},
	{"getKeyStrokesForAction", "(Ljavax/swing/Action;)[Ljavax/swing/KeyStroke;", nullptr, $PUBLIC, $virtualMethod(JTextComponent$DefaultKeymap, getKeyStrokesForAction, $KeyStrokeArray*, $Action*)},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(JTextComponent$DefaultKeymap, getName, $String*)},
	{"getResolveParent", "()Ljavax/swing/text/Keymap;", nullptr, $PUBLIC, $virtualMethod(JTextComponent$DefaultKeymap, getResolveParent, $Keymap*)},
	{"isLocallyDefined", "(Ljavax/swing/KeyStroke;)Z", nullptr, $PUBLIC, $virtualMethod(JTextComponent$DefaultKeymap, isLocallyDefined, bool, $KeyStroke*)},
	{"removeBindings", "()V", nullptr, $PUBLIC, $virtualMethod(JTextComponent$DefaultKeymap, removeBindings, void)},
	{"removeKeyStrokeBinding", "(Ljavax/swing/KeyStroke;)V", nullptr, $PUBLIC, $virtualMethod(JTextComponent$DefaultKeymap, removeKeyStrokeBinding, void, $KeyStroke*)},
	{"setDefaultAction", "(Ljavax/swing/Action;)V", nullptr, $PUBLIC, $virtualMethod(JTextComponent$DefaultKeymap, setDefaultAction, void, $Action*)},
	{"setResolveParent", "(Ljavax/swing/text/Keymap;)V", nullptr, $PUBLIC, $virtualMethod(JTextComponent$DefaultKeymap, setResolveParent, void, $Keymap*)},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(JTextComponent$DefaultKeymap, toString, $String*)},
	{}
};

$InnerClassInfo _JTextComponent$DefaultKeymap_InnerClassesInfo_[] = {
	{"javax.swing.text.JTextComponent$DefaultKeymap", "javax.swing.text.JTextComponent", "DefaultKeymap", $STATIC},
	{}
};

$ClassInfo _JTextComponent$DefaultKeymap_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.text.JTextComponent$DefaultKeymap",
	"java.lang.Object",
	"javax.swing.text.Keymap",
	_JTextComponent$DefaultKeymap_FieldInfo_,
	_JTextComponent$DefaultKeymap_MethodInfo_,
	nullptr,
	nullptr,
	_JTextComponent$DefaultKeymap_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.text.JTextComponent"
};

$Object* allocate$JTextComponent$DefaultKeymap($Class* clazz) {
	return $of($alloc(JTextComponent$DefaultKeymap));
}

void JTextComponent$DefaultKeymap::init$($String* nm, $Keymap* parent) {
	$set(this, nm, nm);
	$set(this, parent, parent);
	$set(this, bindings, $new($Hashtable));
}

$Action* JTextComponent$DefaultKeymap::getDefaultAction() {
	if (this->defaultAction != nullptr) {
		return this->defaultAction;
	}
	return (this->parent != nullptr) ? $nc(this->parent)->getDefaultAction() : ($Action*)nullptr;
}

void JTextComponent$DefaultKeymap::setDefaultAction($Action* a) {
	$set(this, defaultAction, a);
}

$String* JTextComponent$DefaultKeymap::getName() {
	return this->nm;
}

$Action* JTextComponent$DefaultKeymap::getAction($KeyStroke* key) {
	$var($Action, a, $cast($Action, $nc(this->bindings)->get(key)));
	if ((a == nullptr) && (this->parent != nullptr)) {
		$assign(a, $nc(this->parent)->getAction(key));
	}
	return a;
}

$KeyStrokeArray* JTextComponent$DefaultKeymap::getBoundKeyStrokes() {
	$useLocalCurrentObjectStackCache();
	$var($KeyStrokeArray, keys, $new($KeyStrokeArray, $nc(this->bindings)->size()));
	int32_t i = 0;
	{
		$var($Enumeration, e, $nc(this->bindings)->keys());
		for (; $nc(e)->hasMoreElements();) {
			keys->set(i++, $cast($KeyStroke, $(e->nextElement())));
		}
	}
	return keys;
}

$ActionArray* JTextComponent$DefaultKeymap::getBoundActions() {
	$useLocalCurrentObjectStackCache();
	$var($ActionArray, actions, $new($ActionArray, $nc(this->bindings)->size()));
	int32_t i = 0;
	{
		$var($Enumeration, e, $nc(this->bindings)->elements());
		for (; $nc(e)->hasMoreElements();) {
			actions->set(i++, $cast($Action, $(e->nextElement())));
		}
	}
	return actions;
}

$KeyStrokeArray* JTextComponent$DefaultKeymap::getKeyStrokesForAction($Action* a) {
	$useLocalCurrentObjectStackCache();
	if (a == nullptr) {
		return nullptr;
	}
	$var($KeyStrokeArray, retValue, nullptr);
	$var($Vector, keyStrokes, nullptr);
	{
		$var($Enumeration, keys, $nc(this->bindings)->keys());
		for (; $nc(keys)->hasMoreElements();) {
			$var($KeyStroke, key, $cast($KeyStroke, keys->nextElement()));
			if ($equals($nc(this->bindings)->get(key), a)) {
				if (keyStrokes == nullptr) {
					$assign(keyStrokes, $new($Vector));
				}
				$nc(keyStrokes)->addElement(key);
			}
		}
	}
	if (this->parent != nullptr) {
		$var($KeyStrokeArray, pStrokes, $nc(this->parent)->getKeyStrokesForAction(a));
		if (pStrokes != nullptr) {
			int32_t rCount = 0;
			for (int32_t counter = pStrokes->length - 1; counter >= 0; --counter) {
				if (isLocallyDefined(pStrokes->get(counter))) {
					pStrokes->set(counter, nullptr);
					++rCount;
				}
			}
			if (rCount > 0 && rCount < pStrokes->length) {
				if (keyStrokes == nullptr) {
					$assign(keyStrokes, $new($Vector));
				}
				for (int32_t counter = pStrokes->length - 1; counter >= 0; --counter) {
					if (pStrokes->get(counter) != nullptr) {
						$nc(keyStrokes)->addElement(pStrokes->get(counter));
					}
				}
			} else if (rCount == 0) {
				if (keyStrokes == nullptr) {
					$assign(retValue, pStrokes);
				} else {
					$assign(retValue, $new($KeyStrokeArray, $nc(keyStrokes)->size() + pStrokes->length));
					keyStrokes->copyInto(retValue);
					$System::arraycopy(pStrokes, 0, retValue, keyStrokes->size(), pStrokes->length);
					$assign(keyStrokes, nullptr);
				}
			}
		}
	}
	if (keyStrokes != nullptr) {
		$assign(retValue, $new($KeyStrokeArray, keyStrokes->size()));
		keyStrokes->copyInto(retValue);
	}
	return retValue;
}

bool JTextComponent$DefaultKeymap::isLocallyDefined($KeyStroke* key) {
	return $nc(this->bindings)->containsKey(key);
}

void JTextComponent$DefaultKeymap::addActionForKeyStroke($KeyStroke* key, $Action* a) {
	$nc(this->bindings)->put(key, a);
}

void JTextComponent$DefaultKeymap::removeKeyStrokeBinding($KeyStroke* key) {
	$nc(this->bindings)->remove(key);
}

void JTextComponent$DefaultKeymap::removeBindings() {
	$nc(this->bindings)->clear();
}

$Keymap* JTextComponent$DefaultKeymap::getResolveParent() {
	return this->parent;
}

void JTextComponent$DefaultKeymap::setResolveParent($Keymap* parent) {
	$set(this, parent, parent);
}

$String* JTextComponent$DefaultKeymap::toString() {
	return $str({"Keymap["_s, this->nm, "]"_s, this->bindings});
}

JTextComponent$DefaultKeymap::JTextComponent$DefaultKeymap() {
}

$Class* JTextComponent$DefaultKeymap::load$($String* name, bool initialize) {
	$loadClass(JTextComponent$DefaultKeymap, name, initialize, &_JTextComponent$DefaultKeymap_ClassInfo_, allocate$JTextComponent$DefaultKeymap);
	return class$;
}

$Class* JTextComponent$DefaultKeymap::class$ = nullptr;

		} // text
	} // swing
} // javax