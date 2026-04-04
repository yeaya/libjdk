#include <java/awt/event/InputEvent.h>
#include <java/awt/AWTEvent.h>
#include <java/awt/AWTPermission.h>
#include <java/awt/Component.h>
#include <java/awt/GraphicsEnvironment.h>
#include <java/awt/Toolkit.h>
#include <java/awt/event/ComponentEvent.h>
#include <java/awt/event/InputEvent$1.h>
#include <java/awt/event/NativeLibLoader.h>
#include <java/lang/SecurityException.h>
#include <java/lang/SecurityManager.h>
#include <java/security/Permission.h>
#include <java/util/Arrays.h>
#include <sun/awt/AWTAccessor.h>
#include <sun/awt/AWTPermissions.h>
#include <sun/util/logging/PlatformLogger$Level.h>
#include <sun/util/logging/PlatformLogger.h>
#include <jcpp.h>

#undef ACCESS_CLIPBOARD_PERMISSION
#undef ALT_DOWN_MASK
#undef ALT_GRAPH_DOWN_MASK
#undef ALT_GRAPH_MASK
#undef ALT_MASK
#undef BUTTON1_DOWN_MASK
#undef BUTTON1_MASK
#undef BUTTON2_DOWN_MASK
#undef BUTTON2_MASK
#undef BUTTON3_DOWN_MASK
#undef BUTTON3_MASK
#undef BUTTON_DOWN_MASK
#undef CTRL_DOWN_MASK
#undef CTRL_MASK
#undef FINE
#undef FIRST_HIGH_BIT
#undef HIGH_MODIFIERS
#undef JDK_1_3_MODIFIERS
#undef META_DOWN_MASK
#undef META_MASK
#undef SHIFT_DOWN_MASK
#undef SHIFT_MASK

using $Component = ::java::awt::Component;
using $GraphicsEnvironment = ::java::awt::GraphicsEnvironment;
using $Toolkit = ::java::awt::Toolkit;
using $ComponentEvent = ::java::awt::event::ComponentEvent;
using $InputEvent$1 = ::java::awt::event::InputEvent$1;
using $NativeLibLoader = ::java::awt::event::NativeLibLoader;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $SecurityException = ::java::lang::SecurityException;
using $SecurityManager = ::java::lang::SecurityManager;
using $Arrays = ::java::util::Arrays;
using $AWTAccessor = ::sun::awt::AWTAccessor;
using $AWTPermissions = ::sun::awt::AWTPermissions;
using $PlatformLogger = ::sun::util::logging::PlatformLogger;
using $PlatformLogger$Level = ::sun::util::logging::PlatformLogger$Level;

