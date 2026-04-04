#include <java/beans/MetaData$java_awt_AWTKeyStroke_PersistenceDelegate.h>
#include <java/awt/AWTKeyStroke.h>
#include <java/awt/event/KeyEvent.h>
#include <java/beans/Encoder.h>
#include <java/beans/Expression.h>
#include <java/beans/MetaData.h>
#include <java/beans/PersistenceDelegate.h>
#include <java/lang/IllegalStateException.h>
#include <jcpp.h>

#undef CHAR_UNDEFINED
#undef VK_UNDEFINED

using $AWTKeyStroke = ::java::awt::AWTKeyStroke;
using $KeyEvent = ::java::awt::event::KeyEvent;
using $Encoder = ::java::beans::Encoder;
using $Expression = ::java::beans::Expression;
using $PersistenceDelegate = ::java::beans::PersistenceDelegate;
using $Boolean = ::java::lang::Boolean;
using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace beans {

void MetaData$java_awt_AWTKeyStroke_PersistenceDelegate::init$() {
	$PersistenceDelegate::init$();
}

bool MetaData$java_awt_AWTKeyStroke_PersistenceDelegate::mutatesTo(Object$* oldInstance, Object$* newInstance) {
	return $nc($of(oldInstance))->equals(newInstance);
}

$Expression* MetaData$java_awt_AWTKeyStroke_PersistenceDelegate::instantiate(Object$* oldInstance, $Encoder* out) {
	$useLocalObjectStack();
	$var($AWTKeyStroke, key, $cast($AWTKeyStroke, oldInstance));
	char16_t ch = $nc(key)->getKeyChar();
	int32_t code = key->getKeyCode();
	int32_t mask = key->getModifiers();
	bool onKeyRelease = key->isOnKeyRelease();
	$var($ObjectArray, args, nullptr);
	if (ch == $KeyEvent::CHAR_UNDEFINED) {
		$assign(args, !onKeyRelease ? $new($ObjectArray, {
			$($Integer::valueOf(code)),
			$($Integer::valueOf(mask))
		}) : $new($ObjectArray, {
			$($Integer::valueOf(code)),
			$($Integer::valueOf(mask)),
			$($Boolean::valueOf(onKeyRelease))
		}));
	} else if (code == $KeyEvent::VK_UNDEFINED) {
		if (!onKeyRelease) {
			$assign(args, (mask == 0) ? $new($ObjectArray, {$($Character::valueOf(ch))}) : $new($ObjectArray, {
				$($Character::valueOf(ch)),
				$($Integer::valueOf(mask))
			}));
		} else if (mask == 0) {
			$assign(args, $new($ObjectArray, {
				$($Character::valueOf(ch)),
				$($Boolean::valueOf(onKeyRelease))
			}));
		}
	}
	if (args == nullptr) {
		$throwNew($IllegalStateException, $$str({"Unsupported KeyStroke: "_s, key}));
	}
	$Class* type = key->getClass();
	$var($String, name, type->getName());
	int32_t index = $nc(name)->lastIndexOf(u'.') + 1;
	if (index > 0) {
		$assign(name, name->substring(index));
	}
	return $new($Expression, key, type, $$str({"get"_s, name}), args);
}

MetaData$java_awt_AWTKeyStroke_PersistenceDelegate::MetaData$java_awt_AWTKeyStroke_PersistenceDelegate() {
}

$Class* MetaData$java_awt_AWTKeyStroke_PersistenceDelegate::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(MetaData$java_awt_AWTKeyStroke_PersistenceDelegate, init$, void)},
		{"instantiate", "(Ljava/lang/Object;Ljava/beans/Encoder;)Ljava/beans/Expression;", nullptr, $PROTECTED, $virtualMethod(MetaData$java_awt_AWTKeyStroke_PersistenceDelegate, instantiate, $Expression*, Object$*, $Encoder*)},
		{"mutatesTo", "(Ljava/lang/Object;Ljava/lang/Object;)Z", nullptr, $PROTECTED, $virtualMethod(MetaData$java_awt_AWTKeyStroke_PersistenceDelegate, mutatesTo, bool, Object$*, Object$*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.beans.MetaData$java_awt_AWTKeyStroke_PersistenceDelegate", "java.beans.MetaData", "java_awt_AWTKeyStroke_PersistenceDelegate", $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"java.beans.MetaData$java_awt_AWTKeyStroke_PersistenceDelegate",
		"java.beans.PersistenceDelegate",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.beans.MetaData"
	};
	$loadClass(MetaData$java_awt_AWTKeyStroke_PersistenceDelegate, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MetaData$java_awt_AWTKeyStroke_PersistenceDelegate);
	});
	return class$;
}

$Class* MetaData$java_awt_AWTKeyStroke_PersistenceDelegate::class$ = nullptr;

	} // beans
} // java