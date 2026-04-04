#include <sun/awt/im/ExecutableInputMethodManager$3.h>
#include <java/awt/im/spi/InputMethodDescriptor.h>
#include <java/lang/ClassLoader.h>
#include <java/util/Iterator.h>
#include <java/util/Locale.h>
#include <java/util/ServiceLoader.h>
#include <java/util/Vector.h>
#include <sun/awt/im/ExecutableInputMethodManager.h>
#include <sun/awt/im/InputMethodLocator.h>
#include <jcpp.h>

using $InputMethodDescriptor = ::java::awt::im::spi::InputMethodDescriptor;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Iterator = ::java::util::Iterator;
using $Locale = ::java::util::Locale;
using $ServiceLoader = ::java::util::ServiceLoader;
using $ExecutableInputMethodManager = ::sun::awt::im::ExecutableInputMethodManager;
using $InputMethodLocator = ::sun::awt::im::InputMethodLocator;

namespace sun {
	namespace awt {
		namespace im {

void ExecutableInputMethodManager$3::init$($ExecutableInputMethodManager* this$0) {
	$set(this, this$0, this$0);
}

$Object* ExecutableInputMethodManager$3::run() {
	$useLocalObjectStack();
	$beforeCallerSensitive();
	$load($InputMethodDescriptor);
	$var($Iterator, i$, $$nc($ServiceLoader::load($InputMethodDescriptor::class$, $($ClassLoader::getSystemClassLoader())))->iterator());
	for (; $nc(i$)->hasNext();) {
		$var($InputMethodDescriptor, descriptor, $cast($InputMethodDescriptor, i$->next()));
		{
			$var($ClassLoader, cl, $nc(descriptor)->getClass()->getClassLoader());
			$nc(this->this$0->javaInputMethodLocatorList)->add($$new($InputMethodLocator, descriptor, cl, nullptr));
		}
	}
	return nullptr;
}

ExecutableInputMethodManager$3::ExecutableInputMethodManager$3() {
}

$Class* ExecutableInputMethodManager$3::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/awt/im/ExecutableInputMethodManager;", nullptr, $FINAL | $SYNTHETIC, $field(ExecutableInputMethodManager$3, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/awt/im/ExecutableInputMethodManager;)V", nullptr, 0, $method(ExecutableInputMethodManager$3, init$, void, $ExecutableInputMethodManager*)},
		{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(ExecutableInputMethodManager$3, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.awt.im.ExecutableInputMethodManager",
		"initializeInputMethodLocatorList",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.awt.im.ExecutableInputMethodManager$3", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.awt.im.ExecutableInputMethodManager$3",
		"java.lang.Object",
		"java.security.PrivilegedExceptionAction",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedExceptionAction<Ljava/lang/Object;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.awt.im.ExecutableInputMethodManager"
	};
	$loadClass(ExecutableInputMethodManager$3, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ExecutableInputMethodManager$3);
	});
	return class$;
}

$Class* ExecutableInputMethodManager$3::class$ = nullptr;

		} // im
	} // awt
} // sun