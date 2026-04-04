#ifndef _javax_swing_KeyStroke_h_
#define _javax_swing_KeyStroke_h_
//$ class javax.swing.KeyStroke
//$ extends java.awt.AWTKeyStroke

#include <java/awt/AWTKeyStroke.h>

namespace java {
	namespace awt {
		namespace event {
			class KeyEvent;
		}
	}
}
namespace java {
	namespace lang {
		class Character;
	}
}

namespace javax {
	namespace swing {

class $export KeyStroke : public ::java::awt::AWTKeyStroke {
	$class(KeyStroke, 0, ::java::awt::AWTKeyStroke)
public:
	KeyStroke();
	static void clinit$(::java::lang::Class* clazz);
	void init$();
	void init$(char16_t keyChar, int32_t keyCode, int32_t modifiers, bool onKeyRelease);
	static ::javax::swing::KeyStroke* getKeyStroke(char16_t keyChar);
	static ::javax::swing::KeyStroke* getKeyStroke(char16_t keyChar, bool onKeyRelease);
	static ::javax::swing::KeyStroke* getKeyStroke(::java::lang::Character* keyChar, int32_t modifiers);
	static ::javax::swing::KeyStroke* getKeyStroke(int32_t keyCode, int32_t modifiers, bool onKeyRelease);
	static ::javax::swing::KeyStroke* getKeyStroke(int32_t keyCode, int32_t modifiers);
	static ::javax::swing::KeyStroke* getKeyStroke($String* s);
	static ::javax::swing::KeyStroke* getKeyStrokeForEvent(::java::awt::event::KeyEvent* anEvent);
	static const int64_t serialVersionUID = (int64_t)0x8243c5977576093e;
};

	} // swing
} // javax

#endif // _javax_swing_KeyStroke_h_