#include <com/sun/java/swing/plaf/gtk/GTKStyle$GTKLazyValue.h>
#include <com/sun/java/swing/plaf/gtk/GTKStyle.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/ReflectiveOperationException.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/UIDefaults.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ReflectiveOperationException = ::java::lang::ReflectiveOperationException;
using $Method = ::java::lang::reflect::Method;
using $UIDefaults = ::javax::swing::UIDefaults;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace gtk {

void GTKStyle$GTKLazyValue::init$($String* name) {
	GTKStyle$GTKLazyValue::init$(name, nullptr);
}

void GTKStyle$GTKLazyValue::init$($String* name, $String* methodName) {
	$set(this, className, name);
	$set(this, methodName, methodName);
}

$Object* GTKStyle$GTKLazyValue::createValue($UIDefaults* table) {
	$useLocalObjectStack();
	$beforeCallerSensitive();
	try {
		$Class* c = $Class::forName(this->className, true, $($($Thread::currentThread())->getContextClassLoader()));
		if (this->methodName == nullptr) {
			return c->newInstance();
		}
		$var($Method, m, c->getMethod(this->methodName, ($ClassArray*)nullptr));
		return $nc(m)->invoke(c, ($ObjectArray*)nullptr);
	} catch ($ReflectiveOperationException& e) {
	}
	return nullptr;
}

GTKStyle$GTKLazyValue::GTKStyle$GTKLazyValue() {
}

$Class* GTKStyle$GTKLazyValue::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"className", "Ljava/lang/String;", nullptr, $PRIVATE, $field(GTKStyle$GTKLazyValue, className)},
		{"methodName", "Ljava/lang/String;", nullptr, $PRIVATE, $field(GTKStyle$GTKLazyValue, methodName)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, 0, $method(GTKStyle$GTKLazyValue, init$, void, $String*)},
		{"<init>", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, 0, $method(GTKStyle$GTKLazyValue, init$, void, $String*, $String*)},
		{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(GTKStyle$GTKLazyValue, createValue, $Object*, $UIDefaults*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.java.swing.plaf.gtk.GTKStyle$GTKLazyValue", "com.sun.java.swing.plaf.gtk.GTKStyle", "GTKLazyValue", $STATIC},
		{"javax.swing.UIDefaults$LazyValue", "javax.swing.UIDefaults", "LazyValue", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.java.swing.plaf.gtk.GTKStyle$GTKLazyValue",
		"java.lang.Object",
		"javax.swing.UIDefaults$LazyValue",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.java.swing.plaf.gtk.GTKStyle"
	};
	$loadClass(GTKStyle$GTKLazyValue, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(GTKStyle$GTKLazyValue);
	});
	return class$;
}

$Class* GTKStyle$GTKLazyValue::class$ = nullptr;

					} // gtk
				} // plaf
			} // swing
		} // java
	} // sun
} // com