#include <javax/swing/UIDefaults$ProxyLazyValue$1.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/UIDefaults$ProxyLazyValue.h>
#include <javax/swing/UIDefaults.h>
#include <sun/reflect/misc/MethodUtil.h>
#include <sun/reflect/misc/ReflectUtil.h>
#include <sun/swing/SwingUtilities2.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Constructor = ::java::lang::reflect::Constructor;
using $Method = ::java::lang::reflect::Method;
using $UIDefaults = ::javax::swing::UIDefaults;
using $UIDefaults$ProxyLazyValue = ::javax::swing::UIDefaults$ProxyLazyValue;
using $MethodUtil = ::sun::reflect::misc::MethodUtil;
using $ReflectUtil = ::sun::reflect::misc::ReflectUtil;
using $SwingUtilities2 = ::sun::swing::SwingUtilities2;

namespace javax {
	namespace swing {

void UIDefaults$ProxyLazyValue$1::init$($UIDefaults$ProxyLazyValue* this$0, $UIDefaults* val$table) {
	$set(this, this$0, this$0);
	$set(this, val$table, val$table);
}

$Object* UIDefaults$ProxyLazyValue$1::run() {
	$useLocalObjectStack();
	$beforeCallerSensitive();
	try {
		$Class* c = nullptr;
		$var($Object, cl, nullptr);
		if (this->val$table == nullptr || !($instanceOf($ClassLoader, $assign(cl, this->val$table->get("ClassLoader"_s))))) {
			$assign(cl, $($Thread::currentThread())->getContextClassLoader());
			if (cl == nullptr) {
				$assign(cl, $ClassLoader::getSystemClassLoader());
			}
		}
		$ReflectUtil::checkPackageAccess(this->this$0->className);
		c = $Class::forName(this->this$0->className, true, $cast($ClassLoader, cl));
		$SwingUtilities2::checkAccess(c->getModifiers());
		if (this->this$0->methodName != nullptr) {
			$var($ClassArray, types, this->this$0->getClassArray(this->this$0->args));
			$var($Method, m, c->getMethod(this->this$0->methodName, types));
			return $MethodUtil::invoke(m, c, this->this$0->args);
		} else {
			$var($ClassArray, types, this->this$0->getClassArray(this->this$0->args));
			$var($Constructor, constructor, c->getConstructor(types));
			$SwingUtilities2::checkAccess($nc(constructor)->getModifiers());
			return constructor->newInstance(this->this$0->args);
		}
	} catch ($Exception& e) {
	}
	return nullptr;
}

UIDefaults$ProxyLazyValue$1::UIDefaults$ProxyLazyValue$1() {
}

$Class* UIDefaults$ProxyLazyValue$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/swing/UIDefaults$ProxyLazyValue;", nullptr, $FINAL | $SYNTHETIC, $field(UIDefaults$ProxyLazyValue$1, this$0)},
		{"val$table", "Ljavax/swing/UIDefaults;", nullptr, $FINAL | $SYNTHETIC, $field(UIDefaults$ProxyLazyValue$1, val$table)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/UIDefaults$ProxyLazyValue;Ljavax/swing/UIDefaults;)V", "()V", 0, $method(UIDefaults$ProxyLazyValue$1, init$, void, $UIDefaults$ProxyLazyValue*, $UIDefaults*)},
		{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(UIDefaults$ProxyLazyValue$1, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"javax.swing.UIDefaults$ProxyLazyValue",
		"createValue",
		"(Ljavax/swing/UIDefaults;)Ljava/lang/Object;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.UIDefaults$ProxyLazyValue", "javax.swing.UIDefaults", "ProxyLazyValue", $PUBLIC | $STATIC},
		{"javax.swing.UIDefaults$ProxyLazyValue$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.UIDefaults$ProxyLazyValue$1",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Object;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.UIDefaults"
	};
	$loadClass(UIDefaults$ProxyLazyValue$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(UIDefaults$ProxyLazyValue$1);
	});
	return class$;
}

$Class* UIDefaults$ProxyLazyValue$1::class$ = nullptr;

	} // swing
} // javax