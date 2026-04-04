#include <javax/swing/text/JTextComponent$4.h>
#include <com/sun/beans/util/Cache$Kind.h>
#include <com/sun/beans/util/Cache.h>
#include <java/security/AccessController.h>
#include <javax/swing/text/JTextComponent$4$1.h>
#include <javax/swing/text/JTextComponent.h>
#include <jcpp.h>

#undef FALSE
#undef TRUE

using $Cache = ::com::sun::beans::util::Cache;
using $Cache$Kind = ::com::sun::beans::util::Cache$Kind;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AccessController = ::java::security::AccessController;
using $JTextComponent = ::javax::swing::text::JTextComponent;
using $JTextComponent$4$1 = ::javax::swing::text::JTextComponent$4$1;

namespace javax {
	namespace swing {
		namespace text {

void JTextComponent$4::init$($Cache$Kind* keyKind, $Cache$Kind* valueKind) {
	$Cache::init$(keyKind, valueKind);
}

$Boolean* JTextComponent$4::create($Class* type) {
	$useLocalObjectStack();
	$beforeCallerSensitive();
	$load($JTextComponent);
	if ($JTextComponent::class$ == type) {
		return $Boolean::FALSE;
	}
	if ($$sure($Boolean, get($nc(type)->getSuperclass()))->booleanValue()) {
		return $Boolean::TRUE;
	}
	return $cast($Boolean, $AccessController::doPrivileged($$new($JTextComponent$4$1, this, type)));
}

$Object* JTextComponent$4::create(Object$* type) {
	return $of(this->create($cast($Class, type)));
}

JTextComponent$4::JTextComponent$4() {
}

$Class* JTextComponent$4::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/beans/util/Cache$Kind;Lcom/sun/beans/util/Cache$Kind;)V", nullptr, 0, $method(JTextComponent$4, init$, void, $Cache$Kind*, $Cache$Kind*)},
		{"create", "(Ljava/lang/Class;)Ljava/lang/Boolean;", "(Ljava/lang/Class<*>;)Ljava/lang/Boolean;", $PUBLIC, $virtualMethod(JTextComponent$4, create, $Boolean*, $Class*)},
		{"create", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(JTextComponent$4, create, $Object*, Object$*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"javax.swing.text.JTextComponent",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.text.JTextComponent$4", nullptr, nullptr, 0},
		{"javax.swing.text.JTextComponent$4$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.text.JTextComponent$4",
		"com.sun.beans.util.Cache",
		nullptr,
		nullptr,
		methodInfos$$,
		"Lcom/sun/beans/util/Cache<Ljava/lang/Class<*>;Ljava/lang/Boolean;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.text.JTextComponent"
	};
	$loadClass(JTextComponent$4, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JTextComponent$4);
	});
	return class$;
}

$Class* JTextComponent$4::class$ = nullptr;

		} // text
	} // swing
} // javax