namespace java {
	namespace awt {
		namespace event {

$PlatformLogger* InputEvent::logger = nullptr;
$ints* InputEvent::BUTTON_DOWN_MASK = nullptr;

$ints* InputEvent::getButtonDownMasks() {
	$init(InputEvent);
	return $Arrays::copyOf(InputEvent::BUTTON_DOWN_MASK, InputEvent::BUTTON_DOWN_MASK->length);
}

int32_t InputEvent::getMaskForButton(int32_t button) {
	$init(InputEvent);
	$useLocalObjectStack();
	if (button <= 0 || button > InputEvent::BUTTON_DOWN_MASK->length) {
		$throwNew($IllegalArgumentException, $$str({"button doesn\'t exist "_s, $$str(button)}));
	}
	return InputEvent::BUTTON_DOWN_MASK->get(button - 1);
}

void InputEvent::initIDs() {
	$init(InputEvent);
	$prepareNativeStatic(initIDs, void);
	$invokeNativeStatic();
	$finishNativeStatic();
}

void InputEvent::init$($Component* source, int32_t id, int64_t when, int32_t modifiers) {
	$ComponentEvent::init$(source, id);
	this->when = when;
	this->modifiers = modifiers;
	this->canAccessSystemClipboard$ = canAccessSystemClipboard();
}

bool InputEvent::canAccessSystemClipboard() {
	bool b = false;
	if (!$GraphicsEnvironment::isHeadless()) {
		$var($SecurityManager, sm, $System::getSecurityManager());
		if (sm != nullptr) {
			try {
				$init($AWTPermissions);
				sm->checkPermission($AWTPermissions::ACCESS_CLIPBOARD_PERMISSION);
				b = true;
			} catch ($SecurityException& se) {
				$init($PlatformLogger$Level);
				if ($nc(InputEvent::logger)->isLoggable($PlatformLogger$Level::FINE)) {
					InputEvent::logger->fine("InputEvent.canAccessSystemClipboard() got SecurityException "_s, se);
				}
			}
		} else {
			b = true;
		}
	}
	return b;
}

bool InputEvent::isShiftDown() {
	return (this->modifiers & InputEvent::SHIFT_DOWN_MASK) != 0;
}

bool InputEvent::isControlDown() {
	return (this->modifiers & InputEvent::CTRL_DOWN_MASK) != 0;
}

bool InputEvent::isMetaDown() {
	return (this->modifiers & InputEvent::META_DOWN_MASK) != 0;
}

bool InputEvent::isAltDown() {
	return (this->modifiers & InputEvent::ALT_DOWN_MASK) != 0;
}

bool InputEvent::isAltGraphDown() {
	return (this->modifiers & InputEvent::ALT_GRAPH_DOWN_MASK) != 0;
}

int64_t InputEvent::getWhen() {
	return this->when;
}

int32_t InputEvent::getModifiers() {
	return this->modifiers & (InputEvent::JDK_1_3_MODIFIERS | InputEvent::HIGH_MODIFIERS);
}

int32_t InputEvent::getModifiersEx() {
	return this->modifiers & ~InputEvent::JDK_1_3_MODIFIERS;
}

void InputEvent::consume() {
	this->consumed = true;
}

bool InputEvent::isConsumed() {
	return this->consumed;
}

$String* InputEvent::getModifiersExText(int32_t modifiers) {
	$init(InputEvent);
	$useLocalObjectStack();
	$var($StringBuilder, buf, $new($StringBuilder));
	if ((modifiers & InputEvent::META_DOWN_MASK) != 0) {
		buf->append($($Toolkit::getProperty("AWT.meta"_s, "Meta"_s)));
		buf->append("+"_s);
	}
	if ((modifiers & InputEvent::CTRL_DOWN_MASK) != 0) {
		buf->append($($Toolkit::getProperty("AWT.control"_s, "Ctrl"_s)));
		buf->append("+"_s);
	}
	if ((modifiers & InputEvent::ALT_DOWN_MASK) != 0) {
		buf->append($($Toolkit::getProperty("AWT.alt"_s, "Alt"_s)));
		buf->append("+"_s);
	}
	if ((modifiers & InputEvent::SHIFT_DOWN_MASK) != 0) {
		buf->append($($Toolkit::getProperty("AWT.shift"_s, "Shift"_s)));
		buf->append("+"_s);
	}
	if ((modifiers & InputEvent::ALT_GRAPH_DOWN_MASK) != 0) {
		buf->append($($Toolkit::getProperty("AWT.altGraph"_s, "Alt Graph"_s)));
		buf->append("+"_s);
	}
	int32_t buttonNumber = 1;
	{
		$var($ints, arr$, InputEvent::BUTTON_DOWN_MASK);
		for (int32_t len$ = $nc(arr$)->length, i$ = 0; i$ < len$; ++i$) {
			int32_t mask = arr$->get(i$);
			{
				if ((modifiers & mask) != 0) {
					buf->append($($Toolkit::getProperty($$str({"AWT.button"_s, $$str(buttonNumber)}), $$str({"Button"_s, $$str(buttonNumber)}))));
					buf->append("+"_s);
				}
				++buttonNumber;
			}
		}
	}
	if (buf->length() > 0) {
		buf->setLength(buf->length() - 1);
	}
	return buf->toString();
}

void InputEvent::clinit$($Class* clazz) {
	$assignStatic(InputEvent::logger, $PlatformLogger::getLogger("java.awt.event.InputEvent"_s));
	$assignStatic(InputEvent::BUTTON_DOWN_MASK, $new($ints, {
		InputEvent::BUTTON1_DOWN_MASK,
		InputEvent::BUTTON2_DOWN_MASK,
		InputEvent::BUTTON3_DOWN_MASK,
		1 << 14,
		1 << 15,
		1 << 16,
		1 << 17,
		1 << 18,
		1 << 19,
		1 << 20,
		1 << 21,
		1 << 22,
		1 << 23,
		1 << 24,
		1 << 25,
		1 << 26,
		1 << 27,
		1 << 28,
		1 << 29,
		1 << 30
	}));
	{
		$NativeLibLoader::loadLibraries();
		if (!$GraphicsEnvironment::isHeadless()) {
			InputEvent::initIDs();
		}
		$AWTAccessor::setInputEventAccessor($$new($InputEvent$1));
	}
}

InputEvent::InputEvent() {
}

$Class* InputEvent::load$($String* name, bool initialize) {
	$NamedAttribute SHIFT_MASKfieldAnnotations$$$namedAttribute[] = {
		{"since", 's', "9"},
		{}
	};
	$CompoundAttribute SHIFT_MASKfieldAnnotations$$[] = {
		{"Ljava/lang/Deprecated;", SHIFT_MASKfieldAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute CTRL_MASKfieldAnnotations$$$namedAttribute[] = {
		{"since", 's', "9"},
		{}
	};
	$CompoundAttribute CTRL_MASKfieldAnnotations$$[] = {
		{"Ljava/lang/Deprecated;", CTRL_MASKfieldAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute META_MASKfieldAnnotations$$$namedAttribute[] = {
		{"since", 's', "9"},
		{}
	};
	$CompoundAttribute META_MASKfieldAnnotations$$[] = {
		{"Ljava/lang/Deprecated;", META_MASKfieldAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute ALT_MASKfieldAnnotations$$$namedAttribute[] = {
		{"since", 's', "9"},
		{}
	};
	$CompoundAttribute ALT_MASKfieldAnnotations$$[] = {
		{"Ljava/lang/Deprecated;", ALT_MASKfieldAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute ALT_GRAPH_MASKfieldAnnotations$$$namedAttribute[] = {
		{"since", 's', "9"},
		{}
	};
	$CompoundAttribute ALT_GRAPH_MASKfieldAnnotations$$[] = {
		{"Ljava/lang/Deprecated;", ALT_GRAPH_MASKfieldAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute BUTTON1_MASKfieldAnnotations$$$namedAttribute[] = {
		{"since", 's', "9"},
		{}
	};
	$CompoundAttribute BUTTON1_MASKfieldAnnotations$$[] = {
		{"Ljava/lang/Deprecated;", BUTTON1_MASKfieldAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute BUTTON2_MASKfieldAnnotations$$$namedAttribute[] = {
		{"since", 's', "9"},
		{}
	};
	$CompoundAttribute BUTTON2_MASKfieldAnnotations$$[] = {
		{"Ljava/lang/Deprecated;", BUTTON2_MASKfieldAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute BUTTON3_MASKfieldAnnotations$$$namedAttribute[] = {
		{"since", 's', "9"},
		{}
	};
	$CompoundAttribute BUTTON3_MASKfieldAnnotations$$[] = {
		{"Ljava/lang/Deprecated;", BUTTON3_MASKfieldAnnotations$$$namedAttribute},
		{}
	};
	$FieldInfo fieldInfos$$[] = {
		{"logger", "Lsun/util/logging/PlatformLogger;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(InputEvent, logger)},
		{"SHIFT_MASK", "I", nullptr, $PUBLIC | $STATIC | $FINAL | $DEPRECATED, $constField(InputEvent, SHIFT_MASK), SHIFT_MASKfieldAnnotations$$},
		{"CTRL_MASK", "I", nullptr, $PUBLIC | $STATIC | $FINAL | $DEPRECATED, $constField(InputEvent, CTRL_MASK), CTRL_MASKfieldAnnotations$$},
		{"META_MASK", "I", nullptr, $PUBLIC | $STATIC | $FINAL | $DEPRECATED, $constField(InputEvent, META_MASK), META_MASKfieldAnnotations$$},
		{"ALT_MASK", "I", nullptr, $PUBLIC | $STATIC | $FINAL | $DEPRECATED, $constField(InputEvent, ALT_MASK), ALT_MASKfieldAnnotations$$},
		{"ALT_GRAPH_MASK", "I", nullptr, $PUBLIC | $STATIC | $FINAL | $DEPRECATED, $constField(InputEvent, ALT_GRAPH_MASK), ALT_GRAPH_MASKfieldAnnotations$$},
		{"BUTTON1_MASK", "I", nullptr, $PUBLIC | $STATIC | $FINAL | $DEPRECATED, $constField(InputEvent, BUTTON1_MASK), BUTTON1_MASKfieldAnnotations$$},
		{"BUTTON2_MASK", "I", nullptr, $PUBLIC | $STATIC | $FINAL | $DEPRECATED, $constField(InputEvent, BUTTON2_MASK), BUTTON2_MASKfieldAnnotations$$},
		{"BUTTON3_MASK", "I", nullptr, $PUBLIC | $STATIC | $FINAL | $DEPRECATED, $constField(InputEvent, BUTTON3_MASK), BUTTON3_MASKfieldAnnotations$$},
		{"SHIFT_DOWN_MASK", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(InputEvent, SHIFT_DOWN_MASK)},
		{"CTRL_DOWN_MASK", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(InputEvent, CTRL_DOWN_MASK)},
		{"META_DOWN_MASK", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(InputEvent, META_DOWN_MASK)},
		{"ALT_DOWN_MASK", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(InputEvent, ALT_DOWN_MASK)},
		{"BUTTON1_DOWN_MASK", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(InputEvent, BUTTON1_DOWN_MASK)},
		{"BUTTON2_DOWN_MASK", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(InputEvent, BUTTON2_DOWN_MASK)},
		{"BUTTON3_DOWN_MASK", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(InputEvent, BUTTON3_DOWN_MASK)},
		{"ALT_GRAPH_DOWN_MASK", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(InputEvent, ALT_GRAPH_DOWN_MASK)},
		{"BUTTON_DOWN_MASK", "[I", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(InputEvent, BUTTON_DOWN_MASK)},
		{"FIRST_HIGH_BIT", "I", nullptr, $STATIC | $FINAL, $constField(InputEvent, FIRST_HIGH_BIT)},
		{"JDK_1_3_MODIFIERS", "I", nullptr, $STATIC | $FINAL, $constField(InputEvent, JDK_1_3_MODIFIERS)},
		{"HIGH_MODIFIERS", "I", nullptr, $STATIC | $FINAL, $constField(InputEvent, HIGH_MODIFIERS)},
		{"when", "J", nullptr, 0, $field(InputEvent, when)},
		{"modifiers", "I", nullptr, 0, $field(InputEvent, modifiers)},
		{"canAccessSystemClipboard", "Z", nullptr, $PRIVATE | $TRANSIENT, $field(InputEvent, canAccessSystemClipboard$)},
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(InputEvent, serialVersionUID)},
		{}
	};
	$NamedAttribute getModifiersmethodAnnotations$$$namedAttribute[] = {
		{"since", 's', "9"},
		{}
	};
	$CompoundAttribute getModifiersmethodAnnotations$$[] = {
		{"Ljava/lang/Deprecated;", getModifiersmethodAnnotations$$$namedAttribute},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/awt/Component;IJI)V", nullptr, 0, $method(InputEvent, init$, void, $Component*, int32_t, int64_t, int32_t)},
		{"canAccessSystemClipboard", "()Z", nullptr, $PRIVATE, $method(InputEvent, canAccessSystemClipboard, bool)},
		{"consume", "()V", nullptr, $PUBLIC, $virtualMethod(InputEvent, consume, void)},
		{"getButtonDownMasks", "()[I", nullptr, $PRIVATE | $STATIC, $staticMethod(InputEvent, getButtonDownMasks, $ints*)},
		{"getMaskForButton", "(I)I", nullptr, $PUBLIC | $STATIC, $staticMethod(InputEvent, getMaskForButton, int32_t, int32_t)},
		{"getModifiers", "()I", nullptr, $PUBLIC | $DEPRECATED, $virtualMethod(InputEvent, getModifiers, int32_t), nullptr, nullptr, getModifiersmethodAnnotations$$},
		{"getModifiersEx", "()I", nullptr, $PUBLIC, $virtualMethod(InputEvent, getModifiersEx, int32_t)},
		{"getModifiersExText", "(I)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $staticMethod(InputEvent, getModifiersExText, $String*, int32_t)},
		{"getWhen", "()J", nullptr, $PUBLIC, $virtualMethod(InputEvent, getWhen, int64_t)},
		{"initIDs", "()V", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(InputEvent, initIDs, void)},
		{"isAltDown", "()Z", nullptr, $PUBLIC, $virtualMethod(InputEvent, isAltDown, bool)},
		{"isAltGraphDown", "()Z", nullptr, $PUBLIC, $virtualMethod(InputEvent, isAltGraphDown, bool)},
		{"isConsumed", "()Z", nullptr, $PUBLIC, $virtualMethod(InputEvent, isConsumed, bool)},
		{"isControlDown", "()Z", nullptr, $PUBLIC, $virtualMethod(InputEvent, isControlDown, bool)},
		{"isMetaDown", "()Z", nullptr, $PUBLIC, $virtualMethod(InputEvent, isMetaDown, bool)},
		{"isShiftDown", "()Z", nullptr, $PUBLIC, $virtualMethod(InputEvent, isShiftDown, bool)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.awt.event.InputEvent$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER | $ABSTRACT,
		"java.awt.event.InputEvent",
		"java.awt.event.ComponentEvent",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"java.awt.event.InputEvent$1"
	};
	$loadClass(InputEvent, name, initialize, &classInfo$$, InputEvent::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(InputEvent);
	});
	return class$;
}

$Class* InputEvent::class$ = nullptr;

		} // event
	} // awt
} // java